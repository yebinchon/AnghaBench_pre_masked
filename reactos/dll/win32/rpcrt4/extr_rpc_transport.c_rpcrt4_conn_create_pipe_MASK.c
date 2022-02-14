
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pipe; int listen_pipe; } ;
typedef TYPE_1__ RpcConnection_np ;
typedef int RpcConnection ;
typedef int RPC_STATUS ;


 scalar_t__ FUNC_0 (int ,int,int,int ,int ,int ,int,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,scalar_t__) ;

__attribute__((used)) static RPC_STATUS FUNC_4(RpcConnection *VAR_11)
{
    RpcConnection_np *VAR_12 = (RpcConnection_np *) VAR_11;

    FUNC_2("listening on %s\n", VAR_12->listen_pipe);

    VAR_12->pipe = FUNC_0(VAR_12->listen_pipe, VAR_3 | VAR_1,
                                        VAR_5 | VAR_4,
                                        VAR_6,
                                        VAR_7, VAR_7, 5000, ((void*)0));
    if (VAR_12->pipe == VAR_2)
    {
        FUNC_3("CreateNamedPipe failed with error %d\n", FUNC_1());
        if (FUNC_1() == VAR_0)
            return VAR_9;
        else
            return VAR_8;
    }

    return VAR_10;
}
