
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_6__ {int refs; int fw_policy2_rules; TYPE_1__ INetFwPolicy2_iface; } ;
typedef TYPE_2__ fw_policy2 ;
typedef int IUnknown ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 TYPE_2__* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_4 (char*,void*,...) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;

HRESULT FUNC_6( IUnknown *VAR_3, void **VAR_4 )
{
    fw_policy2 *VAR_5;

    FUNC_4("(%p,%p)\n", VAR_3, VAR_4);

    VAR_5 = FUNC_2( FUNC_1(), 0, sizeof(*VAR_5) );
    if (!VAR_5) return VAR_0;

    VAR_5->INetFwPolicy2_iface.lpVtbl = &VAR_2;
    VAR_5->refs = 1;

    *VAR_4 = &VAR_5->INetFwPolicy2_iface;

    if (FUNC_0(FUNC_5(&VAR_5->fw_policy2_rules)))
    {
        FUNC_3( FUNC_1(), 0, VAR_5 );
        return VAR_0;
    }

    FUNC_4("returning iface %p\n", *VAR_4);
    return VAR_1;
}
