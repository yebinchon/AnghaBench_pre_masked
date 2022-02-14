
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_allocation; } ;
struct page_frag {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (unsigned int,struct page_frag*,int ) ;

bool FUNC_4(struct sock *VAR_0, struct page_frag *VAR_1)
{
 if (FUNC_0(FUNC_3(32U, VAR_1, VAR_0->sk_allocation)))
  return 1;

 FUNC_1(VAR_0);
 FUNC_2(VAR_0);
 return 0;
}
