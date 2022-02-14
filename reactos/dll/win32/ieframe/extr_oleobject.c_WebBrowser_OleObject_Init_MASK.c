
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {void* cy; void* cx; } ;
struct TYPE_13__ {int * lpVtbl; } ;
struct TYPE_12__ {int * lpVtbl; } ;
struct TYPE_11__ {int * lpVtbl; } ;
struct TYPE_10__ {int * lpVtbl; } ;
struct TYPE_9__ {int * lpVtbl; } ;
struct TYPE_15__ {TYPE_6__ extent; TYPE_5__ IOleCommandTarget_iface; TYPE_4__ IOleInPlaceActiveObject_iface; TYPE_3__ IOleControl_iface; TYPE_2__ IOleInPlaceObject_iface; TYPE_1__ IOleObject_iface; } ;
typedef TYPE_7__ WebBrowser ;
typedef int HDC ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_2 (int,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(WebBrowser *VAR_7)
{
    DWORD VAR_8;
    DWORD VAR_9;
    HDC VAR_10;


    VAR_10 = FUNC_0(0);
    VAR_8 = FUNC_1(VAR_10, VAR_0);
    VAR_9 = FUNC_1(VAR_10, VAR_1);
    FUNC_3(0, VAR_10);

    VAR_7->IOleObject_iface.lpVtbl = &VAR_6;
    VAR_7->IOleInPlaceObject_iface.lpVtbl = &VAR_5;
    VAR_7->IOleControl_iface.lpVtbl = &VAR_3;
    VAR_7->IOleInPlaceActiveObject_iface.lpVtbl = &VAR_4;
    VAR_7->IOleCommandTarget_iface.lpVtbl = &VAR_2;


    VAR_7->extent.cx = FUNC_2( 50, 2540, VAR_8 );
    VAR_7->extent.cy = FUNC_2( 20, 2540, VAR_9 );
}
