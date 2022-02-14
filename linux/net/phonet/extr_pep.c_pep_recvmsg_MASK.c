
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_state; } ;
struct sk_buff {size_t len; } ;
struct pep_sock {int ctrlreq_queue; } ;
struct msghdr {int msg_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*,struct sk_buff*,int ,int ) ;
 struct pep_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,int ) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sk_buff*,int ,struct msghdr*,size_t) ;
 struct sk_buff* FUNC_6 (int *) ;
 int FUNC_7 (struct sock*,struct sk_buff*) ;
 struct sk_buff* FUNC_8 (struct sock*,int,int,int*) ;
 scalar_t__ FUNC_9 (struct sock*,int ) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct sock *VAR_19, struct msghdr *VAR_20, size_t VAR_21,
         int VAR_22, int VAR_23, int *VAR_24)
{
 struct sk_buff *VAR_25;
 int VAR_26;

 if (VAR_23 & ~(VAR_9|VAR_10|VAR_11|VAR_6|VAR_12|
   VAR_8|VAR_5))
  return -VAR_3;

 if (FUNC_10(1 << VAR_19->sk_state & (VAR_16 | VAR_15)))
  return -VAR_2;

 if ((VAR_23 & VAR_9) || FUNC_9(VAR_19, VAR_14)) {

  struct pep_sock *VAR_27 = FUNC_2(VAR_19);

  if (VAR_23 & VAR_10)
   return -VAR_3;
  VAR_25 = FUNC_6(&VAR_27->ctrlreq_queue);
  if (VAR_25) {
   FUNC_1(VAR_19, VAR_25, VAR_13,
      VAR_4);
   VAR_20->msg_flags |= VAR_9;
   goto copy;
  }
  if (VAR_23 & VAR_9)
   return -VAR_1;
 }

 VAR_25 = FUNC_8(VAR_19, VAR_23, VAR_22, &VAR_26);
 FUNC_0(VAR_19);
 if (VAR_25 == ((void*)0)) {
  if (VAR_26 == -VAR_2 && VAR_19->sk_state == VAR_17)
   VAR_26 = -VAR_0;
  FUNC_4(VAR_19);
  return VAR_26;
 }

 if (VAR_19->sk_state == VAR_18)
  FUNC_3(VAR_19, VAR_4);
 FUNC_4(VAR_19);
copy:
 VAR_20->msg_flags |= VAR_7;
 if (VAR_25->len > VAR_21)
  VAR_20->msg_flags |= VAR_11;
 else
  VAR_21 = VAR_25->len;

 VAR_26 = FUNC_5(VAR_25, 0, VAR_20, VAR_21);
 if (!VAR_26)
  VAR_26 = (VAR_23 & VAR_11) ? VAR_25->len : VAR_21;

 FUNC_7(VAR_19, VAR_25);
 return VAR_26;
}
