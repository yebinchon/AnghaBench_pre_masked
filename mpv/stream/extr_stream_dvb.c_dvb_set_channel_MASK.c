
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_21__ {TYPE_5__* priv; } ;
typedef TYPE_3__ stream_t ;
struct TYPE_22__ {unsigned int adapters_count; int is_on; int retry; unsigned int cur_adapter; scalar_t__ cur_frontend; scalar_t__ last_freq; int * demux_fds; TYPE_1__* adapters; } ;
typedef TYPE_4__ dvb_state_t ;
struct TYPE_23__ {TYPE_2__* opts; scalar_t__ state; } ;
typedef TYPE_5__ dvb_priv_t ;
struct TYPE_24__ {unsigned int NUM_CHANNELS; unsigned int current; TYPE_7__* channels; } ;
typedef TYPE_6__ dvb_channels_list_t ;
struct TYPE_25__ {scalar_t__ frontend; int pids_cnt; scalar_t__ freq; int service_id; int* pids; int hier; int cr_lp; int cr; int bw; int trans; int gi; int mod; int inv; int stream_id; int diseqc; int srate; int pol; int delsys; int name; } ;
typedef TYPE_7__ dvb_channel_t ;
typedef int buf ;
struct TYPE_20__ {int cfg_timeout; } ;
struct TYPE_19__ {int devno; TYPE_6__* list; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,char*,...) ;
 int FUNC_1 (TYPE_3__*,char*,int,...) ;
 int FUNC_2 (TYPE_5__*,int) ;
 int FUNC_3 (TYPE_5__*,unsigned int,int) ;
 int FUNC_4 (TYPE_5__*,int,scalar_t__,int) ;
 int FUNC_5 (TYPE_5__*,int ,int,int ) ;
 scalar_t__ FUNC_6 (TYPE_3__*,char*,int) ;
 int FUNC_7 (TYPE_5__*,int ,scalar_t__,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;

int FUNC_10(stream_t *VAR_1, unsigned int VAR_2, unsigned int VAR_3)
{
    dvb_channels_list_t *VAR_4;
    dvb_channel_t *VAR_5;
    dvb_priv_t *VAR_6 = VAR_1->priv;
    char VAR_7[4096];
    dvb_state_t *VAR_8 = (dvb_state_t *) VAR_6->state;
    int VAR_9;
    int VAR_10;

    if (VAR_2 >= VAR_8->adapters_count) {
        FUNC_0(VAR_1, "dvb_set_channel: INVALID internal ADAPTER NUMBER: %d vs %d, abort\n",
               VAR_2, VAR_8->adapters_count);
        return 0;
    }

    VAR_9 = VAR_8->adapters[VAR_2].devno;
    VAR_4 = VAR_8->adapters[VAR_2].list;
    if (VAR_3 > VAR_4->NUM_CHANNELS) {
        FUNC_0(VAR_1, "dvb_set_channel: INVALID CHANNEL NUMBER: %d, for "
               "adapter %d, abort\n", VAR_3, VAR_9);
        return 0;
    }
    VAR_5 = &(VAR_4->channels[VAR_3]);

    if (VAR_8->is_on) {

        FUNC_2(VAR_6, 0);

        VAR_8->retry = 0;

        while (FUNC_6(VAR_1, VAR_7, sizeof(VAR_7)) > 0) {}
        if (VAR_8->cur_adapter != VAR_2 ||
            VAR_8->cur_frontend != VAR_5->frontend) {
            FUNC_8(VAR_1);
            if (!FUNC_4(VAR_6, VAR_9, VAR_5->frontend, VAR_5->pids_cnt)) {
                FUNC_0(VAR_1, "DVB_SET_CHANNEL, COULDN'T OPEN DEVICES OF "
                       "ADAPTER: %d, EXIT\n", VAR_9);
                return 0;
            }
        } else {


            if (!FUNC_2(VAR_6, VAR_5->pids_cnt))
                return 0;
        }
    } else {
        if (!FUNC_4(VAR_6, VAR_9, VAR_5->frontend, VAR_5->pids_cnt)) {
            FUNC_0(VAR_1, "DVB_SET_CHANNEL2, COULDN'T OPEN DEVICES OF "
                   "ADAPTER: %d, EXIT\n", VAR_9);
            return 0;
        }
    }

    VAR_8->retry = 5;
    VAR_4->current = VAR_3;
    FUNC_1(VAR_1, "DVB_SET_CHANNEL: new channel name=%s, adapter: %d, "
               "channel %d\n", VAR_5->name, VAR_9, VAR_3);

    FUNC_9(VAR_1);

    if (VAR_5->freq != VAR_8->last_freq) {
        if (!FUNC_7(VAR_6, VAR_5->delsys, VAR_5->freq,
                      VAR_5->pol, VAR_5->srate, VAR_5->diseqc,
                      VAR_5->stream_id, VAR_5->inv,
                      VAR_5->mod, VAR_5->gi,
                      VAR_5->trans, VAR_5->bw, VAR_5->cr, VAR_5->cr_lp,
                      VAR_5->hier, VAR_6->opts->cfg_timeout))
            return 0;
    }

    VAR_8->is_on = 1;
    VAR_8->last_freq = VAR_5->freq;
    VAR_8->cur_adapter = VAR_2;
    VAR_8->cur_frontend = VAR_5->frontend;

    if (VAR_5->service_id != -1) {


        for (VAR_10 = 0; VAR_10 < VAR_5->pids_cnt; VAR_10++) {
            if (VAR_5->pids[VAR_10] == -1) {
                FUNC_1(VAR_1, "DVB_SET_CHANNEL: PMT-PID for service %d "
                           "not resolved yet, parsing PAT...\n",
                           VAR_5->service_id);
                int VAR_11 = FUNC_3(VAR_6, VAR_2, VAR_5->service_id);
                FUNC_1(VAR_1, "DVB_SET_CHANNEL: Found PMT-PID: %d\n",
                           VAR_11);
                VAR_5->pids[VAR_10] = VAR_11;
            }
        }
    }


    for (VAR_10 = 0; VAR_10 < VAR_5->pids_cnt; VAR_10++) {
        if (VAR_5->pids[VAR_10] == -1) {

            FUNC_0(VAR_1, "DVB_SET_CHANNEL: PMT-PID not found, "
                           "teletext-decoding may fail.\n");
        } else {
            if (!FUNC_5(VAR_6, VAR_8->demux_fds[VAR_10], VAR_5->pids[VAR_10],
                                 VAR_0))
                return 0;
        }
    }

    return 1;
}
