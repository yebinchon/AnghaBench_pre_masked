
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int IOleClientSite_iface; scalar_t__ ole_obj; } ;
typedef TYPE_1__ WebBrowserContainer ;
struct TYPE_5__ {TYPE_1__* web_browser; } ;
typedef int IOleInPlaceSite ;
typedef int HRESULT ;
typedef TYPE_2__ HHInfo ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,int *,void**) ;
 int FUNC_4 (scalar_t__,int *) ;
 scalar_t__ FUNC_5 (int ) ;

void FUNC_6(HHInfo *VAR_1)
{
    WebBrowserContainer *VAR_2 = VAR_1->web_browser;
    HRESULT VAR_3;

    if(!VAR_2)
        return;

    if(VAR_2->ole_obj) {
        IOleInPlaceSite *VAR_4;

        VAR_3 = FUNC_3(VAR_2->ole_obj, &VAR_0, (void**)&VAR_4);
        if(FUNC_5(VAR_3)) {
            FUNC_1(VAR_4);
            FUNC_2(VAR_4);
        }

        FUNC_4(VAR_2->ole_obj, ((void*)0));
    }

    VAR_1->web_browser = ((void*)0);
    FUNC_0(&VAR_2->IOleClientSite_iface);
}
