
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int dummy; } ;
struct sk_buff {int len; } ;
struct msghdr {int msg_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct socket*,struct sock*,size_t,int) ;
 int FUNC_1 (struct sk_buff*,int ,struct msghdr*,int) ;
 int FUNC_2 (struct sock*,struct sk_buff*) ;
 struct sk_buff* FUNC_3 (struct sock*,int,int,int*) ;

__attribute__((used)) static int FUNC_4(struct socket *VAR_2, struct msghdr *VAR_3, size_t VAR_4,
      int VAR_5)
{
 int VAR_6 = VAR_5 & VAR_0;
 struct sock *VAR_7 = VAR_2->sk;
 struct sk_buff *VAR_8;
 int VAR_9;
 int VAR_10;

 FUNC_0("sock=%p sk=%p len=%zu flags=%d\n", VAR_2, VAR_7, VAR_4, VAR_5);

 VAR_8 = FUNC_3(VAR_7, VAR_5, VAR_6, &VAR_10);
 if (!VAR_8)
  return VAR_10;

 VAR_9 = VAR_8->len;
 if (VAR_4 < VAR_9) {
  VAR_3->msg_flags |= VAR_1;
  VAR_9 = VAR_4;
 }

 VAR_10 = FUNC_1(VAR_8, 0, VAR_3, VAR_9);

 FUNC_2(VAR_7, VAR_8);

 return VAR_10 ? : VAR_9;
}
