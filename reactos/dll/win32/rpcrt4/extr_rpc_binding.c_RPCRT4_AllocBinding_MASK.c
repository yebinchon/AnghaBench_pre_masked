
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int refs; int server; } ;
typedef TYPE_1__ RpcBinding ;
typedef int RPC_STATUS ;
typedef int BOOL ;


 int FUNC_0 () ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int VAR_1 ;

__attribute__((used)) static RPC_STATUS FUNC_2(RpcBinding** VAR_2, BOOL VAR_3)
{
  RpcBinding* VAR_4;

  VAR_4 = FUNC_1(FUNC_0(), VAR_0, sizeof(RpcBinding));
  VAR_4->refs = 1;
  VAR_4->server = VAR_3;

  *VAR_2 = VAR_4;

  return VAR_1;
}
