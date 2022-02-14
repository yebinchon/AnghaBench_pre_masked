
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int in6; } ;
struct hash_netiface6_elem {scalar_t__ cidr; scalar_t__ physdev; int iface; TYPE_1__ ip; } ;


 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static inline bool
FUNC_2(const struct hash_netiface6_elem *VAR_0,
     const struct hash_netiface6_elem *VAR_1,
     u32 *VAR_2)
{
 return FUNC_0(&VAR_0->ip.in6, &VAR_1->ip.in6) &&
        VAR_0->cidr == VAR_1->cidr &&
        (++*VAR_2) &&
        VAR_0->physdev == VAR_1->physdev &&
        FUNC_1(VAR_0->iface, VAR_1->iface) == 0;
}
