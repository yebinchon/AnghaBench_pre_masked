
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct demux_packet {int* buffer; int len; scalar_t__ pts; scalar_t__ pos; } ;
struct TYPE_9__ {int sub_packet_size; int sub_packet_h; int coded_framesize; int audiopk_size; int sub_packet_cnt; int* audio_buf; scalar_t__* audio_timestamp; scalar_t__ ra_pts; TYPE_6__* stream; } ;
typedef TYPE_2__ mkv_track_t ;
typedef int demuxer_t ;
struct TYPE_10__ {scalar_t__ pts; int keyframe; scalar_t__ pos; } ;
typedef TYPE_3__ demux_packet_t ;
struct TYPE_11__ {TYPE_1__* codec; } ;
struct TYPE_8__ {char* codec; int block_align; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,TYPE_6__*,TYPE_3__*) ;
 int FUNC_1 (int*,int*,int) ;
 TYPE_3__* FUNC_2 (int*,int) ;
 int** VAR_1 ;
 int FUNC_3 (char const*,char*) ;
 int FUNC_4 (struct demux_packet*) ;

__attribute__((used)) static bool FUNC_5(demuxer_t *VAR_2, mkv_track_t *VAR_3,
                             struct demux_packet *VAR_4)
{
    uint32_t VAR_5 = VAR_3->sub_packet_size;
    uint32_t VAR_6 = VAR_3->sub_packet_h;
    uint32_t VAR_7 = VAR_3->coded_framesize;
    uint32_t VAR_8 = VAR_3->audiopk_size;
    uint32_t VAR_9 = VAR_3->sub_packet_cnt;
    uint8_t *VAR_10 = VAR_4->buffer;
    uint32_t VAR_11 = VAR_4->len;
    demux_packet_t *VAR_12;

    size_t VAR_13 = VAR_6 * VAR_8;

    if (!VAR_3->audio_buf || !VAR_3->audio_timestamp || !VAR_3->stream)
        return 0;

    const char *VAR_14 = VAR_3->stream->codec->codec ? VAR_3->stream->codec->codec : "";
    if (!FUNC_3(VAR_14, "ra_288")) {
        for (int VAR_15 = 0; VAR_15 < VAR_6 / 2; VAR_15++) {
            uint64_t VAR_16 = VAR_15 * 2 * VAR_8 + VAR_9 * (uint64_t)VAR_7;
            if (VAR_16 + VAR_7 > VAR_13)
                goto error;
            uint64_t VAR_17 = VAR_15 * (uint64_t)VAR_7;
            if (VAR_17 + VAR_7 > VAR_11)
                goto error;
            FUNC_1(VAR_3->audio_buf + VAR_16, VAR_10 + VAR_17, VAR_7);
        }
    } else if (!FUNC_3(VAR_14, "cook") || !FUNC_3(VAR_14, "atrac3")) {
        for (int VAR_18 = 0; VAR_18 < VAR_8 / VAR_5; VAR_18++) {
            uint32_t VAR_19 =
                VAR_5 * (VAR_6 * VAR_18 + ((VAR_6 + 1) / 2) * (VAR_9 & 1) + (VAR_9 >> 1));
            if (VAR_19 + VAR_5 > VAR_13)
                goto error;
            uint32_t VAR_20 = VAR_5 * VAR_18;
            if (VAR_20 + VAR_5 > VAR_11)
                goto error;
            FUNC_1(VAR_3->audio_buf + VAR_19, VAR_10 + VAR_20, VAR_5);
        }
    } else if (!FUNC_3(VAR_14, "sipr")) {
        if (VAR_9 * VAR_8 + VAR_8 > VAR_13 || VAR_8 > VAR_11)
            goto error;
        FUNC_1(VAR_3->audio_buf + VAR_9 * VAR_8, VAR_10, VAR_8);
        if (VAR_9 == VAR_6 - 1) {
            int VAR_21;
            int VAR_22 = VAR_6 * VAR_8 * 2 / 96;

            for (VAR_21 = 0; VAR_21 < 38; VAR_21++) {
                unsigned int VAR_23 = VAR_22 * VAR_1[VAR_21][0];
                unsigned int VAR_24 = VAR_22 * VAR_1[VAR_21][1];

                for (int VAR_25 = 0; VAR_25 < VAR_22; VAR_25++) {
                    if (VAR_23 / 2 >= VAR_13 || VAR_24 / 2 >= VAR_13)
                        goto error;
                    uint8_t VAR_26 = VAR_3->audio_buf[VAR_23 / 2];
                    uint8_t VAR_27 = VAR_3->audio_buf[VAR_24 / 2];
                    int VAR_28 = (VAR_23 & 1) ? VAR_26 >> 4 : VAR_26 & 0x0F;
                    int VAR_29 = (VAR_24 & 1) ? VAR_27 >> 4 : VAR_27 & 0x0F;
                    VAR_3->audio_buf[VAR_24 / 2] = (VAR_27 & 0x0F) | (VAR_24 & 1 ? VAR_28 << 4 : VAR_28);
                    VAR_3->audio_buf[VAR_23 / 2] = (VAR_26 & 0x0F) | (VAR_23 & 1 ? VAR_29 << 4 : VAR_29);
                    VAR_23++;
                    VAR_24++;
                }
            }
        }
    } else {

        return 0;
    }

    VAR_3->audio_timestamp[VAR_3->sub_packet_cnt] =
        VAR_3->ra_pts == VAR_4->pts ? 0 : VAR_4->pts;
    VAR_3->ra_pts = VAR_4->pts;

    if (++(VAR_3->sub_packet_cnt) == VAR_6) {
        VAR_3->sub_packet_cnt = 0;

        uint32_t VAR_30 = VAR_3->stream->codec->block_align;
        if (VAR_30 > VAR_13)
            goto error;

        for (int VAR_31 = 0; VAR_31 < VAR_6 * VAR_8 / VAR_30; VAR_31++) {
            VAR_12 = FUNC_2(VAR_3->audio_buf + VAR_31 * VAR_30,
                                        VAR_30);
            if (!VAR_12)
                goto error;


            VAR_12->pts = (VAR_31 * VAR_30 % VAR_8) ? VAR_0 :
                VAR_3->audio_timestamp[VAR_31 * VAR_30 / VAR_8];
            VAR_12->pos = VAR_4->pos + VAR_31;
            VAR_12->keyframe = !VAR_31;
            FUNC_0(VAR_2, VAR_3->stream, VAR_12);
        }
    }

error:
    FUNC_4(VAR_4);
    return 1;
}
