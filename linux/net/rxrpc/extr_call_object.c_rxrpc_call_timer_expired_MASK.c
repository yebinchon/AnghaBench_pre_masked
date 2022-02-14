
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct rxrpc_call {scalar_t__ state; int debug_id; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 struct rxrpc_call* VAR_1 ;
 struct rxrpc_call* FUNC_1 (int ,struct timer_list*,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct rxrpc_call*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct rxrpc_call*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_5)
{
 struct rxrpc_call *VAR_6 = FUNC_1(VAR_6, VAR_5, VAR_4);

 FUNC_0("%d", VAR_6->debug_id);

 if (VAR_6->state < VAR_0) {
  FUNC_3(VAR_6, VAR_3, VAR_2);
  FUNC_2(VAR_6);
 }
}
