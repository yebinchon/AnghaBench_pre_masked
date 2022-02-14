
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct rose_sock {unsigned short va; unsigned short vs; } ;


 unsigned short VAR_0 ;
 struct rose_sock* FUNC_0 (struct sock*) ;

int FUNC_1(struct sock *VAR_1, unsigned short VAR_2)
{
 struct rose_sock *VAR_3 = FUNC_0(VAR_1);
 unsigned short VAR_4 = VAR_3->va;

 while (VAR_4 != VAR_3->vs) {
  if (VAR_2 == VAR_4) return 1;
  VAR_4 = (VAR_4 + 1) % VAR_0;
 }

 return VAR_2 == VAR_3->vs;
}
