
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxrpc_call {scalar_t__ state; int state_lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,struct rxrpc_call*) ;
 int FUNC_1 (struct rxrpc_call*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct rxrpc_call *VAR_2)
{
 FUNC_0("%p", VAR_2);
 if (VAR_2) {
  FUNC_2(&VAR_2->state_lock);
  if (VAR_2->state == VAR_1) {
   VAR_2->state = VAR_0;
   FUNC_1(VAR_2);
  }
  FUNC_3(&VAR_2->state_lock);
 }
}
