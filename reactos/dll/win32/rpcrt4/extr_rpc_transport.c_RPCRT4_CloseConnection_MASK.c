
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ctx; } ;
typedef TYPE_1__ RpcConnection ;
typedef int RPC_STATUS ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (char*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

RPC_STATUS FUNC_5(RpcConnection* VAR_1)
{
  FUNC_3("(Connection == ^%p)\n", VAR_1);
  if (FUNC_2(&VAR_1->ctx))
  {
    FUNC_0(&VAR_1->ctx);
    FUNC_1(&VAR_1->ctx);
  }
  FUNC_4(VAR_1);
  return VAR_0;
}
