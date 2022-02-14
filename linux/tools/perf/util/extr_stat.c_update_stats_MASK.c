
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double u64 ;
struct stats {double n; double mean; double M2; double max; double min; } ;



void FUNC_0(struct stats *VAR_0, u64 VAR_1)
{
 double VAR_2;

 VAR_0->n++;
 VAR_2 = VAR_1 - VAR_0->mean;
 VAR_0->mean += VAR_2 / VAR_0->n;
 VAR_0->M2 += VAR_2*(VAR_1 - VAR_0->mean);

 if (VAR_1 > VAR_0->max)
  VAR_0->max = VAR_1;

 if (VAR_1 < VAR_0->min)
  VAR_0->min = VAR_1;
}
