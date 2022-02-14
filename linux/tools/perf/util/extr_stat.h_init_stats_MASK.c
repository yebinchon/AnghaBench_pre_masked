
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct stats {double n; double mean; double M2; scalar_t__ max; scalar_t__ min; } ;



__attribute__((used)) static inline void FUNC_0(struct stats *VAR_0)
{
 VAR_0->n = 0.0;
 VAR_0->mean = 0.0;
 VAR_0->M2 = 0.0;
 VAR_0->min = (u64) -1;
 VAR_0->max = 0;
}
