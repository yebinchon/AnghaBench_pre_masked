
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxrpc_local {int active_users; } ;


 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (struct rxrpc_local*) ;
 int FUNC_2 (struct rxrpc_local*) ;

void FUNC_3(struct rxrpc_local *VAR_0)
{
 unsigned int VAR_1;

 if (VAR_0) {
  VAR_1 = FUNC_0(&VAR_0->active_users);
  if (VAR_1 == 0)
   FUNC_2(VAR_0);
  else
   FUNC_1(VAR_0);
 }
}
