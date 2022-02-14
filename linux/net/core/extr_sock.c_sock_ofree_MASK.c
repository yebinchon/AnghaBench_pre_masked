
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_omem_alloc; } ;
struct sk_buff {int truesize; struct sock* sk; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct sk_buff *VAR_0)
{
 struct sock *VAR_1 = VAR_0->sk;

 FUNC_0(VAR_0->truesize, &VAR_1->sk_omem_alloc);
}
