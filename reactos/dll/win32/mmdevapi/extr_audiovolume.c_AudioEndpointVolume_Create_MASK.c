
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_6__ {int ref; TYPE_1__ IAudioEndpointVolumeEx_iface; } ;
typedef int MMDevice ;
typedef TYPE_1__ IAudioEndpointVolumeEx ;
typedef int HRESULT ;
typedef TYPE_2__ AEVImpl ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;
 int VAR_3 ;

HRESULT FUNC_2(MMDevice *VAR_4, IAudioEndpointVolumeEx **VAR_5)
{
    AEVImpl *VAR_6;

    *VAR_5 = ((void*)0);
    VAR_6 = FUNC_1(FUNC_0(), VAR_2, sizeof(*VAR_6));
    if (!VAR_6)
        return VAR_1;
    VAR_6->IAudioEndpointVolumeEx_iface.lpVtbl = &VAR_0;
    VAR_6->ref = 1;

    *VAR_5 = &VAR_6->IAudioEndpointVolumeEx_iface;
    return VAR_3;
}
