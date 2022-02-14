
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fib6_table {int dummy; } ;
struct fib6_nh_pcpu_arg {struct fib6_table const* table; struct fib6_info* from; } ;
struct fib6_nh {int dummy; } ;
struct fib6_info {int fib6_destroying; struct fib6_nh* fib6_nh; scalar_t__ nh; } ;


 int FUNC_0 (struct fib6_nh*,struct fib6_info*,struct fib6_table const*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__,int ,struct fib6_nh_pcpu_arg*) ;

__attribute__((used)) static void FUNC_3(struct fib6_info *VAR_1,
    const struct fib6_table *VAR_2)
{



 VAR_1->fib6_destroying = 1;
 FUNC_1();

 if (VAR_1->nh) {
  struct fib6_nh_pcpu_arg VAR_3 = {
   .from = VAR_1,
   .table = VAR_2
  };

  FUNC_2(VAR_1->nh, VAR_0,
      &VAR_3);
 } else {
  struct fib6_nh *VAR_4;

  VAR_4 = VAR_1->fib6_nh;
  FUNC_0(VAR_4, VAR_1, VAR_2);
 }
}
