
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {int sk_shutdown; } ;
struct sk_buff {size_t len; } ;
struct msghdr {int msg_flags; int msg_namelen; int msg_name; } ;
struct TYPE_2__ {int (* skb_msg_name ) (struct sk_buff*,int ,int *) ;} ;


 int FUNC_0 (char*,struct socket*,struct sock*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sk_buff*,int ,struct msghdr*,size_t) ;
 int FUNC_3 (struct sock*,struct sk_buff*) ;
 struct sk_buff* FUNC_4 (struct sock*,int,int,int*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct msghdr*,struct sock*,struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int ,int *) ;

int FUNC_8(struct socket *VAR_5, struct msghdr *VAR_6, size_t VAR_7,
      int VAR_8)
{
 int VAR_9 = VAR_8 & VAR_1;
 struct sock *VAR_10 = VAR_5->sk;
 struct sk_buff *VAR_11;
 size_t VAR_12;
 size_t VAR_13;
 int VAR_14;

 FUNC_0("sock %p sk %p len %zu", VAR_5, VAR_10, VAR_7);

 if (VAR_8 & VAR_2)
  return -VAR_0;

 VAR_11 = FUNC_4(VAR_10, VAR_8, VAR_9, &VAR_14);
 if (!VAR_11) {
  if (VAR_10->sk_shutdown & VAR_4)
   return 0;

  return VAR_14;
 }

 VAR_13 = VAR_11->len;
 VAR_12 = VAR_11->len;
 if (VAR_7 < VAR_12) {
  VAR_6->msg_flags |= VAR_3;
  VAR_12 = VAR_7;
 }

 FUNC_5(VAR_11);
 VAR_14 = FUNC_2(VAR_11, 0, VAR_6, VAR_12);
 if (VAR_14 == 0) {
  FUNC_6(VAR_6, VAR_10, VAR_11);

  if (VAR_6->msg_name && FUNC_1(VAR_10)->skb_msg_name)
   FUNC_1(VAR_10)->skb_msg_name(VAR_11, VAR_6->msg_name,
      &VAR_6->msg_namelen);
 }

 FUNC_3(VAR_10, VAR_11);

 if (VAR_8 & VAR_3)
  VAR_12 = VAR_13;

 return VAR_14 ? : VAR_12;
}
