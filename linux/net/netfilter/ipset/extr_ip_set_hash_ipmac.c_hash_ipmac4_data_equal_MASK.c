
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hash_ipmac4_elem {scalar_t__ ip; int ether; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static inline bool
FUNC_1(const struct hash_ipmac4_elem *VAR_0,
         const struct hash_ipmac4_elem *VAR_1,
         u32 *VAR_2)
{
 return VAR_0->ip == VAR_1->ip && FUNC_0(VAR_0->ether, VAR_1->ether);
}
