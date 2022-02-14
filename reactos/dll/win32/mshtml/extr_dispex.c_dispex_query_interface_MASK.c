
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int IDispatchEx_iface; } ;
typedef int REFIID ;
typedef int IUnknown ;
typedef TYPE_1__ DispatchEx ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int VAR_5 ;

BOOL FUNC_2(DispatchEx *VAR_6, REFIID VAR_7, void **VAR_8)
{
    if(FUNC_1(&VAR_1, VAR_7))
        *VAR_8 = &VAR_6->IDispatchEx_iface;
    else if(FUNC_1(&VAR_2, VAR_7))
        *VAR_8 = &VAR_6->IDispatchEx_iface;
    else if(FUNC_1(&VAR_3, VAR_7))
        *VAR_8 = ((void*)0);
    else if(FUNC_1(&VAR_4, VAR_7))
        *VAR_8 = ((void*)0);
    else
        return VAR_0;

    if(*VAR_8)
        FUNC_0((IUnknown*)*VAR_8);
    return VAR_5;
}
