
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int client; } ;
typedef TYPE_1__ WebBrowser ;
typedef int IOleControlSite ;
typedef int HRESULT ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,void**) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(WebBrowser *VAR_1, BOOL VAR_2)
{
    IOleControlSite *VAR_3;
    HRESULT VAR_4;

    if(!VAR_1->client)
        return;

    VAR_4 = FUNC_1(VAR_1->client, &VAR_0, (void**)&VAR_3);
    if(FUNC_0(VAR_4))
        return;

    FUNC_2(VAR_3, VAR_2);
    FUNC_3(VAR_3);
}
