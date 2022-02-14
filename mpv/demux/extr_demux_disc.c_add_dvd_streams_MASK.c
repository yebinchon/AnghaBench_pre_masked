
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct stream_dvd_info_req {int* palette; int num_subs; } ;
struct stream {int dummy; } ;
struct sh_stream {int demuxer_id; TYPE_1__* codec; } ;
struct priv {struct sh_stream** dvd_subs; int is_dvd; } ;
struct mp_csp_params {int dummy; } ;
struct mp_cmat {int dummy; } ;
struct TYPE_6__ {struct stream* stream; struct priv* priv; } ;
typedef TYPE_2__ demuxer_t ;
struct TYPE_5__ {char* codec; char* extradata; int extradata_size; } ;


 int FUNC_0 (int,int ) ;
 struct mp_csp_params VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,struct sh_stream*) ;
 struct sh_stream* FUNC_2 (int ) ;
 int FUNC_3 (struct stream*,struct sh_stream*,int) ;
 int FUNC_4 (struct mp_csp_params*,struct mp_cmat*) ;
 int FUNC_5 (struct mp_cmat*,int,int*,int,int*) ;
 scalar_t__ FUNC_6 (struct stream*,int ,struct stream_dvd_info_req*) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char*,char*,...) ;
 char* FUNC_9 (struct sh_stream*,char*) ;

__attribute__((used)) static void FUNC_10(demuxer_t *VAR_3)
{
    struct priv *VAR_4 = VAR_3->priv;
    struct stream *VAR_5 = VAR_3->stream;
    if (!VAR_4->is_dvd)
        return;
    struct stream_dvd_info_req VAR_6;
    if (FUNC_6(VAR_5, VAR_1, &VAR_6) > 0) {
        for (int VAR_7 = 0; VAR_7 < FUNC_0(32, VAR_6.num_subs); VAR_7++) {
            struct sh_stream *VAR_8 = FUNC_2(VAR_2);
            VAR_8->demuxer_id = VAR_7 + 0x20;
            VAR_8->codec->codec = "dvd_subtitle";
            FUNC_3(VAR_5, VAR_8, 1);



            VAR_4->dvd_subs[VAR_7] = VAR_8;


            struct mp_csp_params VAR_9 = VAR_0;
            struct mp_cmat VAR_10;
            FUNC_4(&VAR_9, &VAR_10);

            char *VAR_11 = FUNC_9(VAR_8, "");
            VAR_11 = FUNC_8(VAR_11, "palette: ");
            for (int VAR_12 = 0; VAR_12 < 16; VAR_12++) {
                int VAR_13 = VAR_6.palette[VAR_12];
                int VAR_14[3] = {(VAR_13 >> 16) & 0xff, (VAR_13 >> 8) & 0xff, VAR_13 & 0xff};
                int VAR_15[3];
                FUNC_5(&VAR_10, 8, VAR_14, 8, VAR_15);
                VAR_13 = (VAR_15[2] << 16) | (VAR_15[1] << 8) | VAR_15[0];

                if (VAR_12 != 0)
                    VAR_11 = FUNC_8(VAR_11, ", ");
                VAR_11 = FUNC_8(VAR_11, "%06x", VAR_13);
            }
            VAR_11 = FUNC_8(VAR_11, "\n");

            VAR_8->codec->extradata = VAR_11;
            VAR_8->codec->extradata_size = FUNC_7(VAR_11);

            FUNC_1(VAR_3, VAR_8);
        }
    }
}
