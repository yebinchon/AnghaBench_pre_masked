
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_5__ {int refs; TYPE_2__ IWineMsiRemotePackage_iface; scalar_t__ package; } ;
typedef TYPE_1__ msi_remote_package_impl ;
typedef TYPE_2__* LPVOID ;
typedef int IUnknown ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int) ;
 int VAR_2 ;

HRESULT FUNC_1( IUnknown *VAR_3, LPVOID *VAR_4 )
{
    msi_remote_package_impl* VAR_5;

    VAR_5 = FUNC_0( sizeof *VAR_5 );
    if (!VAR_5)
        return VAR_0;

    VAR_5->IWineMsiRemotePackage_iface.lpVtbl = &VAR_2;
    VAR_5->package = 0;
    VAR_5->refs = 1;

    *VAR_4 = &VAR_5->IWineMsiRemotePackage_iface;

    return VAR_1;
}
