
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_uid; int sk_mark; int sk_bound_dev_if; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (struct sk_buff*,int ,int ,int ,int ) ;
 int FUNC_1 (struct sock*) ;

void FUNC_2(struct sk_buff *VAR_0, struct sock *VAR_1)
{
 FUNC_0(VAR_0, FUNC_1(VAR_1), VAR_1->sk_bound_dev_if, VAR_1->sk_mark,
       VAR_1->sk_uid);
}
