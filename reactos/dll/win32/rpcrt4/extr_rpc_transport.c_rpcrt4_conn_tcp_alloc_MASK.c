
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sock; int common; } ;
typedef TYPE_1__ RpcConnection_tcp ;
typedef int RpcConnection ;


 int FUNC_0 () ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static RpcConnection *FUNC_4(void)
{
  RpcConnection_tcp *VAR_1;
  VAR_1 = FUNC_1(FUNC_0(), VAR_0, sizeof(RpcConnection_tcp));
  if (VAR_1 == ((void*)0))
    return ((void*)0);
  VAR_1->sock = -1;
  if (!FUNC_3(VAR_1))
  {
    FUNC_2(FUNC_0(), 0, VAR_1);
    return ((void*)0);
  }
  return &VAR_1->common;
}
