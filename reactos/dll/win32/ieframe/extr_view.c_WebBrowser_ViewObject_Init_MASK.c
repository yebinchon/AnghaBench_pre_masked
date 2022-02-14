
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_7__ {TYPE_2__ IDataObject_iface; TYPE_1__ IViewObject2_iface; } ;
typedef TYPE_3__ WebBrowser ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(WebBrowser *VAR_2)
{
    VAR_2->IViewObject2_iface.lpVtbl = &VAR_1;
    VAR_2->IDataObject_iface.lpVtbl = &VAR_0;
}
