
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_receive_queue; } ;
struct netlink_sock {int wait; int state; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 struct netlink_sock* FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_1)
{
 struct netlink_sock *VAR_2 = FUNC_1(VAR_1);

 if (FUNC_2(&VAR_1->sk_receive_queue))
  FUNC_0(VAR_0, &VAR_2->state);
 if (!FUNC_3(VAR_0, &VAR_2->state))
  FUNC_4(&VAR_2->wait);
}
