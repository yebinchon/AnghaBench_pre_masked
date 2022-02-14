
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RPC_STATUS ;
typedef int RPC_BINDING_HANDLE ;


 int FUNC_0 (unsigned char*,int *) ;

__attribute__((used)) static RPC_STATUS FUNC_1(RPC_BINDING_HANDLE *VAR_0)
{
    unsigned char VAR_1[] = "ncacn_np:.[\\\\pipe\\\\epmapper]";

    return FUNC_0(VAR_1, VAR_0);
}
