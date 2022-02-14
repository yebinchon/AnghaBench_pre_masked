
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct nr_sock {unsigned short vr; unsigned short vl; unsigned short window; } ;


 unsigned short VAR_0 ;
 struct nr_sock* FUNC_0 (struct sock*) ;

int FUNC_1(struct sock *VAR_1, unsigned short VAR_2)
{
 struct nr_sock *VAR_3 = FUNC_0(VAR_1);
 unsigned short VAR_4 = VAR_3->vr;
 unsigned short VAR_5 = (VAR_3->vl + VAR_3->window) % VAR_0;

 while (VAR_4 != VAR_5) {
  if (VAR_2 == VAR_4) return 1;
  VAR_4 = (VAR_4 + 1) % VAR_0;
 }

 return 0;
}
