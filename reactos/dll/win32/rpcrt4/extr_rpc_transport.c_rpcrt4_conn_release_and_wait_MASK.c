
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ref; int * wait_release; } ;
typedef TYPE_1__ RpcConnection ;
typedef int * HANDLE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_3 (int *,int ) ;

void FUNC_4(RpcConnection *VAR_3)
{
    HANDLE VAR_4 = ((void*)0);

    if (VAR_3->ref > 1)
        VAR_4 = VAR_3->wait_release = FUNC_1(((void*)0), VAR_2, VAR_0, ((void*)0));

    FUNC_2(VAR_3);

    if(VAR_4)
    {
        FUNC_3(VAR_4, VAR_1);
        FUNC_0(VAR_4);
    }
}
