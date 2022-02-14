
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fib6_nh_age_excptn_arg {unsigned long now; struct fib6_gc_args* gc_args; } ;
struct fib6_info {int fib6_nh; scalar_t__ nh; } ;
struct fib6_gc_args {int dummy; } ;


 int FUNC_0 (int ,struct fib6_gc_args*,unsigned long) ;
 int FUNC_1 (scalar_t__,int ,struct fib6_nh_age_excptn_arg*) ;
 int VAR_0 ;

void FUNC_2(struct fib6_info *VAR_1,
   struct fib6_gc_args *VAR_2,
   unsigned long VAR_3)
{
 if (VAR_1->nh) {
  struct fib6_nh_age_excptn_arg VAR_4 = {
   .gc_args = VAR_2,
   .now = VAR_3
  };

  FUNC_1(VAR_1->nh, VAR_0,
      &VAR_4);
 } else {
  FUNC_0(VAR_1->fib6_nh, VAR_2, VAR_3);
 }
}
