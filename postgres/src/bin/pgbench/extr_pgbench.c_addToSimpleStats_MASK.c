
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ count; double min; double max; double sum; double sum2; } ;
typedef TYPE_1__ SimpleStats ;



__attribute__((used)) static void
FUNC_0(SimpleStats *VAR_0, double VAR_1)
{
 if (VAR_0->count == 0 || VAR_1 < VAR_0->min)
  VAR_0->min = VAR_1;
 if (VAR_0->count == 0 || VAR_1 > VAR_0->max)
  VAR_0->max = VAR_1;
 VAR_0->count++;
 VAR_0->sum += VAR_1;
 VAR_0->sum2 += VAR_1 * VAR_1;
}
