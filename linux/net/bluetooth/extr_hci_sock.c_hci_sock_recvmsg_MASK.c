
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {scalar_t__ sk_state; } ;
struct sk_buff {unsigned int len; } ;
struct msghdr {int msg_flags; } ;
struct TYPE_2__ {int channel; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,struct socket*,struct sock*) ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,struct msghdr*,struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int ,struct msghdr*,int) ;
 int FUNC_5 (struct sock*,struct sk_buff*) ;
 struct sk_buff* FUNC_6 (struct sock*,int,int,int*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct msghdr*,struct sock*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_9(struct socket *VAR_6, struct msghdr *VAR_7,
       size_t VAR_8, int VAR_9)
{
 int VAR_10 = VAR_9 & VAR_3;
 struct sock *VAR_11 = VAR_6->sk;
 struct sk_buff *VAR_12;
 int VAR_13, VAR_14;
 unsigned int VAR_15;

 FUNC_0("sock %p, sk %p", VAR_6, VAR_11);

 if (VAR_9 & VAR_4)
  return -VAR_1;

 if (FUNC_2(VAR_11)->channel == VAR_2)
  return -VAR_1;

 if (VAR_11->sk_state == VAR_0)
  return 0;

 VAR_12 = FUNC_6(VAR_11, VAR_9, VAR_10, &VAR_14);
 if (!VAR_12)
  return VAR_14;

 VAR_15 = VAR_12->len;
 VAR_13 = VAR_12->len;
 if (VAR_8 < VAR_13) {
  VAR_7->msg_flags |= VAR_5;
  VAR_13 = VAR_8;
 }

 FUNC_7(VAR_12);
 VAR_14 = FUNC_4(VAR_12, 0, VAR_7, VAR_13);

 switch (FUNC_2(VAR_11)->channel) {
 case 129:
  FUNC_3(VAR_11, VAR_7, VAR_12);
  break;
 case 128:
 case 130:
  FUNC_8(VAR_7, VAR_11, VAR_12);
  break;
 default:
  if (FUNC_1(FUNC_2(VAR_11)->channel))
   FUNC_8(VAR_7, VAR_11, VAR_12);
  break;
 }

 FUNC_5(VAR_11, VAR_12);

 if (VAR_9 & VAR_5)
  VAR_13 = VAR_15;

 return VAR_14 ? : VAR_13;
}
