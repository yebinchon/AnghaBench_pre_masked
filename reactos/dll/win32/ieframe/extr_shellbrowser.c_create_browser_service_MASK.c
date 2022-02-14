
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int * lpVtbl; } ;
struct TYPE_8__ {int * lpVtbl; } ;
struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_10__ {int ref; int * doc_host; TYPE_3__ IDocObjectService_iface; TYPE_2__ IBrowserService_iface; TYPE_1__ IShellBrowser_iface; } ;
typedef TYPE_4__ ShellBrowser ;
typedef int HRESULT ;
typedef int DocHost ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* FUNC_0 (int) ;

HRESULT FUNC_1(DocHost *VAR_5, ShellBrowser **VAR_6)
{
    ShellBrowser *VAR_7;

    VAR_7 = FUNC_0(sizeof(ShellBrowser));
    if(!VAR_7)
        return VAR_2;

    VAR_7->IShellBrowser_iface.lpVtbl = &VAR_4;
    VAR_7->IBrowserService_iface.lpVtbl = &VAR_0;
    VAR_7->IDocObjectService_iface.lpVtbl = &VAR_1;

    VAR_7->ref = 1;
    VAR_7->doc_host = VAR_5;

    *VAR_6 = VAR_7;
    return VAR_3;
}
