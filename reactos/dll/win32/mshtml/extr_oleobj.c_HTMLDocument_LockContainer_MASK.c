
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ container_locked; int client; } ;
typedef int IOleContainer ;
typedef TYPE_1__ HTMLDocumentObj ;
typedef int HRESULT ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ,int **) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;

void FUNC_4(HTMLDocumentObj *VAR_0, BOOL VAR_1)
{
    IOleContainer *VAR_2;
    HRESULT VAR_3;

    if(!VAR_0->client || VAR_0->container_locked == VAR_1)
        return;

    VAR_3 = FUNC_0(VAR_0->client, &VAR_2);
    if(FUNC_3(VAR_3)) {
        FUNC_1(VAR_2, VAR_1);
        VAR_0->container_locked = VAR_1;
        FUNC_2(VAR_2);
    }
}
