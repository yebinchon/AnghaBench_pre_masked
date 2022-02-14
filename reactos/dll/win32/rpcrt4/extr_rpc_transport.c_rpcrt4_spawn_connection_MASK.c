
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* protseq; int protseq_entry; int CookieAuth; int QOS; int AuthInfo; int Endpoint; int NetworkAddr; int server; } ;
struct TYPE_9__ {int cs; int connections; } ;
typedef TYPE_2__ RpcConnection ;
typedef scalar_t__ RPC_STATUS ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_2__**,int ,int ,int ,int ,int *,int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__*) ;

__attribute__((used)) static RpcConnection *FUNC_6(RpcConnection *VAR_1)
{
    RpcConnection *VAR_2;
    RPC_STATUS VAR_3;

    VAR_3 = FUNC_2(&VAR_2, VAR_1->server, FUNC_4(VAR_1),
                                  VAR_1->NetworkAddr, VAR_1->Endpoint, ((void*)0),
                                  VAR_1->AuthInfo, VAR_1->QOS, VAR_1->CookieAuth);
    if (VAR_3 != VAR_0)
        return ((void*)0);

    FUNC_5(VAR_1, VAR_2);
    if (VAR_1->protseq)
    {
        FUNC_0(&VAR_1->protseq->cs);
        VAR_2->protseq = VAR_1->protseq;
        FUNC_3(&VAR_1->protseq->connections, &VAR_2->protseq_entry);
        FUNC_1(&VAR_1->protseq->cs);
    }
    return VAR_2;
}
