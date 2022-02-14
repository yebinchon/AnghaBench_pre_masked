
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int connection_cnt; int NetworkOptions; int Endpoint; int NetworkAddr; int Protseq; } ;
struct TYPE_14__ {TYPE_2__* assoc; } ;
typedef int RpcQualityOfService ;
typedef TYPE_1__ RpcConnection ;
typedef int RpcAuthInfo ;
typedef TYPE_2__ RpcAssoc ;
typedef int RPC_SYNTAX_IDENTIFIER ;
typedef scalar_t__ RPC_STATUS ;
typedef int LPCWSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_1__**,int ,int ,int ,int ,int ,int *,int *,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (TYPE_2__*,TYPE_1__*,int const*,int const*) ;
 TYPE_1__* FUNC_5 (TYPE_2__*,int const*,int const*,int *,int *) ;
 int FUNC_6 (char*,TYPE_1__*,TYPE_2__*) ;
 int VAR_2 ;

RPC_STATUS FUNC_7(RpcAssoc *VAR_3,
                                        const RPC_SYNTAX_IDENTIFIER *VAR_4,
                                        const RPC_SYNTAX_IDENTIFIER *VAR_5, RpcAuthInfo *VAR_6,
                                        RpcQualityOfService *VAR_7, LPCWSTR VAR_8,
                                        RpcConnection **VAR_9, BOOL *VAR_10)
{
    RpcConnection *VAR_11;
    RPC_STATUS VAR_12;

    *VAR_9 = FUNC_5(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
    if (*VAR_9) {
        FUNC_6("return idle connection %p for association %p\n", *VAR_9, VAR_3);
        if (VAR_10) *VAR_10 = VAR_2;
        return VAR_1;
    }


    VAR_12 = FUNC_1(&VAR_11, VAR_0 ,
        VAR_3->Protseq, VAR_3->NetworkAddr,
        VAR_3->Endpoint, VAR_3->NetworkOptions,
        VAR_6, VAR_7, VAR_8);
    if (VAR_12 != VAR_1)
        return VAR_12;

    VAR_11->assoc = VAR_3;
    VAR_12 = FUNC_2(VAR_11);
    if (VAR_12 != VAR_1)
    {
        FUNC_3(VAR_11);
        return VAR_12;
    }

    VAR_12 = FUNC_4(VAR_3, VAR_11, VAR_4, VAR_5);
    if (VAR_12 != VAR_1)
    {
        FUNC_3(VAR_11);
        return VAR_12;
    }

    FUNC_0(&VAR_3->connection_cnt);

    FUNC_6("return new connection %p for association %p\n", *VAR_9, VAR_3);
    *VAR_9 = VAR_11;
    if (VAR_10) *VAR_10 = VAR_0;
    return VAR_1;
}
