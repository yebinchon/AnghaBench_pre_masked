
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int focus; int client; } ;
typedef int IOleControlSite ;
typedef TYPE_1__ HTMLDocumentObj ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,void**) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(HTMLDocumentObj *VAR_1)
{
    IOleControlSite *VAR_2;
    HRESULT VAR_3;

    if(!VAR_1->client)
        return;

    VAR_3 = FUNC_1(VAR_1->client, &VAR_0, (void**)&VAR_2);
    if(FUNC_0(VAR_3))
        return;

    FUNC_2(VAR_2, VAR_1->focus);
    FUNC_3(VAR_2);
}
