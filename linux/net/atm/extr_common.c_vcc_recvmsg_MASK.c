
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {scalar_t__ state; struct sock* sk; } ;
struct sock {int sk_rmem_alloc; } ;
struct sk_buff {int len; int truesize; } ;
struct msghdr {int msg_flags; } ;
struct atm_vcc {int flags; } ;


 struct atm_vcc* FUNC_0 (struct socket*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (struct atm_vcc*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (struct sk_buff*,int ,struct msghdr*,int) ;
 int FUNC_5 (struct sock*,struct sk_buff*) ;
 struct sk_buff* FUNC_6 (struct sock*,int,int,int*) ;
 int FUNC_7 (struct msghdr*,struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_8 (int ,int *) ;

int FUNC_9(struct socket *VAR_10, struct msghdr *VAR_11, size_t VAR_12,
  int VAR_13)
{
 struct sock *VAR_14 = VAR_10->sk;
 struct atm_vcc *VAR_15;
 struct sk_buff *VAR_16;
 int VAR_17, VAR_18 = -VAR_3;

 if (VAR_10->state != VAR_9)
  return -VAR_4;


 if (VAR_13 & ~(VAR_6 | VAR_7))
  return -VAR_5;

 VAR_15 = FUNC_0(VAR_10);
 if (FUNC_8(VAR_2, &VAR_15->flags) ||
     FUNC_8(VAR_0, &VAR_15->flags) ||
     !FUNC_8(VAR_1, &VAR_15->flags))
  return 0;

 VAR_16 = FUNC_6(VAR_14, VAR_13, VAR_13 & VAR_6, &VAR_18);
 if (!VAR_16)
  return VAR_18;

 VAR_17 = VAR_16->len;
 if (VAR_17 > VAR_12) {
  VAR_17 = VAR_12;
  VAR_11->msg_flags |= VAR_8;
 }

 VAR_18 = FUNC_4(VAR_16, 0, VAR_11, VAR_17);
 if (VAR_18)
  return VAR_18;
 FUNC_7(VAR_11, VAR_14, VAR_16);

 if (!(VAR_13 & VAR_7)) {
  FUNC_3("%d -= %d\n", FUNC_2(&VAR_14->sk_rmem_alloc),
    VAR_16->truesize);
  FUNC_1(VAR_15, VAR_16->truesize);
 }

 FUNC_5(VAR_14, VAR_16);
 return VAR_17;
}
