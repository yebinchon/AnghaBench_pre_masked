
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sockaddr_can {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {size_t len; int cb; int data; } ;
struct msghdr {int msg_namelen; int msg_flags; scalar_t__ msg_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (struct msghdr*,int ,size_t) ;
 int * FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sock*,struct sk_buff*) ;
 struct sk_buff* FUNC_5 (struct sock*,int,int,int*) ;
 int FUNC_6 (struct msghdr*,struct sock*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_7(struct socket *VAR_2, struct msghdr *VAR_3, size_t VAR_4,
         int VAR_5)
{
 struct sock *VAR_6 = VAR_2->sk;
 struct sk_buff *VAR_7;
 int VAR_8 = 0;
 int VAR_9;

 VAR_9 = VAR_5 & VAR_0;
 VAR_5 &= ~VAR_0;

 VAR_7 = FUNC_5(VAR_6, VAR_5, VAR_9, &VAR_8);
 if (!VAR_7)
  return VAR_8;

 if (VAR_4 < VAR_7->len)
  VAR_3->msg_flags |= VAR_1;
 else
  VAR_4 = VAR_7->len;

 VAR_8 = FUNC_2(VAR_3, VAR_7->data, VAR_4);
 if (VAR_8 < 0) {
  FUNC_4(VAR_6, VAR_7);
  return VAR_8;
 }

 FUNC_6(VAR_3, VAR_6, VAR_7);

 if (VAR_3->msg_name) {
  FUNC_0(sizeof(struct sockaddr_can));
  VAR_3->msg_namelen = sizeof(struct sockaddr_can);
  FUNC_1(VAR_3->msg_name, VAR_7->cb, VAR_3->msg_namelen);
 }


 VAR_3->msg_flags |= *(FUNC_3(VAR_7));

 FUNC_4(VAR_6, VAR_7);

 return VAR_4;
}
