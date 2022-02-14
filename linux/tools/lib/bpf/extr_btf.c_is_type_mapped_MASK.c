
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct btf_dedup {scalar_t__* map; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct btf_dedup *VAR_1, uint32_t VAR_2)
{
 return VAR_1->map[VAR_2] <= VAR_0;
}
