
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int err_t ;
struct TYPE_4__ {int ReceiveShutdownStatus; int ReceiveShutdown; int * SocketContext; } ;
typedef TYPE_1__* PCONNECTION_ENDPOINT ;


 int FUNC_0 (TYPE_1__*,int const) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int const) ;
 int VAR_0 ;

__attribute__((used)) static
void
FUNC_3(void *VAR_1, const err_t VAR_2)
{
    PCONNECTION_ENDPOINT VAR_3 = VAR_1;


    if (!VAR_1 || VAR_3->SocketContext == ((void*)0)) return;


    VAR_3->SocketContext = ((void*)0);


    VAR_3->ReceiveShutdown = VAR_0;
    VAR_3->ReceiveShutdownStatus = FUNC_2(VAR_2);
    FUNC_1(VAR_3);


    FUNC_0(VAR_3, VAR_2);
}
