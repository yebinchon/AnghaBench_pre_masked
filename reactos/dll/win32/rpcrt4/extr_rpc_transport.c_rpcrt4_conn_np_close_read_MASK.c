
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int io_status; int pipe; int read_closed; } ;
typedef TYPE_1__ RpcConnection_np ;
typedef int RpcConnection ;
typedef int IO_STATUS_BLOCK ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(RpcConnection *VAR_1)
{
    RpcConnection_np *VAR_2 = (RpcConnection_np*)VAR_1;
    IO_STATUS_BLOCK VAR_3;

    VAR_2->read_closed = VAR_0;



    FUNC_1(VAR_2->pipe, &VAR_2->io_status, &VAR_3);

}
