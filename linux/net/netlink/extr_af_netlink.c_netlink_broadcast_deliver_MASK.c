
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_rcvbuf; int sk_rmem_alloc; } ;
struct sk_buff {int dummy; } ;
struct netlink_sock {int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*,struct sk_buff*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sk_buff*,struct sock*) ;
 struct netlink_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct sock *VAR_1, struct sk_buff *VAR_2)
{
 struct netlink_sock *VAR_3 = FUNC_3(VAR_1);

 if (FUNC_1(&VAR_1->sk_rmem_alloc) <= VAR_1->sk_rcvbuf &&
     !FUNC_4(VAR_0, &VAR_3->state)) {
  FUNC_2(VAR_2, VAR_1);
  FUNC_0(VAR_1, VAR_2);
  return FUNC_1(&VAR_1->sk_rmem_alloc) > (VAR_1->sk_rcvbuf >> 1);
 }
 return -1;
}
