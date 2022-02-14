
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {struct sk_buff* sk_send_head; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 () ;
 struct sk_buff* FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct sk_buff*,struct sock*) ;

__attribute__((used)) static struct sk_buff *FUNC_4(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 FUNC_3(VAR_1, VAR_0);
 FUNC_0(VAR_0->sk_send_head);
 VAR_0->sk_send_head = VAR_1;
 return FUNC_2(VAR_0->sk_send_head, FUNC_1());
}
