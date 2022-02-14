
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int * lpVtbl; } ;
struct TYPE_11__ {int * lpVtbl; } ;
struct TYPE_10__ {int * lpVtbl; } ;
struct TYPE_9__ {int * lpVtbl; } ;
struct TYPE_8__ {int * lpVtbl; } ;
struct TYPE_13__ {TYPE_5__ IPersistHistory_iface; TYPE_4__ IPersistStreamInit_iface; TYPE_3__ IMonikerProp_iface; TYPE_2__ IPersistFile_iface; TYPE_1__ IPersistMoniker_iface; } ;
typedef TYPE_6__ HTMLDocument ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_0(HTMLDocument *VAR_5)
{
    VAR_5->IPersistMoniker_iface.lpVtbl = &VAR_3;
    VAR_5->IPersistFile_iface.lpVtbl = &VAR_1;
    VAR_5->IMonikerProp_iface.lpVtbl = &VAR_0;
    VAR_5->IPersistStreamInit_iface.lpVtbl = &VAR_4;
    VAR_5->IPersistHistory_iface.lpVtbl = &VAR_2;
}
