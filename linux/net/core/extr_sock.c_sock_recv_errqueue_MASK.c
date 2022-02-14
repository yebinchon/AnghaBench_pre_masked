
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_exterr_skb {int ee; } ;
struct sock {int dummy; } ;
struct sk_buff {int len; } ;
struct msghdr {int msg_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sock_exterr_skb* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct msghdr*,int,int,int,int *) ;
 int FUNC_3 (struct sk_buff*,int ,struct msghdr*,int) ;
 struct sk_buff* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct msghdr*,struct sock*,struct sk_buff*) ;

int FUNC_6(struct sock *VAR_3, struct msghdr *VAR_4, int VAR_5,
         int VAR_6, int VAR_7)
{
 struct sock_exterr_skb *VAR_8;
 struct sk_buff *VAR_9;
 int VAR_10, VAR_11;

 VAR_11 = -VAR_0;
 VAR_9 = FUNC_4(VAR_3);
 if (VAR_9 == ((void*)0))
  goto out;

 VAR_10 = VAR_9->len;
 if (VAR_10 > VAR_5) {
  VAR_4->msg_flags |= VAR_2;
  VAR_10 = VAR_5;
 }
 VAR_11 = FUNC_3(VAR_9, 0, VAR_4, VAR_10);
 if (VAR_11)
  goto out_free_skb;

 FUNC_5(VAR_4, VAR_3, VAR_9);

 VAR_8 = FUNC_0(VAR_9);
 FUNC_2(VAR_4, VAR_6, VAR_7, sizeof(VAR_8->ee), &VAR_8->ee);

 VAR_4->msg_flags |= VAR_1;
 VAR_11 = VAR_10;

out_free_skb:
 FUNC_1(VAR_9);
out:
 return VAR_11;
}
