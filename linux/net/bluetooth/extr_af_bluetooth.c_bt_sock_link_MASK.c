
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct bt_sock_list {int lock; int head; } ;


 int FUNC_0 (struct sock*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct bt_sock_list *VAR_0, struct sock *VAR_1)
{
 FUNC_1(&VAR_0->lock);
 FUNC_0(VAR_1, &VAR_0->head);
 FUNC_2(&VAR_0->lock);
}
