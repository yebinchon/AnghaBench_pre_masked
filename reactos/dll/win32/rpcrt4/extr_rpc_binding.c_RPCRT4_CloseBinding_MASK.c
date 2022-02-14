
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Assoc; int * FromConn; scalar_t__ server; } ;
typedef int RpcConnection ;
typedef TYPE_1__ RpcBinding ;
typedef int RPC_STATUS ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (char*,TYPE_1__*) ;

RPC_STATUS FUNC_3(RpcBinding* VAR_1, RpcConnection* VAR_2)
{
  FUNC_2("(Binding == ^%p)\n", VAR_1);
  if (!VAR_2) return VAR_0;
  if (VAR_1->server) {

    if (VAR_1->FromConn != VAR_2)
      FUNC_0(VAR_2);
  }
  else {
    FUNC_1(VAR_1->Assoc, VAR_2);
  }
  return VAR_0;
}
