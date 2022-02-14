
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_21__ {int dwValidParams; int dwChannelGroups; } ;
struct TYPE_20__ {int * lpVtbl; } ;
struct TYPE_16__ {int * lpVtbl; } ;
struct TYPE_15__ {int * lpVtbl; } ;
struct TYPE_14__ {int * lpVtbl; } ;
struct TYPE_19__ {int ref; int nrofgroups; scalar_t__ pLatencyClock; scalar_t__ synth_sink; scalar_t__ synth; TYPE_7__ IDirectMusicPort_iface; TYPE_5__* group; int caps; TYPE_8__ params; int active; int * parent; TYPE_3__ IKsControl_iface; TYPE_2__ IDirectMusicThru_iface; TYPE_1__ IDirectMusicPortDownload_iface; } ;
struct TYPE_18__ {TYPE_4__* channel; } ;
struct TYPE_17__ {int priority; } ;
typedef TYPE_6__ SynthPortImpl ;
typedef int LPVOID ;
typedef TYPE_7__ IDirectMusicPort ;
typedef int IDirectMusic8Impl ;
typedef scalar_t__ HRESULT ;
typedef TYPE_8__ DMUS_PORTPARAMS ;
typedef int DMUS_PORTCAPS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,void**) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_1 (int *,int *,int *) ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int FUNC_2 () ;
 int VAR_23 ;
 TYPE_6__* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,TYPE_6__*) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,TYPE_8__*) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_13 (char*,...) ;
 int VAR_31 ;

HRESULT FUNC_14(IDirectMusic8Impl *VAR_32, DMUS_PORTPARAMS *VAR_33,
        DMUS_PORTCAPS *VAR_34, IDirectMusicPort **VAR_35)
{
    SynthPortImpl *VAR_36;
    HRESULT VAR_37 = VAR_20;
    int VAR_38;

    FUNC_13("(%p, %p, %p)\n", VAR_33, VAR_34, VAR_35);

    *VAR_35 = ((void*)0);

    VAR_36 = FUNC_3(FUNC_2(), VAR_23, sizeof(SynthPortImpl));
    if (!VAR_36)
        return VAR_21;

    VAR_36->IDirectMusicPort_iface.lpVtbl = &VAR_29;
    VAR_36->IDirectMusicPortDownload_iface.lpVtbl = &VAR_28;
    VAR_36->IDirectMusicThru_iface.lpVtbl = &VAR_30;
    VAR_36->IKsControl_iface.lpVtbl = &VAR_31;
    VAR_36->ref = 1;
    VAR_36->parent = VAR_32;
    VAR_36->active = VAR_22;
    VAR_36->params = *VAR_33;
    VAR_36->caps = *VAR_34;

    VAR_37 = FUNC_1(&VAR_26, (LPVOID*)&VAR_36->pLatencyClock, ((void*)0));
    if (VAR_37 != VAR_27)
    {
        FUNC_4(FUNC_2(), 0, VAR_36);
        return VAR_37;
    }

    if (FUNC_12(VAR_37))
        VAR_37 = FUNC_0(&VAR_1, ((void*)0), VAR_0, &VAR_24, (void**)&VAR_36->synth);

    if (FUNC_12(VAR_37))
        VAR_37 = FUNC_0(&VAR_2, ((void*)0), VAR_0, &VAR_25, (void**)&VAR_36->synth_sink);

    if (FUNC_12(VAR_37))
        VAR_37 = FUNC_9(VAR_36->synth, VAR_36->pLatencyClock);

    if (FUNC_12(VAR_37))
        VAR_37 = FUNC_6(VAR_36->synth_sink, VAR_36->pLatencyClock);

    if (FUNC_12(VAR_37))
        VAR_37 = FUNC_10(VAR_36->synth, VAR_36->synth_sink);

    if (FUNC_12(VAR_37))
        VAR_37 = FUNC_7(VAR_36->synth, VAR_33);

    if (0)
    {
        if (VAR_33->dwValidParams & VAR_19) {
            VAR_36->nrofgroups = VAR_33->dwChannelGroups;

            for (VAR_38 = 0; VAR_38 < VAR_36->nrofgroups; VAR_38++) {
                FUNC_13 ("Setting default channel priorities on channel group %i\n", VAR_38 + 1);
                VAR_36->group[VAR_38].channel[0].priority = VAR_10;
                VAR_36->group[VAR_38].channel[1].priority = VAR_11;
                VAR_36->group[VAR_38].channel[2].priority = VAR_12;
                VAR_36->group[VAR_38].channel[3].priority = VAR_13;
                VAR_36->group[VAR_38].channel[4].priority = VAR_14;
                VAR_36->group[VAR_38].channel[5].priority = VAR_15;
                VAR_36->group[VAR_38].channel[6].priority = VAR_16;
                VAR_36->group[VAR_38].channel[7].priority = VAR_17;
                VAR_36->group[VAR_38].channel[8].priority = VAR_18;
                VAR_36->group[VAR_38].channel[9].priority = VAR_3;
                VAR_36->group[VAR_38].channel[10].priority = VAR_4;
                VAR_36->group[VAR_38].channel[11].priority = VAR_5;
                VAR_36->group[VAR_38].channel[12].priority = VAR_6;
                VAR_36->group[VAR_38].channel[13].priority = VAR_7;
                VAR_36->group[VAR_38].channel[14].priority = VAR_8;
                VAR_36->group[VAR_38].channel[15].priority = VAR_9;
            }
        }
    }

    if (FUNC_12(VAR_37)) {
        *VAR_35 = &VAR_36->IDirectMusicPort_iface;
        return VAR_27;
    }

    if (VAR_36->synth)
        FUNC_8(VAR_36->synth);
    if (VAR_36->synth_sink)
        FUNC_5(VAR_36->synth_sink);
    if (VAR_36->pLatencyClock)
        FUNC_11(VAR_36->pLatencyClock);
    FUNC_4(FUNC_2(), 0, VAR_36);

    return VAR_37;
}
