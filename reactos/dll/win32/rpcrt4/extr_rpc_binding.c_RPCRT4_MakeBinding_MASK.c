
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* FromConn; void* Endpoint; void* NetworkAddr; void* Protseq; } ;
struct TYPE_7__ {int Endpoint; int NetworkAddr; int server; } ;
typedef TYPE_1__ RpcConnection ;
typedef TYPE_2__ RpcBinding ;
typedef int RPC_STATUS ;


 int FUNC_0 (TYPE_2__**,int ) ;
 void* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (TYPE_1__*) ;

RPC_STATUS FUNC_4(RpcBinding** VAR_1, RpcConnection* VAR_2)
{
  RpcBinding* VAR_3;
  FUNC_2("(RpcBinding == ^%p, Connection == ^%p)\n", VAR_1, VAR_2);

  FUNC_0(&VAR_3, VAR_2->server);
  VAR_3->Protseq = FUNC_1(FUNC_3(VAR_2));
  VAR_3->NetworkAddr = FUNC_1(VAR_2->NetworkAddr);
  VAR_3->Endpoint = FUNC_1(VAR_2->Endpoint);
  VAR_3->FromConn = VAR_2;

  FUNC_2("binding: %p\n", VAR_3);
  *VAR_1 = VAR_3;

  return VAR_0;
}
