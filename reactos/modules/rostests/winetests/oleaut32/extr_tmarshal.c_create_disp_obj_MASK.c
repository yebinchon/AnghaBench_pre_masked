
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * lpVtbl; } ;
struct disp_obj {int ref; TYPE_1__ ISomethingFromDispatch_iface; } ;
typedef TYPE_1__ ISomethingFromDispatch ;


 struct disp_obj* FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static ISomethingFromDispatch *FUNC_1(void)
{
    struct disp_obj *VAR_1 = FUNC_0(sizeof(*VAR_1));
    VAR_1->ISomethingFromDispatch_iface.lpVtbl = &VAR_0;
    VAR_1->ref = 1;
    return &VAR_1->ISomethingFromDispatch_iface;
}
