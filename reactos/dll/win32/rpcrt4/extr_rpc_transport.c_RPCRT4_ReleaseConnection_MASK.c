
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ wait_release; scalar_t__ assoc; scalar_t__ server_binding; scalar_t__ QOS; scalar_t__ AuthInfo; struct TYPE_8__* CookieAuth; struct TYPE_8__* NetworkOptions; int NetworkAddr; int Endpoint; int ref; TYPE_1__* protseq; int protseq_entry; } ;
struct TYPE_7__ {int cs; } ;
typedef TYPE_2__ RpcConnection ;
typedef scalar_t__ LONG ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,TYPE_2__*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (char*,TYPE_2__*,scalar_t__) ;
 int FUNC_13 (int *) ;

void FUNC_14(RpcConnection *VAR_0)
{
    LONG VAR_1;





    if (VAR_0->protseq)
    {
        FUNC_0(&VAR_0->protseq->cs);
        VAR_1 = FUNC_3(&VAR_0->ref);
        if (!VAR_1)
            FUNC_13(&VAR_0->protseq_entry);
        FUNC_4(&VAR_0->protseq->cs);
    }
    else
    {
        VAR_1 = FUNC_3(&VAR_0->ref);
    }

    FUNC_12("%p ref=%u\n", VAR_0, VAR_1);

    if (!VAR_1)
    {
        FUNC_5(VAR_0);
        FUNC_7(VAR_0->Endpoint);
        FUNC_7(VAR_0->NetworkAddr);
        FUNC_2(FUNC_1(), 0, VAR_0->NetworkOptions);
        FUNC_2(FUNC_1(), 0, VAR_0->CookieAuth);
        if (VAR_0->AuthInfo) FUNC_9(VAR_0->AuthInfo);
        if (VAR_0->QOS) FUNC_10(VAR_0->QOS);


        if (VAR_0->server_binding) FUNC_6(VAR_0->server_binding);
        else if (VAR_0->assoc) FUNC_8(VAR_0->assoc);

        if (VAR_0->wait_release) FUNC_11(VAR_0->wait_release);

        FUNC_2(FUNC_1(), 0, VAR_0);
    }
}
