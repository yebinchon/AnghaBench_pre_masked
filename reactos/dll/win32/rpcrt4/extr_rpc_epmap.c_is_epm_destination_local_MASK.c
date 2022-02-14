
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* Protseq; char* NetworkAddr; } ;
typedef TYPE_1__ RpcBinding ;
typedef TYPE_1__* RPC_BINDING_HANDLE ;
typedef int BOOL ;


 int FUNC_0 (char const*,char*) ;

__attribute__((used)) static inline BOOL FUNC_1(RPC_BINDING_HANDLE VAR_0)
{
    RpcBinding *VAR_1 = VAR_0;
    const char *VAR_2 = VAR_1->Protseq;
    const char *VAR_3 = VAR_1->NetworkAddr;

    return (!FUNC_0(VAR_2, "ncalrpc") ||
           (!FUNC_0(VAR_2, "ncacn_np") &&
                (!VAR_3 || !FUNC_0(VAR_3, "."))));
}
