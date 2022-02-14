
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_6__ {int refs; TYPE_2__ INetFwProfile_iface; } ;
typedef TYPE_1__ fw_profile ;
typedef TYPE_2__* LPVOID ;
typedef int IUnknown ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int VAR_1 ;
 int FUNC_2 (char*,TYPE_2__*,...) ;
 int VAR_2 ;

HRESULT FUNC_3( IUnknown *VAR_3, LPVOID *VAR_4 )
{
    fw_profile *VAR_5;

    FUNC_2("(%p,%p)\n", VAR_3, VAR_4);

    VAR_5 = FUNC_1( FUNC_0(), 0, sizeof(*VAR_5) );
    if (!VAR_5) return VAR_0;

    VAR_5->INetFwProfile_iface.lpVtbl = &VAR_2;
    VAR_5->refs = 1;

    *VAR_4 = &VAR_5->INetFwProfile_iface;

    FUNC_2("returning iface %p\n", *VAR_4);
    return VAR_1;
}
