
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct ip_set_ext {unsigned long timeout; } ;
struct ip_set {unsigned long timeout; } ;
struct bitmap_ipmac_adt_elem {scalar_t__ add_mac; } ;
struct bitmap_ipmac {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long*,unsigned long) ;

__attribute__((used)) static inline int
FUNC_1(unsigned long *VAR_1,
    const struct bitmap_ipmac_adt_elem *VAR_2,
    const struct ip_set_ext *VAR_3, struct ip_set *VAR_4,
    struct bitmap_ipmac *VAR_5, int VAR_6)
{
 u32 VAR_7 = VAR_3->timeout;

 if (VAR_6 == VAR_0) {
  if (VAR_7 == VAR_4->timeout)

   VAR_7 = *VAR_1;
  FUNC_0(VAR_1, VAR_7);
 } else {





  if (VAR_2->add_mac)
   FUNC_0(VAR_1, VAR_7);
  else
   *VAR_1 = VAR_7;
 }
 return 0;
}
