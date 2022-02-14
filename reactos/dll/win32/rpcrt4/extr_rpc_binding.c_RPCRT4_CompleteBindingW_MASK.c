
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Assoc; int NetworkOptions; void* Endpoint; void* NetworkAddr; int Protseq; } ;
typedef TYPE_1__ RpcBinding ;
typedef scalar_t__ RPC_STATUS ;
typedef char* LPCWSTR ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ,void*,void*,int ,int *) ;
 int FUNC_3 (char*) ;
 void* FUNC_4 (char*) ;
 int FUNC_5 (void*) ;
 scalar_t__ VAR_0 ;
 int FUNC_6 (char*,TYPE_1__*,int ,int ,int ) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static RPC_STATUS FUNC_8(RpcBinding* VAR_1, LPCWSTR VAR_2,
                                          LPCWSTR VAR_3, LPCWSTR VAR_4)
{
  RPC_STATUS VAR_5;

  FUNC_6("(RpcBinding == ^%p, NetworkAddr == %s, EndPoint == %s, NetworkOptions == %s)\n", VAR_1,
   FUNC_7(VAR_2), FUNC_7(VAR_3), FUNC_7(VAR_4));

  FUNC_5(VAR_1->NetworkAddr);
  VAR_1->NetworkAddr = FUNC_4(VAR_2);
  FUNC_5(VAR_1->Endpoint);
  VAR_1->Endpoint = FUNC_4(VAR_3);
  FUNC_1(FUNC_0(), 0, VAR_1->NetworkOptions);
  VAR_1->NetworkOptions = FUNC_3(VAR_4);


  if (VAR_3 && VAR_3[0] != '\0')
  {
    VAR_5 = FUNC_2(VAR_1->Protseq, VAR_1->NetworkAddr,
                                   VAR_1->Endpoint, VAR_1->NetworkOptions,
                                   &VAR_1->Assoc);
    if (VAR_5 != VAR_0)
        return VAR_5;
  }

  return VAR_0;
}
