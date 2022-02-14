
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sockaddr_can {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {size_t len; int cb; int data; } ;
struct msghdr {int msg_namelen; scalar_t__ msg_name; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (struct msghdr*,int ,size_t) ;
 int FUNC_3 (struct sock*,struct sk_buff*) ;
 struct sk_buff* FUNC_4 (struct sock*,int,int,int*) ;
 int FUNC_5 (struct msghdr*,struct sock*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_6(struct socket *VAR_1, struct msghdr *VAR_2, size_t VAR_3,
         int VAR_4)
{
 struct sock *VAR_5 = VAR_1->sk;
 struct sk_buff *VAR_6;
 int VAR_7 = 0;
 int VAR_8;
 int VAR_9;

 VAR_8 = VAR_4 & VAR_0;
 VAR_4 &= ~VAR_0;
 VAR_6 = FUNC_4(VAR_5, VAR_4, VAR_8, &VAR_7);
 if (!VAR_6)
  return VAR_7;

 if (VAR_6->len < VAR_3)
  VAR_3 = VAR_6->len;

 VAR_9 = FUNC_2(VAR_2, VAR_6->data, VAR_3);
 if (VAR_9 < 0) {
  FUNC_3(VAR_5, VAR_6);
  return VAR_9;
 }

 FUNC_5(VAR_2, VAR_5, VAR_6);

 if (VAR_2->msg_name) {
  FUNC_0(sizeof(struct sockaddr_can));
  VAR_2->msg_namelen = sizeof(struct sockaddr_can);
  FUNC_1(VAR_2->msg_name, VAR_6->cb, VAR_2->msg_namelen);
 }

 FUNC_3(VAR_5, VAR_6);

 return VAR_3;
}
