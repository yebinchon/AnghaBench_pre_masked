
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_state; } ;
struct sk_buff {int dummy; } ;
struct pep_sock {int tx_credits; scalar_t__ aligned; } ;
struct msghdr {int msg_flags; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int VAR_16 ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (int ,struct msghdr*,size_t) ;
 struct pep_sock* FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*,struct sk_buff*) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (struct sock*) ;
 int FUNC_13 (struct sock*,long*) ;
 int FUNC_14 (struct sock*,long*,int,int *) ;
 int FUNC_15 (struct sk_buff*,size_t) ;
 int FUNC_16 (struct sk_buff*,scalar_t__) ;
 struct sk_buff* FUNC_17 (struct sock*,scalar_t__,int,int*) ;
 int FUNC_18 (long) ;
 long FUNC_19 (struct sock*,int) ;
 int VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static int FUNC_20(struct sock *VAR_19, struct msghdr *VAR_20, size_t VAR_21)
{
 struct pep_sock *VAR_22 = FUNC_7(VAR_19);
 struct sk_buff *VAR_23;
 long VAR_24;
 int VAR_25 = VAR_20->msg_flags;
 int VAR_26, VAR_27;

 if (VAR_21 > VAR_15)
  return -VAR_2;

 if ((VAR_20->msg_flags & ~(VAR_8|VAR_9|VAR_10|
    VAR_7)) ||
   !(VAR_20->msg_flags & VAR_9))
  return -VAR_4;

 VAR_23 = FUNC_17(VAR_19, VAR_6 + VAR_21,
     VAR_25 & VAR_8, &VAR_26);
 if (!VAR_23)
  return VAR_26;

 FUNC_16(VAR_23, VAR_5 + 3 + VAR_22->aligned);
 VAR_26 = FUNC_6(FUNC_15(VAR_23, VAR_21), VAR_20, VAR_21);
 if (VAR_26 < 0)
  goto outfree;

 FUNC_5(VAR_19);
 VAR_24 = FUNC_19(VAR_19, VAR_25 & VAR_8);
 if ((1 << VAR_19->sk_state) & (VAR_12|VAR_11)) {
  VAR_26 = -VAR_3;
  goto out;
 }
 if (VAR_19->sk_state != VAR_14) {

disabled:
  VAR_26 = FUNC_13(VAR_19, &VAR_24);
  if (VAR_26)
   goto out;

  if (VAR_19->sk_state == VAR_13) {
   VAR_26 = -VAR_1;
   goto out;
  }
 }
 FUNC_0(VAR_19->sk_state != VAR_14);


 VAR_27 = FUNC_3(&VAR_22->tx_credits);
 while (!VAR_27) {
  FUNC_1(VAR_17, VAR_18);

  if (!VAR_24) {
   VAR_26 = -VAR_0;
   goto out;
  }
  if (FUNC_11(VAR_16)) {
   VAR_26 = FUNC_18(VAR_24);
   goto out;
  }

  FUNC_2(FUNC_12(VAR_19), &VAR_17);
  VAR_27 = FUNC_14(VAR_19, &VAR_24, FUNC_3(&VAR_22->tx_credits), &VAR_17);
  FUNC_10(FUNC_12(VAR_19), &VAR_17);

  if (VAR_19->sk_state != VAR_14)
   goto disabled;
 }

 VAR_26 = FUNC_8(VAR_19, VAR_23);
 if (VAR_26 >= 0)
  VAR_26 = VAR_21;
 VAR_23 = ((void*)0);
out:
 FUNC_9(VAR_19);
outfree:
 FUNC_4(VAR_23);
 return VAR_26;
}
