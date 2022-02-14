
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fnhe_hash_bucket {int fnhe_rth_output; int fnhe_rth_input; int fnhe_next; int chain; } ;
struct fib_nh_exception {int fnhe_rth_output; int fnhe_rth_input; int fnhe_next; int chain; } ;
struct fib_nh_common {int nhc_exceptions; } ;


 int VAR_0 ;
 int FUNC_0 (struct fnhe_hash_bucket*) ;
 struct fnhe_hash_bucket* FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct fib_nh_common *VAR_1)
{
 struct fnhe_hash_bucket *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_1(VAR_1->nhc_exceptions, 1);
 if (!VAR_2)
  return;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct fib_nh_exception *VAR_4;

  VAR_4 = FUNC_1(VAR_2[VAR_3].chain, 1);
  while (VAR_4) {
   struct fib_nh_exception *VAR_5;

   VAR_5 = FUNC_1(VAR_4->fnhe_next, 1);

   FUNC_2(&VAR_4->fnhe_rth_input);
   FUNC_2(&VAR_4->fnhe_rth_output);

   FUNC_0(VAR_4);

   VAR_4 = VAR_5;
  }
 }
 FUNC_0(VAR_2);
}
