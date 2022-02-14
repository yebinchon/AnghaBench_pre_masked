
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UUID ;
struct TYPE_4__ {int ObjectUuid; } ;
typedef TYPE_1__ RpcBinding ;
typedef int RPC_STATUS ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_1__*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int const*) ;

RPC_STATUS FUNC_3(RpcBinding* VAR_1, const UUID* VAR_2)
{
  FUNC_0("(*RpcBinding == ^%p, UUID == %s)\n", VAR_1, FUNC_2(VAR_2));
  if (VAR_2) VAR_1->ObjectUuid = *VAR_2;
  else FUNC_1(&VAR_1->ObjectUuid);
  return VAR_0;
}
