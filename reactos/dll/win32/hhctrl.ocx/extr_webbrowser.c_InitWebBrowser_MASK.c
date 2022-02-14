
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct IUnknown {int dummy; } ;
struct TYPE_16__ {int * lpVtbl; } ;
struct TYPE_13__ {int * lpVtbl; } ;
struct TYPE_12__ {int * lpVtbl; } ;
struct TYPE_11__ {int * lpVtbl; } ;
struct TYPE_14__ {int ref; int web_browser; scalar_t__ ole_obj; TYPE_8__ IOleClientSite_iface; int hwndWindow; TYPE_3__ IDocHostUIHandler_iface; TYPE_2__ IOleInPlaceFrame_iface; TYPE_1__ IOleInPlaceSite_iface; } ;
typedef TYPE_4__ WebBrowserContainer ;
struct TYPE_15__ {TYPE_4__* web_browser; } ;
typedef int RECT ;
typedef int IOleInPlaceObject ;
typedef int HWND ;
typedef int HRESULT ;
typedef TYPE_5__ HHInfo ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (scalar_t__,int ,int *,TYPE_8__*,int,int ,int *) ;
 int FUNC_5 (scalar_t__,int *,void**) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int *,int *,int ,int ,TYPE_8__*,int *,void**) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (struct IUnknown*,int ) ;
 int FUNC_8 (TYPE_5__*) ;
 scalar_t__ FUNC_9 (int ) ;
 int VAR_12 ;
 TYPE_4__* FUNC_10 (int) ;

BOOL FUNC_11(HHInfo *VAR_13, HWND VAR_14)
{
    WebBrowserContainer *VAR_15;
    IOleInPlaceObject *VAR_16;
    HRESULT VAR_17;
    RECT VAR_18;

    VAR_15 = FUNC_10(sizeof(*VAR_15));
    if (!VAR_15)
        return VAR_2;

    VAR_15->IOleClientSite_iface.lpVtbl = &VAR_9;
    VAR_15->IOleInPlaceSite_iface.lpVtbl = &VAR_11;
    VAR_15->IOleInPlaceFrame_iface.lpVtbl = &VAR_10;
    VAR_15->IDocHostUIHandler_iface.lpVtbl = &VAR_1;
    VAR_15->ref = 1;
    VAR_15->hwndWindow = VAR_14;

    VAR_13->web_browser = VAR_15;

    VAR_17 = FUNC_6(&VAR_0, &VAR_4, VAR_8, 0,
                   &VAR_15->IOleClientSite_iface, &VAR_6,
                   (void **)&VAR_15->ole_obj);

    if (FUNC_0(VAR_17)) goto error;

    FUNC_1(VAR_14, &VAR_18);

    VAR_17 = FUNC_7((struct IUnknown *)VAR_15->ole_obj, VAR_12);
    if (FUNC_0(VAR_17)) goto error;

    VAR_17 = FUNC_4(VAR_15->ole_obj, VAR_7, ((void*)0),
                           &VAR_15->IOleClientSite_iface, -1, VAR_14, &VAR_18);
    if (FUNC_0(VAR_17)) goto error;

    VAR_17 = FUNC_5(VAR_15->ole_obj, &VAR_3, (void**)&VAR_16);
    if (FUNC_0(VAR_17)) goto error;

    FUNC_3(VAR_16, &VAR_18, &VAR_18);
    FUNC_2(VAR_16);

    VAR_17 = FUNC_5(VAR_15->ole_obj, &VAR_5, (void **)&VAR_15->web_browser);
    if (FUNC_9(VAR_17))
        return VAR_12;

error:
    FUNC_8(VAR_13);
    return VAR_2;
}
