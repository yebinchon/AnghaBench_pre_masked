
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_ctx {struct priv* priv; } ;
struct priv {double display_fps; int reload_display; } ;
struct mp_image {int dummy; } ;


 int FUNC_0 (struct ra_ctx*,char*) ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct ra_ctx*) ;
 struct mp_image* FUNC_3 (struct ra_ctx*) ;

__attribute__((used)) static int FUNC_4(struct ra_ctx *VAR_2, int *VAR_3, int VAR_4, void *VAR_5)
{
    struct priv *VAR_6 = VAR_2->priv;

    switch (VAR_4) {
    case 128:
        *(struct mp_image **)VAR_5 = FUNC_3(VAR_2);
        return VAR_1;
    case 130:
        FUNC_2(VAR_2);
        return VAR_1;
    case 131:
        if (FUNC_1(&VAR_6->reload_display, 0)) {
            FUNC_0(VAR_2, "Recovering from display mode switch...\n");
            FUNC_2(VAR_2);
        }
        return VAR_1;
    case 129:
        *(double *)VAR_5 = VAR_6->display_fps;
        return VAR_1;
    }

    return VAR_0;
}
