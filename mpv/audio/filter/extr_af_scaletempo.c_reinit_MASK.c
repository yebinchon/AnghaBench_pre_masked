
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct priv {float frames_stride; int bytes_stride; int bytes_standing; int samples_standing; int bytes_overlap; int samples_overlap; char* buf_overlap; char* table_blend; float frames_search; char* buf_pre_corr; char* table_window; int bytes_per_frame; int num_channels; int bytes_queue; char* buf_queue; int in; int cur_format; int frames_stride_scaled; scalar_t__ bytes_to_slide; scalar_t__ bytes_queued; int * best_overlap_offset; TYPE_1__* opts; int * output_overlap; int speed; } ;
struct mp_filter {struct priv* priv; } ;
typedef int int64_t ;
typedef int int32_t ;
struct TYPE_2__ {float ms_stride; int percent_overlap; float ms_search; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mp_filter*,char*,int ,int,int,int,int,int,char*) ;
 int FUNC_1 (struct mp_filter*,char*) ;
 int VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 double FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int * VAR_5 ;
 int * VAR_6 ;
 void* FUNC_8 (char*,int) ;
 int FUNC_9 (struct priv*,int ) ;

__attribute__((used)) static bool FUNC_10(struct mp_filter *VAR_7)
{
    struct priv *VAR_8 = VAR_7->priv;

    FUNC_7(VAR_8->cur_format);

    float VAR_9 = FUNC_6(VAR_8->in) / 1000.0;
    int VAR_10 = FUNC_4(VAR_8->in);
    int VAR_11 = FUNC_5(VAR_8->in);

    int VAR_12 = 0;
    if (VAR_11 == VAR_1) {
        VAR_12 = 1;
    } else if (VAR_11 != VAR_0) {
        return 0;
    }
    int VAR_13 = VAR_12 ? 2 : 4;

    VAR_8->frames_stride = VAR_9 * VAR_8->opts->ms_stride;
    VAR_8->bytes_stride = VAR_8->frames_stride * VAR_13 * VAR_10;

    FUNC_9(VAR_8, VAR_8->speed);

    int VAR_14 = VAR_8->frames_stride * VAR_8->opts->percent_overlap;
    if (VAR_14 <= 0) {
        VAR_8->bytes_standing = VAR_8->bytes_stride;
        VAR_8->samples_standing = VAR_8->bytes_standing / VAR_13;
        VAR_8->output_overlap = ((void*)0);
        VAR_8->bytes_overlap = 0;
    } else {
        VAR_8->samples_overlap = VAR_14 * VAR_10;
        VAR_8->bytes_overlap = VAR_14 * VAR_10 * VAR_13;
        VAR_8->bytes_standing = VAR_8->bytes_stride - VAR_8->bytes_overlap;
        VAR_8->samples_standing = VAR_8->bytes_standing / VAR_13;
        VAR_8->buf_overlap = FUNC_8(VAR_8->buf_overlap, VAR_8->bytes_overlap);
        VAR_8->table_blend = FUNC_8(VAR_8->table_blend, VAR_8->bytes_overlap * 4);
        if (!VAR_8->buf_overlap || !VAR_8->table_blend) {
            FUNC_1(VAR_7, "Out of memory\n");
            return 0;
        }
        FUNC_2(VAR_8->buf_overlap, 0, VAR_8->bytes_overlap);
        if (VAR_12) {
            int32_t *VAR_15 = VAR_8->table_blend;
            int64_t VAR_16 = 0;
            for (int VAR_17 = 0; VAR_17 < VAR_14; VAR_17++) {
                int32_t VAR_18 = VAR_16 / VAR_14;
                for (int VAR_19 = 0; VAR_19 < VAR_10; VAR_19++)
                    *VAR_15++ = VAR_18;
                VAR_16 += 65536;
            }
            VAR_8->output_overlap = VAR_6;
        } else {
            float *VAR_20 = VAR_8->table_blend;
            for (int VAR_21 = 0; VAR_21 < VAR_14; VAR_21++) {
                float VAR_22 = VAR_21 / (float)VAR_14;
                for (int VAR_23 = 0; VAR_23 < VAR_10; VAR_23++)
                    *VAR_20++ = VAR_22;
            }
            VAR_8->output_overlap = VAR_5;
        }
    }

    VAR_8->frames_search = (VAR_14 > 1) ? VAR_9 * VAR_8->opts->ms_search : 0;
    if (VAR_8->frames_search <= 0)
        VAR_8->best_overlap_offset = ((void*)0);
    else {
        if (VAR_12) {
            int64_t VAR_24 = VAR_14;
            int32_t VAR_25 = 8589934588LL / (VAR_24 * VAR_24);
            VAR_8->buf_pre_corr = FUNC_8(VAR_8->buf_pre_corr,
                                        VAR_8->bytes_overlap * 2 + VAR_2);
            VAR_8->table_window = FUNC_8(VAR_8->table_window,
                                        VAR_8->bytes_overlap * 2 - VAR_10 * VAR_13 * 2);
            if (!VAR_8->buf_pre_corr || !VAR_8->table_window) {
                FUNC_1(VAR_7, "Out of memory\n");
                return 0;
            }
            FUNC_2((char *)VAR_8->buf_pre_corr + VAR_8->bytes_overlap * 2, 0,
                    VAR_2);
            int32_t *VAR_26 = VAR_8->table_window;
            for (int VAR_27 = 1; VAR_27 < VAR_14; VAR_27++) {
                int32_t VAR_28 = (VAR_27 * (VAR_24 - VAR_27) * VAR_25) >> 15;
                for (int VAR_29 = 0; VAR_29 < VAR_10; VAR_29++)
                    *VAR_26++ = VAR_28;
            }
            VAR_8->best_overlap_offset = VAR_4;
        } else {
            VAR_8->buf_pre_corr = FUNC_8(VAR_8->buf_pre_corr, VAR_8->bytes_overlap);
            VAR_8->table_window = FUNC_8(VAR_8->table_window,
                                        VAR_8->bytes_overlap - VAR_10 * VAR_13);
            if (!VAR_8->buf_pre_corr || !VAR_8->table_window) {
                FUNC_1(VAR_7, "Out of memory\n");
                return 0;
            }
            float *VAR_30 = VAR_8->table_window;
            for (int VAR_31 = 1; VAR_31 < VAR_14; VAR_31++) {
                float VAR_32 = VAR_31 * (VAR_14 - VAR_31);
                for (int VAR_33 = 0; VAR_33 < VAR_10; VAR_33++)
                    *VAR_30++ = VAR_32;
            }
            VAR_8->best_overlap_offset = VAR_3;
        }
    }

    VAR_8->bytes_per_frame = VAR_13 * VAR_10;
    VAR_8->num_channels = VAR_10;

    VAR_8->bytes_queue = (VAR_8->frames_search + VAR_8->frames_stride + VAR_14)
                        * VAR_13 * VAR_10;
    VAR_8->buf_queue = FUNC_8(VAR_8->buf_queue, VAR_8->bytes_queue + VAR_2);
    if (!VAR_8->buf_queue) {
        FUNC_1(VAR_7, "Out of memory\n");
        return 0;
    }

    VAR_8->bytes_queued = 0;
    VAR_8->bytes_to_slide = 0;

    FUNC_0(VAR_7, ""
           "%.2f stride_in, %i stride_out, %i standing, "
           "%i overlap, %i search, %i queue, %s mode\n",
           VAR_8->frames_stride_scaled,
           (int)(VAR_8->bytes_stride / VAR_10 / VAR_13),
           (int)(VAR_8->bytes_standing / VAR_10 / VAR_13),
           (int)(VAR_8->bytes_overlap / VAR_10 / VAR_13),
           VAR_8->frames_search,
           (int)(VAR_8->bytes_queue / VAR_10 / VAR_13),
           (VAR_12 ? "s16" : "float"));

    FUNC_3(VAR_8->cur_format, VAR_8->in);

    return 1;
}
