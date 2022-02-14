
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_allocation; } ;
struct sk_buff {unsigned int len; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct sk_buff* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,unsigned int,int ,int,int ) ;

void FUNC_3(struct sock *VAR_1, unsigned int VAR_2)
{
 struct sk_buff *VAR_3 = FUNC_1(VAR_1);

 FUNC_0(!VAR_3 || VAR_3->len < VAR_2);

 FUNC_2(VAR_1, VAR_2, VAR_0, 1, VAR_1->sk_allocation);
}
