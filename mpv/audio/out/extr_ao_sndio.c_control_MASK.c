
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct priv {int vol; int hdl; int havevol; } ;
struct ao {struct priv* priv; } ;
typedef enum aocontrol { ____Placeholder_aocontrol } aocontrol ;
struct TYPE_2__ {int left; int right; } ;
typedef TYPE_1__ ao_control_vol_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(struct ao *VAR_4, enum aocontrol VAR_5, void *VAR_6)
{
    struct priv *VAR_7 = VAR_4->priv;
    ao_control_vol_t *VAR_8 = VAR_6;

    switch (VAR_5) {
    case 129:
        if (!VAR_7->havevol)
            return VAR_0;
        VAR_8->left = VAR_8->right = VAR_7->vol * 100 / VAR_3;
        break;
    case 128:
        if (!VAR_7->havevol)
            return VAR_0;
        FUNC_0(VAR_7->hdl, VAR_8->left * VAR_3 / 100);
        break;
    default:
        return VAR_2;
    }
    return VAR_1;
}
