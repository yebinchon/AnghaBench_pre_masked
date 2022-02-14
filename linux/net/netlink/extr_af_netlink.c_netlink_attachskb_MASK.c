
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_rcvbuf; int sk_rmem_alloc; } ;
struct sk_buff {int dummy; } ;
struct netlink_sock {int wait; int state; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_5 ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sk_buff*,struct sock*) ;
 struct netlink_sock* FUNC_8 (struct sock*) ;
 int FUNC_9 (int *,int *) ;
 long FUNC_10 (long) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (struct sock*,int ) ;
 int FUNC_13 (long) ;
 int FUNC_14 (struct sock*) ;
 scalar_t__ FUNC_15 (int ,int *) ;
 int VAR_6 ;

int FUNC_16(struct sock *VAR_7, struct sk_buff *VAR_8,
        long *VAR_9, struct sock *VAR_10)
{
 struct netlink_sock *VAR_11;

 VAR_11 = FUNC_8(VAR_7);

 if ((FUNC_3(&VAR_7->sk_rmem_alloc) > VAR_7->sk_rcvbuf ||
      FUNC_15(VAR_1, &VAR_11->state))) {
  FUNC_0(VAR_6, VAR_5);
  if (!*VAR_9) {
   if (!VAR_10 || FUNC_5(VAR_10))
    FUNC_6(VAR_7);
   FUNC_14(VAR_7);
   FUNC_4(VAR_8);
   return -VAR_0;
  }

  FUNC_1(VAR_3);
  FUNC_2(&VAR_11->wait, &VAR_6);

  if ((FUNC_3(&VAR_7->sk_rmem_alloc) > VAR_7->sk_rcvbuf ||
       FUNC_15(VAR_1, &VAR_11->state)) &&
      !FUNC_12(VAR_7, VAR_2))
   *VAR_9 = FUNC_10(*VAR_9);

  FUNC_1(VAR_4);
  FUNC_9(&VAR_11->wait, &VAR_6);
  FUNC_14(VAR_7);

  if (FUNC_11(VAR_5)) {
   FUNC_4(VAR_8);
   return FUNC_13(*VAR_9);
  }
  return 1;
 }
 FUNC_7(VAR_8, VAR_7);
 return 0;
}
