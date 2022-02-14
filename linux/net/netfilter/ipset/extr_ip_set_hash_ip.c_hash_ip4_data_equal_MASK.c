
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hash_ip4_elem {scalar_t__ ip; } ;



__attribute__((used)) static inline bool
FUNC_0(const struct hash_ip4_elem *VAR_0,
      const struct hash_ip4_elem *VAR_1,
      u32 *VAR_2)
{
 return VAR_0->ip == VAR_1->ip;
}
