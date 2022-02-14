
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ QOS; scalar_t__ AuthInfo; struct TYPE_5__* CookieAuth; struct TYPE_5__* NetworkOptions; int Protseq; int NetworkAddr; int Endpoint; scalar_t__ Assoc; int refs; } ;
typedef TYPE_1__ RpcBinding ;
typedef int RPC_STATUS ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (char*,TYPE_1__*) ;

RPC_STATUS FUNC_8(RpcBinding* VAR_1)
{
  if (FUNC_2(&VAR_1->refs))
    return VAR_0;

  FUNC_7("binding: %p\n", VAR_1);
  if (VAR_1->Assoc) FUNC_4(VAR_1->Assoc);
  FUNC_3(VAR_1->Endpoint);
  FUNC_3(VAR_1->NetworkAddr);
  FUNC_3(VAR_1->Protseq);
  FUNC_1(FUNC_0(), 0, VAR_1->NetworkOptions);
  FUNC_1(FUNC_0(), 0, VAR_1->CookieAuth);
  if (VAR_1->AuthInfo) FUNC_5(VAR_1->AuthInfo);
  if (VAR_1->QOS) FUNC_6(VAR_1->QOS);
  FUNC_1(FUNC_0(), 0, VAR_1);
  return VAR_0;
}
