
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct priv {int num_imgfmts; int* imgfmts; int* subfmts; int vo_convert; } ;
struct mp_hwdec_devices {int dummy; } ;
struct mp_hwdec_ctx {int hw_imgfmt; scalar_t__* supported_formats; } ;
struct mp_autoconvert {TYPE_1__* f; } ;
struct TYPE_2__ {struct priv* priv; } ;


 int FUNC_0 (int*,int,int) ;
 int FUNC_1 (struct mp_hwdec_devices*) ;
 struct mp_hwdec_ctx* FUNC_2 (struct mp_hwdec_devices*,int) ;
 int FUNC_3 (struct mp_autoconvert*,int,scalar_t__) ;

void FUNC_4(struct mp_autoconvert *VAR_0,
                                         struct mp_hwdec_devices *VAR_1)
{
    struct priv *VAR_2 = VAR_0->f->priv;
    FUNC_1(VAR_1);

    int VAR_3 = 0;

    for (int VAR_4 = 0; ; VAR_4++) {
        struct mp_hwdec_ctx *VAR_5 = FUNC_2(VAR_1, VAR_4);
        if (!VAR_5)
            break;
        if (!VAR_5->hw_imgfmt || !VAR_5->supported_formats)
            continue;

        if (VAR_5->hw_imgfmt == VAR_3)
            continue;
        VAR_3 = VAR_5->hw_imgfmt;


        for (int VAR_6 = 0; VAR_6 < VAR_2->num_imgfmts; VAR_6++) {
            if (VAR_2->imgfmts[VAR_6] != VAR_5->hw_imgfmt)
                continue;

            int VAR_7 = VAR_2->num_imgfmts;
            FUNC_0(VAR_2->imgfmts, VAR_7, VAR_6);
            VAR_7 = VAR_2->num_imgfmts;
            FUNC_0(VAR_2->subfmts, VAR_7, VAR_6);
            VAR_2->num_imgfmts -= 1;
            break;
        }
        for (int VAR_8 = 0; VAR_5->supported_formats[VAR_8]; VAR_8++)
            FUNC_3(VAR_0, VAR_5->hw_imgfmt, VAR_5->supported_formats[VAR_8]);
    }

    VAR_2->vo_convert = 1;
}
