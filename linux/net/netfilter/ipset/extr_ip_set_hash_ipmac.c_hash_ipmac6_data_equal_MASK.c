
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int in6; } ;
struct hash_ipmac6_elem {int ether; TYPE_1__ ip; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int *,int *) ;

__attribute__((used)) static inline bool
FUNC_2(const struct hash_ipmac6_elem *VAR_0,
         const struct hash_ipmac6_elem *VAR_1,
         u32 *VAR_2)
{
 return FUNC_1(&VAR_0->ip.in6, &VAR_1->ip.in6) &&
  FUNC_0(VAR_0->ether, VAR_1->ether);
}
