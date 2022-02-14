
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_rmem_alloc; } ;
struct sk_buff {int truesize; int destructor; struct sock* sk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;
 int FUNC_2 (struct sock*,int ) ;

__attribute__((used)) static void FUNC_3(struct sk_buff *VAR_1, struct sock *VAR_2)
{
 FUNC_0(VAR_1->sk != ((void*)0));
 VAR_1->sk = VAR_2;
 VAR_1->destructor = VAR_0;
 FUNC_1(VAR_1->truesize, &VAR_2->sk_rmem_alloc);
 FUNC_2(VAR_2, VAR_1->truesize);
}
