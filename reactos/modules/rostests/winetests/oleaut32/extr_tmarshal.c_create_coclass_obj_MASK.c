
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * lpVtbl; } ;
struct TYPE_3__ {int * lpVtbl; } ;
struct coclass_obj {int ref; TYPE_2__ ICoclass2_iface; TYPE_1__ ICoclass1_iface; } ;


 struct coclass_obj* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static struct coclass_obj *FUNC_1(void)
{
    struct coclass_obj *VAR_2 = FUNC_0(sizeof(*VAR_2));
    VAR_2->ICoclass1_iface.lpVtbl = &VAR_0;
    VAR_2->ICoclass2_iface.lpVtbl = &VAR_1;
    VAR_2->ref = 1;
    return VAR_2;
}
