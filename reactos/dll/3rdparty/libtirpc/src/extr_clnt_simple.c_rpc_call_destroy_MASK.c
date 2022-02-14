
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_call_private {scalar_t__ client; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct rpc_call_private*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
 struct rpc_call_private *VAR_1 = (struct rpc_call_private *)VAR_0;

 if (VAR_1) {
  if (VAR_1->client)
   FUNC_0(VAR_1->client);
  FUNC_1(VAR_1);
 }
}
