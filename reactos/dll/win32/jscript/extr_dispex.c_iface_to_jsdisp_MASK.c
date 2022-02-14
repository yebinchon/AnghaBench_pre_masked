
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int jsdisp_t ;
struct TYPE_3__ {int const* lpVtbl; } ;
typedef int IDispatchVtbl ;
typedef int IDispatchEx ;
typedef TYPE_1__ IDispatch ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;

jsdisp_t *FUNC_2(IDispatch *VAR_1)
{
    return VAR_1->lpVtbl == (const IDispatchVtbl*)&VAR_0
        ? FUNC_1( FUNC_0((IDispatchEx*)VAR_1))
        : ((void*)0);
}
