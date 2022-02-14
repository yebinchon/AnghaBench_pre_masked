
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct priv {int oss_mixer_channel; int oss_mixer_device; } ;
struct ao {int format; struct priv* priv; } ;
typedef enum aocontrol { ____Placeholder_aocontrol } aocontrol ;
struct TYPE_3__ {int right; int left; } ;
typedef TYPE_1__ ao_control_vol_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ,int*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct ao*,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_7(struct ao *VAR_6, enum aocontrol VAR_7, void *VAR_8)
{
    struct priv *VAR_9 = VAR_6->priv;
    switch (VAR_7) {
    case 129:
    case 128: {
        ao_control_vol_t *VAR_10 = (ao_control_vol_t *)VAR_8;
        int VAR_11, VAR_12, VAR_13;







        if (!FUNC_2(VAR_6->format))
            return VAR_2;

        if ((VAR_11 = FUNC_5(VAR_9->oss_mixer_device, VAR_4)) != -1) {
            FUNC_4(VAR_11, VAR_5, &VAR_13);
            if (VAR_13 & (1 << VAR_9->oss_mixer_channel)) {
                if (VAR_7 == 129) {
                    FUNC_4(VAR_11, FUNC_0(VAR_9->oss_mixer_channel), &VAR_12);
                    VAR_10->right = (VAR_12 & 0xFF00) >> 8;
                    VAR_10->left = VAR_12 & 0x00FF;
                } else {
                    VAR_12 = ((int)VAR_10->right << 8) | (int)VAR_10->left;
                    FUNC_4(VAR_11, FUNC_1(VAR_9->oss_mixer_channel), &VAR_12);
                }
            } else {
                FUNC_3(VAR_11);
                return VAR_0;
            }
            FUNC_3(VAR_11);
            return VAR_1;
        }
        return VAR_0;
    }
    }
    return VAR_3;
}
