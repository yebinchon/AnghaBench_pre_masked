
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct priv {TYPE_1__* opts; } ;
struct ao {int format; struct priv* priv; } ;
typedef int snd_mixer_t ;
typedef int snd_mixer_selem_id_t ;
typedef int snd_mixer_elem_t ;
typedef enum aocontrol { ____Placeholder_aocontrol } aocontrol ;
struct TYPE_4__ {float left; float right; } ;
typedef TYPE_2__ ao_control_vol_t ;
struct TYPE_3__ {int mixer_device; int mixer_name; int mixer_index; } ;






 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ao*,char*,long,...) ;
 int FUNC_2 (struct ao*,char*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ) ;
 int FUNC_9 (int *,int,int*) ;
 int FUNC_10 (int *,int,long*) ;
 int FUNC_11 (int *,long*,long*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int **) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int *,int *,int *) ;
 int FUNC_20 (int *,int,int) ;
 int FUNC_21 (int *,int,long) ;

__attribute__((used)) static int FUNC_22(struct ao *VAR_4, enum aocontrol VAR_5, void *VAR_6)
{
    struct priv *VAR_7 = VAR_4->priv;
    snd_mixer_t *VAR_8 = ((void*)0);
    switch (VAR_5) {
    case 131:
    case 129:
    case 130:
    case 128:
    {
        int VAR_9;
        snd_mixer_elem_t *VAR_10;
        snd_mixer_selem_id_t *VAR_11;

        long VAR_12, VAR_13;
        long VAR_14, VAR_15;
        float VAR_16;

        if (!FUNC_3(VAR_4->format))
            return VAR_1;

        FUNC_14(&VAR_11);

        FUNC_17(VAR_11, VAR_7->opts->mixer_index);
        FUNC_18(VAR_11, VAR_7->opts->mixer_name);

        VAR_9 = FUNC_8(&VAR_8, 0);
        FUNC_0("Mixer open error");

        VAR_9 = FUNC_4(VAR_8, VAR_7->opts->mixer_device);
        FUNC_0("Mixer attach error");

        VAR_9 = FUNC_19(VAR_8, ((void*)0), ((void*)0));
        FUNC_0("Mixer register error");

        VAR_9 = FUNC_7(VAR_8);
        FUNC_0("Mixer load error");

        VAR_10 = FUNC_6(VAR_8, VAR_11);
        if (!VAR_10) {
            FUNC_2(VAR_4, "Unable to find simple control '%s',%i.\n",
                       FUNC_16(VAR_11),
                       FUNC_15(VAR_11));
            goto alsa_error;
        }

        FUNC_11(VAR_10, &VAR_12, &VAR_13);
        VAR_16 = (100 / (float)(VAR_13 - VAR_12));

        switch (VAR_5) {
        case 128: {
            ao_control_vol_t *VAR_17 = VAR_6;
            VAR_15 = VAR_17->left / VAR_16 + VAR_12 + 0.5;

            VAR_9 = FUNC_21(VAR_10, 0, VAR_15);
            FUNC_0("Error setting left channel");
            FUNC_1(VAR_4, "left=%li, ", VAR_15);

            VAR_15 = VAR_17->right / VAR_16 + VAR_12 + 0.5;

            VAR_9 = FUNC_21(VAR_10, 1, VAR_15);
            FUNC_0("Error setting right channel");
            FUNC_1(VAR_4, "right=%li, pmin=%li, pmax=%li, mult=%f\n",
                   VAR_15, VAR_12, VAR_13, VAR_16);
            break;
        }
        case 130: {
            ao_control_vol_t *VAR_18 = VAR_6;
            FUNC_10(VAR_10, 0, &VAR_14);
            VAR_18->left = (VAR_14 - VAR_12) * VAR_16;
            FUNC_10(VAR_10, 1, &VAR_14);
            VAR_18->right = (VAR_14 - VAR_12) * VAR_16;
            FUNC_1(VAR_4, "left=%f, right=%f\n", VAR_18->left, VAR_18->right);
            break;
        }
        case 129: {
            bool *VAR_19 = VAR_6;
            if (!FUNC_12(VAR_10))
                goto alsa_error;
            if (!FUNC_13(VAR_10)) {
                FUNC_20(VAR_10, 1, !*VAR_19);
            }
            FUNC_20(VAR_10, 0, !*VAR_19);
            break;
        }
        case 131: {
            bool *VAR_20 = VAR_6;
            if (!FUNC_12(VAR_10))
                goto alsa_error;
            int VAR_21 = 1;
            FUNC_9(VAR_10, 0, &VAR_21);
            *VAR_20 = !VAR_21;
            if (!FUNC_13(VAR_10)) {
                FUNC_9(VAR_10, 1, &VAR_21);
                *VAR_20 &= !VAR_21;
            }
            break;
        }
        }
        FUNC_5(VAR_8);
        return VAR_2;
    }

    }
    return VAR_3;

alsa_error:
    if (VAR_8)
        FUNC_5(VAR_8);
    return VAR_0;
}
