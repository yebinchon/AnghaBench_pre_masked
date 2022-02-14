
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_2__ {struct TYPE_2__* prev; struct TYPE_2__* next; } ;
struct rds_sock {TYPE_1__ rs_item; } ;


 int FUNC_0 (int) ;
 struct rds_sock* FUNC_1 (struct sock*) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_0)
{
 struct rds_sock *VAR_1 = FUNC_1(VAR_0);

 FUNC_0((&VAR_1->rs_item != VAR_1->rs_item.next ||
   &VAR_1->rs_item != VAR_1->rs_item.prev));
}
