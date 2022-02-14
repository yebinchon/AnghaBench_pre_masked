
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_wmem_alloc; } ;
struct sk_buff {int truesize; int destructor; struct sock* sk; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,struct sock*) ;
 int VAR_0 ;
 int FUNC_4 (struct sock*) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int) ;

void FUNC_6(struct sk_buff *VAR_2, struct sock *VAR_3)
{
 FUNC_2(VAR_2);
 VAR_2->sk = VAR_3;







 VAR_2->destructor = VAR_1;
 FUNC_3(VAR_2, VAR_3);





 FUNC_0(VAR_2->truesize, &VAR_3->sk_wmem_alloc);
}
