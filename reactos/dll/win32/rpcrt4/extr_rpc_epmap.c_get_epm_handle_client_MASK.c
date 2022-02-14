
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {char* endpoint; int protseq; } ;
struct TYPE_10__ {int * AuthInfo; int Protseq; scalar_t__ server; } ;
typedef TYPE_1__ RpcBinding ;
typedef scalar_t__ RPC_STATUS ;
typedef TYPE_1__* RPC_BINDING_HANDLE ;


 unsigned int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (TYPE_1__*,char const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*,TYPE_1__**) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 TYPE_5__* VAR_3 ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static RPC_STATUS FUNC_8(RPC_BINDING_HANDLE VAR_4, RPC_BINDING_HANDLE *VAR_5)
{
    RpcBinding *VAR_6 = VAR_4;
    const char * VAR_7 = ((void*)0);
    RPC_STATUS VAR_8;
    RpcBinding* VAR_9;
    unsigned int VAR_10;

    if (VAR_6->server)
        return VAR_0;

    for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_3); VAR_10++)
        if (!FUNC_7(VAR_6->Protseq, VAR_3[VAR_10].protseq))
            VAR_7 = VAR_3[VAR_10].endpoint;

    if (!VAR_7)
    {
        FUNC_1("no endpoint for the endpoint-mapper found for protseq %s\n", FUNC_6(VAR_6->Protseq));
        return VAR_2;
    }

    VAR_8 = FUNC_4(VAR_4, VAR_5);
    if (VAR_8 != VAR_1) return VAR_8;

    VAR_9 = *VAR_5;
    if (VAR_9->AuthInfo)
    {


        FUNC_3(VAR_9->AuthInfo);
        VAR_9->AuthInfo = ((void*)0);
    }
    FUNC_2(VAR_9, VAR_7);
    FUNC_5("RPC_S_OK\n");
    return VAR_1;
}
