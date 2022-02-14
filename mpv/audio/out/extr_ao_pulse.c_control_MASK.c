
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {int channels; int * values; } ;
struct TYPE_5__ {int mute; TYPE_4__ volume; } ;
struct priv {int stream; int mainloop; int context; TYPE_1__ pi; } ;
struct pa_cvolume {int channels; void** values; } ;
struct TYPE_6__ {int num; } ;
struct ao {TYPE_2__ channels; struct priv* priv; } ;
typedef int pa_operation ;
typedef enum aocontrol { ____Placeholder_aocontrol } aocontrol ;
struct TYPE_7__ {void* right; void* left; } ;
typedef TYPE_3__ ao_control_vol_t ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 void* FUNC_1 (void*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_3 ;
 int FUNC_4 (int ,int ,int ,struct ao*) ;
 int * FUNC_5 (int ,int ,int const,int *,int *) ;
 int * FUNC_6 (int ,int ,struct pa_cvolume*,int *,int *) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (struct pa_cvolume*,int ) ;
 int FUNC_9 (struct pa_cvolume*,int,void*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*,int ,struct ao*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int VAR_4 ;
 int FUNC_15 (struct priv*,int ) ;

__attribute__((used)) static int FUNC_16(struct ao *VAR_5, enum aocontrol VAR_6, void *VAR_7)
{
    struct priv *VAR_8 = VAR_5->priv;
    switch (VAR_6) {
    case 132:
    case 131: {
        uint32_t VAR_9 = FUNC_11(VAR_8->stream);
        FUNC_13(VAR_8->mainloop);
        if (!FUNC_15(VAR_8, FUNC_4(VAR_8->context, VAR_9,
                                                         VAR_3, VAR_5))) {
            FUNC_0("pa_context_get_sink_input_info() failed");
            return VAR_0;
        }



        if (VAR_6 == 131) {
            ao_control_vol_t *VAR_10 = VAR_7;
            if (VAR_8->pi.volume.channels != 2)
                VAR_10->left = VAR_10->right =
                    FUNC_2(FUNC_7(&VAR_8->pi.volume));
            else {
                VAR_10->left = FUNC_2(VAR_8->pi.volume.values[0]);
                VAR_10->right = FUNC_2(VAR_8->pi.volume.values[1]);
            }
        } else if (VAR_6 == 132) {
            bool *VAR_11 = VAR_7;
            *VAR_11 = VAR_8->pi.mute;
        }
        return VAR_1;
    }

    case 130:
    case 129: {
        pa_operation *VAR_12;

        FUNC_13(VAR_8->mainloop);
        uint32_t VAR_13 = FUNC_11(VAR_8->stream);
        if (VAR_6 == 129) {
            const ao_control_vol_t *VAR_14 = VAR_7;
            struct pa_cvolume VAR_15;

            FUNC_8(&VAR_15, VAR_5->channels.num);
            if (VAR_15.channels != 2)
                FUNC_9(&VAR_15, VAR_15.channels, FUNC_1(VAR_14->left));
            else {
                VAR_15.values[0] = FUNC_1(VAR_14->left);
                VAR_15.values[1] = FUNC_1(VAR_14->right);
            }
            VAR_12 = FUNC_6(VAR_8->context, VAR_13,
                                                 &VAR_15, ((void*)0), ((void*)0));
            if (!VAR_12) {
                FUNC_14(VAR_8->mainloop);
                FUNC_0("pa_context_set_sink_input_volume() failed");
                return VAR_0;
            }
        } else if (VAR_6 == 130) {
            const bool *VAR_16 = VAR_7;
            VAR_12 = FUNC_5(VAR_8->context, VAR_13,
                                               *VAR_16, ((void*)0), ((void*)0));
            if (!VAR_12) {
                FUNC_14(VAR_8->mainloop);
                FUNC_0("pa_context_set_sink_input_mute() failed");
                return VAR_0;
            }
        } else
            FUNC_3();

        FUNC_10(VAR_12);
        FUNC_14(VAR_8->mainloop);
        return VAR_1;
    }

    case 128: {
        char *VAR_17 = (char *)VAR_7;
        FUNC_13(VAR_8->mainloop);
        if (!FUNC_15(VAR_8, FUNC_12(VAR_8->stream, VAR_17,
                                             VAR_4, VAR_5)))
        {
            FUNC_0("pa_stream_set_name() failed");
            return VAR_0;
        }
        return VAR_1;
    }

    default:
        return VAR_2;
    }
}
