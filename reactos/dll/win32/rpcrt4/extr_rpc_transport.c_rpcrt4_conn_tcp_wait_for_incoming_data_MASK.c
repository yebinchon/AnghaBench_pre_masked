
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RpcConnection_tcp ;
typedef int RpcConnection ;


 int FUNC_0 (char*,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(RpcConnection *VAR_0)
{
    RpcConnection_tcp *VAR_1 = (RpcConnection_tcp *) VAR_0;

    FUNC_0("%p\n", VAR_0);

    if (!FUNC_1(VAR_1))
        return -1;
    return 0;
}
