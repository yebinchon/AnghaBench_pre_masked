
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_5__ {int ref; TYPE_2__ IOleInPlaceFrame_iface; } ;
typedef TYPE_1__ InPlaceFrame ;
typedef TYPE_2__ IOleInPlaceFrame ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int) ;

HRESULT FUNC_1(IOleInPlaceFrame **VAR_3)
{
    InPlaceFrame *VAR_4;

    VAR_4 = FUNC_0(sizeof(*VAR_4));
    if(!VAR_4)
        return VAR_0;

    VAR_4->IOleInPlaceFrame_iface.lpVtbl = &VAR_1;
    VAR_4->ref = 1;

    *VAR_3 = &VAR_4->IOleInPlaceFrame_iface;
    return VAR_2;
}
