
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* ops; int server; } ;
struct TYPE_6__ {int (* open_connection_client ) (TYPE_2__*) ;} ;
typedef TYPE_2__ RpcConnection ;
typedef int RPC_STATUS ;


 int FUNC_0 (char*,TYPE_2__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;

RPC_STATUS FUNC_3(RpcConnection* VAR_0)
{
  FUNC_0("(Connection == ^%p)\n", VAR_0);

  FUNC_1(!VAR_0->server);
  return VAR_0->ops->open_connection_client(VAR_0);
}
