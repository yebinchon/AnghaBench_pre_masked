
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * lpVtbl; } ;
struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_9__ {TYPE_3__ IPersistStreamInit_iface; TYPE_2__ IPersistMemory_iface; TYPE_1__ IPersistStorage_iface; } ;
typedef TYPE_4__ WebBrowser ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0(WebBrowser *VAR_3)
{
    VAR_3->IPersistStorage_iface.lpVtbl = &VAR_1;
    VAR_3->IPersistMemory_iface.lpVtbl = &VAR_0;
    VAR_3->IPersistStreamInit_iface.lpVtbl = &VAR_2;
}
