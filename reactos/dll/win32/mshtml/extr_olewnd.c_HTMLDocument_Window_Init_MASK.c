
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_7__ {TYPE_2__ IOleInPlaceObjectWindowless_iface; TYPE_1__ IOleInPlaceActiveObject_iface; } ;
typedef TYPE_3__ HTMLDocument ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(HTMLDocument *VAR_2)
{
    VAR_2->IOleInPlaceActiveObject_iface.lpVtbl = &VAR_0;
    VAR_2->IOleInPlaceObjectWindowless_iface.lpVtbl = &VAR_1;
}
