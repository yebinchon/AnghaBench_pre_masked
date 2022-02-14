
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VARIANT ;
struct TYPE_3__ {int client; } ;
typedef int IOleCommandTarget ;
typedef TYPE_1__ HTMLDocumentObj ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int *,void**) ;
 int FUNC_3 (int *,int *,int,int ,int *,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(HTMLDocumentObj *VAR_3)
{
    IOleCommandTarget *VAR_4;
    VARIANT VAR_5;
    HRESULT VAR_6;

    if(!VAR_3->client)
        return;

    VAR_6 = FUNC_2(VAR_3->client, &VAR_1, (void**)&VAR_4);
    if(FUNC_0(VAR_6))
        return;

    FUNC_7(&VAR_5);
    VAR_6 = FUNC_3(VAR_4, &VAR_0, 69, 0, ((void*)0), &VAR_5);
    FUNC_4(VAR_4);
    if(FUNC_5(VAR_6) && FUNC_6(&VAR_5) != VAR_2)
        FUNC_1("handle result\n");
}
