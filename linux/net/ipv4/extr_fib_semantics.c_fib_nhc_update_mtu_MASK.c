
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct fnhe_hash_bucket {int chain; } ;
struct fib_nh_exception {int fnhe_mtu_locked; scalar_t__ fnhe_pmtu; int fnhe_next; } ;
struct fib_nh_common {int nhc_exceptions; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,int) ;

void FUNC_1(struct fib_nh_common *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct fnhe_hash_bucket *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_1->nhc_exceptions, 1);
 if (!VAR_4)
  return;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  struct fib_nh_exception *VAR_6;

  for (VAR_6 = FUNC_0(VAR_4[VAR_5].chain, 1);
       VAR_6;
       VAR_6 = FUNC_0(VAR_6->fnhe_next, 1)) {
   if (VAR_6->fnhe_mtu_locked) {
    if (VAR_2 <= VAR_6->fnhe_pmtu) {
     VAR_6->fnhe_pmtu = VAR_2;
     VAR_6->fnhe_mtu_locked = 0;
    }
   } else if (VAR_2 < VAR_6->fnhe_pmtu ||
       VAR_3 == VAR_6->fnhe_pmtu) {
    VAR_6->fnhe_pmtu = VAR_2;
   }
  }
 }
}
