
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_forward_alloc; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*,int,int,int) ;
 int FUNC_1 (int) ;

int FUNC_2(struct sock *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4, VAR_5 = FUNC_1(VAR_2);

 VAR_1->sk_forward_alloc += VAR_5 << VAR_0;
 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_5, VAR_3);
 if (!VAR_4)
  VAR_1->sk_forward_alloc -= VAR_5 << VAR_0;
 return VAR_4;
}
