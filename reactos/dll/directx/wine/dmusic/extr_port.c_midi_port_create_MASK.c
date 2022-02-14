
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_4__ {int * lpVtbl; } ;
struct midi_port {int ref; TYPE_2__ IDirectMusicPort_iface; int clock; TYPE_1__ IDirectMusicThru_iface; } ;
typedef TYPE_2__ IDirectMusicPort ;
typedef int IDirectMusic8Impl ;
typedef scalar_t__ HRESULT ;
typedef int DMUS_PORTPARAMS ;
typedef int DMUS_PORTCAPS ;


 scalar_t__ FUNC_0 (int *,void**,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,struct midi_port*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct midi_port* FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static HRESULT FUNC_4(IDirectMusic8Impl *VAR_5, DMUS_PORTPARAMS *VAR_6,
        DMUS_PORTCAPS *VAR_7, IDirectMusicPort **VAR_8)
{
    struct midi_port *VAR_9;
    HRESULT VAR_10;

    if (!(VAR_9 = FUNC_3(sizeof(*VAR_9))))
        return VAR_0;

    VAR_9->IDirectMusicPort_iface.lpVtbl = &VAR_3;
    VAR_9->IDirectMusicThru_iface.lpVtbl = &VAR_4;
    VAR_9->ref = 1;

    VAR_10 = FUNC_0(&VAR_1, (void **)&VAR_9->clock, ((void*)0));
    if (VAR_10 != VAR_2) {
        FUNC_2(FUNC_1(), 0, VAR_9);
        return VAR_10;
    }

    *VAR_8 = &VAR_9->IDirectMusicPort_iface;

    return VAR_2;
}
