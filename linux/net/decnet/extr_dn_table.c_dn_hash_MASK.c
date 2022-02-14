
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct dn_zone {int dz_order; } ;
struct TYPE_3__ {int datum; } ;
typedef TYPE_1__ dn_fib_key_t ;
typedef int dn_fib_idx_t ;


 int FUNC_0 (struct dn_zone*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline dn_fib_idx_t FUNC_2(dn_fib_key_t VAR_0, struct dn_zone *VAR_1)
{
 u16 VAR_2 = FUNC_1(VAR_0.datum)>>(16 - VAR_1->dz_order);
 VAR_2 ^= (VAR_2 >> 10);
 VAR_2 ^= (VAR_2 >> 6);
 VAR_2 &= FUNC_0(VAR_1);
 return *(dn_fib_idx_t *)&VAR_2;
}
