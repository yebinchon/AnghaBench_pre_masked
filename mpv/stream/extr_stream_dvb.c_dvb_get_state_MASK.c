
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct mpv_global {int dummy; } ;
struct mp_log {int dummy; } ;
struct TYPE_18__ {TYPE_4__* priv; struct mpv_global* global; struct mp_log* log; } ;
typedef TYPE_2__ stream_t ;
typedef int filename ;
struct TYPE_19__ {int switching_channel; int stream_used; int fe_fd; int dvr_fd; int adapters_count; TYPE_6__* adapters; scalar_t__ is_on; } ;
typedef TYPE_3__ dvb_state_t ;
struct TYPE_20__ {TYPE_1__* opts; } ;
typedef TYPE_4__ dvb_priv_t ;
typedef TYPE_3__ dvb_channels_list_t ;
struct TYPE_21__ {unsigned int devno; TYPE_3__* list; int delsys_mask; } ;
typedef TYPE_6__ dvb_adapter_config_t ;
struct TYPE_17__ {char* cfg_file; int cfg_full_transponder; } ;


 scalar_t__ FUNC_0 (unsigned int,int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;







 unsigned int VAR_7 ;
 int FUNC_1 (int) ;
 TYPE_3__* FUNC_2 (struct mp_log*,TYPE_3__*,int ,char*,unsigned int,unsigned int,unsigned int) ;
 unsigned int FUNC_3 (int,struct mp_log*) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_3__* VAR_8 ;
 TYPE_3__* FUNC_5 (int) ;
 int FUNC_6 (int *,unsigned int**,int) ;
 int FUNC_7 (TYPE_3__*,int,int) ;
 int FUNC_8 (struct mp_log*,char*,unsigned int) ;
 char* FUNC_9 (void*,struct mpv_global*,char const*) ;
 int FUNC_10 (struct mp_log*,char*,...) ;
 int FUNC_11 (char*,int) ;
 TYPE_6__* FUNC_12 (TYPE_6__*,unsigned int) ;
 int FUNC_13 (char*,int,char*,unsigned int,unsigned int) ;
 int FUNC_14 (void*) ;
 void* FUNC_15 (int *) ;

dvb_state_t *FUNC_16(stream_t *VAR_9)
{
    if (VAR_8 != ((void*)0)) {
      return VAR_8;
    }
    struct mp_log *VAR_10 = VAR_9->log;
    struct mpv_global *VAR_11 = VAR_9->global;
    dvb_priv_t *VAR_12 = VAR_9->priv;
    unsigned int VAR_13, VAR_14[VAR_2], VAR_15;
    char VAR_16[VAR_6], *VAR_17;
    const char *VAR_18;
    void *VAR_19;
    dvb_channels_list_t *VAR_20;
    dvb_adapter_config_t *VAR_21 = ((void*)0), *VAR_22;
    dvb_state_t *VAR_23 = ((void*)0);

    VAR_23 = FUNC_5(sizeof(dvb_state_t));
    if (VAR_23 == ((void*)0))
        return ((void*)0);
    FUNC_7(VAR_23, 0x00, sizeof(dvb_state_t));
    VAR_23->switching_channel = 0;
    VAR_23->is_on = 0;
    VAR_23->stream_used = 1;
    VAR_23->fe_fd = VAR_23->dvr_fd = -1;
    for (unsigned int VAR_24 = 0; VAR_24 < VAR_1; VAR_24++) {
        VAR_20 = ((void*)0);
        for (unsigned int VAR_25 = 0; VAR_25 < VAR_2; VAR_25++) {
            FUNC_13(VAR_16, sizeof(VAR_16), "/dev/dvb/adapter%u/frontend%u", VAR_24, VAR_25);
            int VAR_26 = FUNC_11(VAR_16, VAR_5 | VAR_4 | VAR_3);
            if (VAR_26 < 0)
                continue;

            FUNC_10(VAR_10, "Opened device %s, FD: %d\n", VAR_16, VAR_26);
            VAR_14[VAR_25] = FUNC_3(VAR_26, VAR_10);
            VAR_14[VAR_25] &= VAR_0;
            FUNC_1(VAR_26);
            if (VAR_14[VAR_25] == 0) {
                FUNC_10(VAR_10, "Frontend device %s has no supported delivery systems.\n",
                       VAR_16);
                continue;
            }
            FUNC_10(VAR_10, "Frontend device %s offers some supported delivery systems.\n",
                   VAR_16);

            for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++) {
                if (!FUNC_0(VAR_14[VAR_25], VAR_13))
                    continue;

                switch (VAR_13) {
                case 133:
                case 132:
                    VAR_18 = "channels.conf.cbl";
                    break;
                case 134:
                    VAR_18 = "channels.conf.atsc";
                    break;
                case 129:
                    if (FUNC_0(VAR_14[VAR_25], 128))
                        continue;

                case 128:
                    VAR_18 = "channels.conf.ter";
                    break;
                case 131:
                    if (FUNC_0(VAR_14[VAR_25], 130))
                        continue;

                case 130:
                    VAR_18 = "channels.conf.sat";
                    break;
                default:
                    continue;
                }

                if (VAR_12->opts->cfg_file && VAR_12->opts->cfg_file[0]) {
                    VAR_19 = ((void*)0);
                    VAR_17 = VAR_12->opts->cfg_file;
                } else {
                    VAR_19 = FUNC_15(((void*)0));
                    VAR_17 = FUNC_9(VAR_19, VAR_11, VAR_18);
                    if (VAR_17) {
                        FUNC_10(VAR_10, "Ignoring other channels.conf files.\n");
                    } else {
                        VAR_17 = FUNC_9(VAR_19, VAR_11,
                                        "channels.conf");
                    }
                }

                VAR_20 = FUNC_2(VAR_10, VAR_20, VAR_12->opts->cfg_full_transponder,
                                        VAR_17, VAR_25, VAR_13, VAR_14[VAR_25]);
                FUNC_14(VAR_19);
            }
        }

        if (VAR_20 == ((void*)0))
            continue;

        VAR_15 = sizeof(dvb_adapter_config_t) * (VAR_23->adapters_count + 1);
        VAR_22 = FUNC_12(VAR_23->adapters, VAR_15);

        if (VAR_22 == ((void*)0)) {
            FUNC_8(VAR_10, "DVB_CONFIG, can't realloc %d bytes, skipping\n",
                   VAR_15);
            FUNC_4(VAR_20);
            continue;
        }
        VAR_21 = VAR_22;

        VAR_23->adapters = VAR_21;
        VAR_23->adapters[VAR_23->adapters_count].devno = VAR_24;
        FUNC_6(&VAR_23->adapters[VAR_23->adapters_count].delsys_mask,
            &VAR_14, (sizeof(unsigned int) * VAR_2));
        VAR_23->adapters[VAR_23->adapters_count].list = VAR_20;
        VAR_23->adapters_count++;
    }

    if (VAR_23->adapters_count == 0) {
        FUNC_4(VAR_23);
        VAR_23 = ((void*)0);
    }

    VAR_8 = VAR_23;
    return VAR_23;
}
