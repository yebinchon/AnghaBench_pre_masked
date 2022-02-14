
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_forward_alloc; scalar_t__ sk_memcg; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sock*,int) ;

void FUNC_3(struct sock *VAR_2, int VAR_3)
{
 int VAR_4;

 if (VAR_3 <= VAR_2->sk_forward_alloc)
  return;
 VAR_4 = FUNC_1(VAR_3);
 VAR_2->sk_forward_alloc += VAR_4 * VAR_0;
 FUNC_2(VAR_2, VAR_4);

 if (VAR_1 && VAR_2->sk_memcg)
  FUNC_0(VAR_2->sk_memcg, VAR_4);
}
