
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_image_params {int dummy; } ;
struct sd_lavc_priv {struct mp_image_params video_params; } ;
struct sd {struct sd_lavc_priv* priv; } ;
typedef enum sd_ctrl { ____Placeholder_sd_ctrl } sd_ctrl ;


 int VAR_0 ;
 int VAR_1 ;
 double VAR_2 ;


 double FUNC_0 (struct sd*,double,double) ;

__attribute__((used)) static int FUNC_1(struct sd *VAR_3, enum sd_ctrl VAR_4, void *VAR_5)
{
    struct sd_lavc_priv *VAR_6 = VAR_3->priv;
    switch (VAR_4) {
    case 128: {
        double *VAR_7 = VAR_5;
        double VAR_8 = FUNC_0(VAR_3, VAR_7[0], VAR_7[1]);
        if (VAR_8 == VAR_2)
            return 0;
        VAR_7[0] = VAR_8;
        return 1;
    }
    case 129:
        VAR_6->video_params = *(struct mp_image_params *)VAR_5;
        return VAR_0;
    default:
        return VAR_1;
    }
}
