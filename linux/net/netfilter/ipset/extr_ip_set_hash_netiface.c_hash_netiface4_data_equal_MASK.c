
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct hash_netiface4_elem {scalar_t__ ip; scalar_t__ cidr; scalar_t__ physdev; int iface; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static inline bool
FUNC_1(const struct hash_netiface4_elem *VAR_0,
     const struct hash_netiface4_elem *VAR_1,
     u32 *VAR_2)
{
 return VAR_0->ip == VAR_1->ip &&
        VAR_0->cidr == VAR_1->cidr &&
        (++*VAR_2) &&
        VAR_0->physdev == VAR_1->physdev &&
        FUNC_0(VAR_0->iface, VAR_1->iface) == 0;
}
