
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_7__ {int ref; TYPE_1__ IKsPropertySet_iface; } ;
typedef int REFIID ;
typedef TYPE_1__ IKsPropertySet ;
typedef TYPE_2__ IKsPrivatePropertySetImpl ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int *) ;
 int VAR_3 ;
 int FUNC_3 (char*,int ,TYPE_1__**) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;

HRESULT FUNC_5(
    REFIID VAR_5,
    IKsPropertySet **VAR_6)
{
    IKsPrivatePropertySetImpl *VAR_7;
    FUNC_3("(%s, %p)\n", FUNC_4(VAR_5), VAR_6);

    if (!FUNC_2(VAR_5, &VAR_2) &&
        !FUNC_2(VAR_5, &VAR_1)) {
        *VAR_6 = 0;
        return VAR_0;
    }

    VAR_7 = FUNC_1(FUNC_0(),0,sizeof(*VAR_7));
    VAR_7->ref = 1;
    VAR_7->IKsPropertySet_iface.lpVtbl = &VAR_4;

    *VAR_6 = &VAR_7->IKsPropertySet_iface;
    return VAR_3;
}
