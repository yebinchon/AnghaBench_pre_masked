
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * Assoc; int NetworkOptions; int Endpoint; int NetworkAddr; int Protseq; } ;
typedef TYPE_1__ RpcBinding ;
typedef scalar_t__ RPC_STATUS ;
typedef int LPCSTR ;


 scalar_t__ FUNC_0 (int ,int ,int ,int ,int **) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,TYPE_1__*,int ) ;

RPC_STATUS FUNC_5(RpcBinding* VAR_1, LPCSTR VAR_2)
{
  RPC_STATUS VAR_3;

  FUNC_4("(RpcBinding == ^%p, EndPoint == \"%s\"\n", VAR_1, VAR_2);

  FUNC_2(VAR_1->Endpoint);
  VAR_1->Endpoint = FUNC_1(VAR_2);

  if (VAR_1->Assoc) FUNC_3(VAR_1->Assoc);
  VAR_1->Assoc = ((void*)0);
  VAR_3 = FUNC_0(VAR_1->Protseq, VAR_1->NetworkAddr,
                                 VAR_1->Endpoint, VAR_1->NetworkOptions,
                                 &VAR_1->Assoc);
  if (VAR_3 != VAR_0)
      return VAR_3;

  return VAR_0;
}
