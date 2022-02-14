
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_24__ {int path; TYPE_7__* priv; } ;
typedef TYPE_5__ stream_t ;
struct TYPE_25__ {int cur_adapter; int adapters_count; TYPE_4__* adapters; } ;
typedef TYPE_6__ dvb_state_t ;
struct TYPE_26__ {scalar_t__ devno; void* prog; TYPE_1__* opts; TYPE_6__* state; } ;
typedef TYPE_7__ dvb_priv_t ;
struct TYPE_27__ {scalar_t__ len; } ;
typedef TYPE_8__ bstr ;
struct TYPE_23__ {scalar_t__ devno; TYPE_3__* list; } ;
struct TYPE_22__ {TYPE_2__* channels; } ;
struct TYPE_21__ {int * name; } ;
struct TYPE_20__ {scalar_t__ cfg_devno; int * cfg_prog; } ;


 scalar_t__ FUNC_0 (TYPE_8__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_5__*,char*,scalar_t__) ;
 int FUNC_2 (TYPE_5__*,char*,void*,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,TYPE_8__*,TYPE_8__*) ;
 void* FUNC_5 (TYPE_7__*,TYPE_8__) ;
 scalar_t__ FUNC_6 (TYPE_8__,TYPE_8__*,int ) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (void*) ;
 void* FUNC_9 (TYPE_7__*,int *) ;

int FUNC_10(stream_t *VAR_1)
{
    dvb_priv_t *VAR_2 = VAR_1->priv;
    dvb_state_t *VAR_3 = VAR_2->state;



    bstr VAR_4, VAR_5;
    if (!FUNC_4(FUNC_3(VAR_1->path), "@", &VAR_5, &VAR_4)) {
        VAR_4 = VAR_5;
        VAR_5.len = 0;
    }

    if (VAR_2->opts->cfg_devno != 0) {
        VAR_2->devno = VAR_2->opts->cfg_devno;
    } else if (VAR_5.len) {
        bstr VAR_6;
        VAR_2->devno = FUNC_6(VAR_5, &VAR_6, 0);
        if (VAR_6.len || VAR_2->devno < 0 || VAR_2->devno >= VAR_0) {
            FUNC_1(VAR_1, "invalid devno: '%.*s'\n", FUNC_0(VAR_5));
            return 0;
        }
    } else {

        VAR_2->devno = VAR_2->opts->cfg_devno;
    }


    VAR_3->cur_adapter = -1;
    for (int VAR_7 = 0; VAR_7 < VAR_3->adapters_count; VAR_7++) {
        if (VAR_3->adapters[VAR_7].devno == VAR_2->devno) {
            VAR_3->cur_adapter = VAR_7;
            break;
        }
    }

    if (VAR_3->cur_adapter == -1) {
        FUNC_1(VAR_1, "NO CONFIGURATION FOUND FOR ADAPTER N. %d!\n",
               VAR_2->devno);
        return 0;
    }

    if (VAR_2->opts->cfg_prog != ((void*)0) && FUNC_7(VAR_2->opts->cfg_prog) > 0) {
        FUNC_8(VAR_2->prog);
        VAR_2->prog = FUNC_9(VAR_2, VAR_2->opts->cfg_prog);
    } else if (VAR_4.len) {
        FUNC_8(VAR_2->prog);
        VAR_2->prog = FUNC_5(VAR_2, VAR_4);
    } else {

        if (VAR_3->adapters[VAR_3->cur_adapter].list == ((void*)0)) {
            FUNC_1(VAR_1, "No channel list available for adapter %d!\n", VAR_2->devno);
            return 0;
        }
        FUNC_8(VAR_2->prog);
        VAR_2->prog = FUNC_9(VAR_2, VAR_3->adapters[VAR_3->cur_adapter].list->channels[0].name);
    }

    FUNC_2(VAR_1, "DVB_CONFIG: prog=%s, devno=%d\n",
               VAR_2->prog, VAR_2->devno);
    return 1;
}
