
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int * lpVtbl; } ;
struct TYPE_11__ {int * lpVtbl; } ;
struct TYPE_12__ {int ref; int version; TYPE_8__ IWebBrowser2_iface; int doc_host; int hlink_frame; void* tool_bar; void* status_bar; void* address_bar; void* menu_bar; void* visible; TYPE_1__ IServiceProvider_iface; } ;
typedef TYPE_2__ WebBrowser ;
typedef int REFIID ;
typedef int IUnknown ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_8__*,int *) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (TYPE_8__*,int ,void**) ;
 int FUNC_3 (TYPE_8__*) ;
 int VAR_1 ;
 int FUNC_4 (char*,int *,int ,void**,int) ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int ) ;
 TYPE_2__* FUNC_10 (int) ;
 int FUNC_11 () ;

__attribute__((used)) static HRESULT FUNC_12(int VAR_4, IUnknown *VAR_5, REFIID VAR_6, void **VAR_7)
{
    WebBrowser *VAR_8;
    HRESULT VAR_9;

    FUNC_4("(%p %s %p) version=%d\n", VAR_5, FUNC_9(VAR_6), VAR_7, VAR_4);

    VAR_8 = FUNC_10(sizeof(WebBrowser));

    VAR_8->IWebBrowser2_iface.lpVtbl = &VAR_3;
    VAR_8->IServiceProvider_iface.lpVtbl = &VAR_1;
    VAR_8->ref = 1;
    VAR_8->version = VAR_4;

    FUNC_0(&VAR_8->doc_host, &VAR_8->IWebBrowser2_iface, &VAR_0);

    VAR_8->visible = VAR_2;
    VAR_8->menu_bar = VAR_2;
    VAR_8->address_bar = VAR_2;
    VAR_8->status_bar = VAR_2;
    VAR_8->tool_bar = VAR_2;

    FUNC_6(VAR_8);
    FUNC_8(VAR_8);
    FUNC_7(VAR_8);
    FUNC_5(VAR_8);

    FUNC_1(&VAR_8->hlink_frame, (IUnknown*)&VAR_8->IWebBrowser2_iface, &VAR_8->doc_host);

    FUNC_11();

    VAR_9 = FUNC_2(&VAR_8->IWebBrowser2_iface, VAR_6, VAR_7);

    FUNC_3(&VAR_8->IWebBrowser2_iface);
    return VAR_9;
}
