
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rxrpc_local {int reject_queue; int usage; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_2 (struct rxrpc_local*) ;
 int FUNC_3 (struct rxrpc_local*) ;
 int VAR_0 ;
 int FUNC_4 (int *,struct sk_buff*) ;

__attribute__((used)) static void FUNC_5(struct rxrpc_local *VAR_1, struct sk_buff *VAR_2)
{
 FUNC_0(&VAR_1->usage);

 if (FUNC_2(VAR_1)) {
  FUNC_4(&VAR_1->reject_queue, VAR_2);
  FUNC_3(VAR_1);
 } else {
  FUNC_1(VAR_2, VAR_0);
 }
}
