
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int Endpoint; int NetworkAddr; } ;
struct TYPE_5__ {scalar_t__ pipe; } ;
typedef TYPE_1__ RpcConnection_np ;
typedef TYPE_2__ RpcConnection ;
typedef int RPC_STATUS ;
typedef int LPSTR ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,...) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static RPC_STATUS FUNC_3(RpcConnection* VAR_2)
{
  RpcConnection_np *VAR_3 = (RpcConnection_np *) VAR_2;
  RPC_STATUS VAR_4;
  LPSTR VAR_5;


  if (VAR_3->pipe)
    return VAR_1;




  VAR_5 = FUNC_1(VAR_2->Endpoint);

  VAR_4 = FUNC_2(VAR_2, VAR_5, VAR_0);
  FUNC_0(VAR_5);

  return VAR_4;
}
