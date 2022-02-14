
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int * lpVtbl; } ;
struct TYPE_8__ {int * lpVtbl; } ;
struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_9__ {int ref; TYPE_5__ IAccessible_iface; TYPE_2__ IEnumVARIANT_iface; TYPE_1__ IOleWindow_iface; } ;
typedef TYPE_3__ Window ;
typedef int IID ;
typedef int HWND ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*,int const*,void**) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_3 (int) ;

HRESULT FUNC_4(HWND VAR_5, const IID *VAR_6, void **VAR_7)
{
    Window *VAR_8;
    HRESULT VAR_9;

    if(!FUNC_2(VAR_5))
        return VAR_0;

    VAR_8 = FUNC_3(sizeof(Window));
    if(!VAR_8)
        return VAR_1;

    VAR_8->IAccessible_iface.lpVtbl = &VAR_4;
    VAR_8->IOleWindow_iface.lpVtbl = &VAR_3;
    VAR_8->IEnumVARIANT_iface.lpVtbl = &VAR_2;
    VAR_8->ref = 1;

    VAR_9 = FUNC_0(&VAR_8->IAccessible_iface, VAR_6, VAR_7);
    FUNC_1(&VAR_8->IAccessible_iface);
    return VAR_9;
}
