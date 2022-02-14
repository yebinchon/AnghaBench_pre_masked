
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int cbSize; int wAlignment; int dwMask; } ;
struct TYPE_10__ {int style; } ;
struct TYPE_9__ {int * lpVtbl; } ;
struct TYPE_8__ {int ref; TYPE_2__ ITextHost_iface; TYPE_4__ para_fmt; int bEmulateVersion10; int hWnd; } ;
typedef TYPE_1__ ITextHostImpl ;
typedef TYPE_2__ ITextHost ;
typedef int HWND ;
typedef TYPE_3__ CREATESTRUCTW ;
typedef int BOOL ;


 TYPE_1__* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_4__*,int ,int) ;
 int VAR_6 ;

ITextHost *FUNC_2(HWND VAR_7, CREATESTRUCTW *VAR_8, BOOL VAR_9)
{
    ITextHostImpl *VAR_10;

    VAR_10 = FUNC_0(sizeof(*VAR_10));
    if (!VAR_10) return ((void*)0);

    VAR_10->ITextHost_iface.lpVtbl = &VAR_6;
    VAR_10->ref = 1;
    VAR_10->hWnd = VAR_7;
    VAR_10->bEmulateVersion10 = VAR_9;
    FUNC_1( &VAR_10->para_fmt, 0, sizeof(VAR_10->para_fmt) );
    VAR_10->para_fmt.cbSize = sizeof(VAR_10->para_fmt);
    VAR_10->para_fmt.dwMask = VAR_5;
    VAR_10->para_fmt.wAlignment = VAR_3;
    if (VAR_8->style & VAR_1)
        VAR_10->para_fmt.wAlignment = VAR_4;
    if (VAR_8->style & VAR_0)
        VAR_10->para_fmt.wAlignment = VAR_2;

    return &VAR_10->ITextHost_iface;
}
