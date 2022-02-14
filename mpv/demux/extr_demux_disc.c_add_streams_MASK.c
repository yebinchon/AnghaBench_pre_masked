
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sh_stream {scalar_t__ type; int demuxer_id; TYPE_1__* codec; } ;
struct priv {int num_streams; int is_dvd; int streams; struct sh_stream** dvd_subs; int slave; } ;
struct mp_image_params {int p_h; int p_w; int h; int w; } ;
struct TYPE_7__ {int stream; struct priv* priv; } ;
typedef TYPE_2__ demuxer_t ;
struct TYPE_6__ {int par_h; int par_w; int disp_h; int disp_w; } ;


 int FUNC_0 (struct priv*,int ,int,struct sh_stream*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,struct sh_stream*) ;
 struct sh_stream* FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 struct sh_stream* FUNC_5 (int ,int) ;
 int FUNC_6 (int ,struct sh_stream*,int ) ;
 int FUNC_7 (struct mp_image_params*,int,int) ;
 int FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (int ,int ,double*) ;

__attribute__((used)) static void FUNC_10(demuxer_t *VAR_4)
{
    struct priv *VAR_5 = VAR_4->priv;

    for (int VAR_6 = VAR_5->num_streams; VAR_6 < FUNC_4(VAR_5->slave); VAR_6++) {
        struct sh_stream *VAR_7 = FUNC_5(VAR_5->slave, VAR_6);
        if (VAR_7->type == VAR_2) {
            struct sh_stream *VAR_8 = ((void*)0);
            if (VAR_7->demuxer_id >= 0x20 && VAR_7->demuxer_id <= 0x3F)
                VAR_8 = VAR_5->dvd_subs[VAR_7->demuxer_id - 0x20];
            if (VAR_8) {
                FUNC_1(VAR_5->num_streams == VAR_6);
                FUNC_0(VAR_5, VAR_5->streams, VAR_5->num_streams, VAR_8);
                continue;
            }
        }
        struct sh_stream *VAR_9 = FUNC_3(VAR_7->type);
        FUNC_1(VAR_5->num_streams == VAR_6);
        FUNC_0(VAR_5, VAR_5->streams, VAR_5->num_streams, VAR_9);

        *VAR_9->codec = *VAR_7->codec;
        VAR_9->demuxer_id = VAR_7->demuxer_id;
        if (VAR_7->type == VAR_3) {
            double VAR_10;
            if (FUNC_9(VAR_4->stream, VAR_0, &VAR_10)
                                == VAR_1)
            {
                struct mp_image_params VAR_11 = {.w = VAR_7->codec->disp_w,
                                            .h = VAR_7->codec->disp_h};
                FUNC_7(&VAR_11, 1728 * VAR_10, 1728);
                VAR_9->codec->par_w = VAR_11.p_w;
                VAR_9->codec->par_h = VAR_11.p_h;
            }
        }
        FUNC_6(VAR_4->stream, VAR_9, VAR_5->is_dvd);
        FUNC_2(VAR_4, VAR_9);
    }
    FUNC_8(VAR_4);
}
