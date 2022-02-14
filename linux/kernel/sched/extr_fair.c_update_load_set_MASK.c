
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct load_weight {unsigned long weight; scalar_t__ inv_weight; } ;



__attribute__((used)) static inline void FUNC_0(struct load_weight *VAR_0, unsigned long VAR_1)
{
 VAR_0->weight = VAR_1;
 VAR_0->inv_weight = 0;
}
