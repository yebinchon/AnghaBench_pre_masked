
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_5__ {int ref; TYPE_2__ IDirectMusicDownloadedInstrument_iface; } ;
typedef TYPE_1__ IDirectMusicDownloadedInstrumentImpl ;
typedef TYPE_2__ IDirectMusicDownloadedInstrument ;
typedef int HRESULT ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;
 TYPE_1__* FUNC_2 (int ,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static HRESULT FUNC_3(IDirectMusicDownloadedInstrument **VAR_4)
{
    IDirectMusicDownloadedInstrumentImpl *VAR_5;

    VAR_5 = FUNC_2(FUNC_1(), VAR_2, sizeof(*VAR_5));
    if (!VAR_5)
    {
        *VAR_4 = ((void*)0);
        return VAR_1;
    }

    VAR_5->IDirectMusicDownloadedInstrument_iface.lpVtbl = &VAR_0;
    VAR_5->ref = 1;

    *VAR_4 = &VAR_5->IDirectMusicDownloadedInstrument_iface;
    FUNC_0();

    return VAR_3;
}
