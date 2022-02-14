
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * lpVtbl; } ;
struct TYPE_5__ {int ref; TYPE_1__ IDirectMusicDownload_iface; } ;
typedef int IUnknown ;
typedef TYPE_2__ IDirectMusicDownloadImpl ;
typedef int HRESULT ;
typedef int GUID ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 TYPE_2__* FUNC_2 (int ,int ,int) ;
 int VAR_2 ;

HRESULT FUNC_3(const GUID *VAR_3, void **VAR_4, IUnknown *VAR_5)
{
    IDirectMusicDownloadImpl *VAR_6;

    VAR_6 = FUNC_2(FUNC_1(), 0, sizeof(*VAR_6));
    if (!VAR_6)
    {
        *VAR_4 = ((void*)0);
        return VAR_1;
    }

    VAR_6->IDirectMusicDownload_iface.lpVtbl = &VAR_0;
    VAR_6->ref = 1;
    *VAR_4 = VAR_6;

    FUNC_0();
    return VAR_2;
}
