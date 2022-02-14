
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ref; int entry; int doc_host; int IWebBrowser2_iface; int hlink_frame; } ;
typedef TYPE_1__ InternetExplorer ;
typedef int IUnknown ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int) ;
 int VAR_3 ;
 int FUNC_6 (int *,int *) ;
 int VAR_4 ;

__attribute__((used)) static HRESULT FUNC_7(InternetExplorer **VAR_5)
{
    InternetExplorer *VAR_6;

    VAR_6 = FUNC_5(sizeof(InternetExplorer));
    if(!VAR_6)
        return VAR_1;

    VAR_6->ref = 1;

    FUNC_0(&VAR_6->doc_host, &VAR_6->IWebBrowser2_iface, &VAR_0);

    FUNC_3(VAR_6);

    FUNC_1(&VAR_6->hlink_frame, (IUnknown*)&VAR_6->IWebBrowser2_iface, &VAR_6->doc_host);

    FUNC_4(VAR_6);

    FUNC_2(&VAR_4);
    FUNC_6(&VAR_3, &VAR_6->entry);
    *VAR_5 = VAR_6;
    return VAR_2;
}
