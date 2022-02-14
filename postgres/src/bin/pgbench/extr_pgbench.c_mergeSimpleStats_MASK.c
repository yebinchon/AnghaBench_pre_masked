
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ count; scalar_t__ min; scalar_t__ max; scalar_t__ sum2; scalar_t__ sum; } ;
typedef TYPE_1__ SimpleStats ;



__attribute__((used)) static void
FUNC_0(SimpleStats *VAR_0, SimpleStats *VAR_1)
{
 if (VAR_0->count == 0 || VAR_1->min < VAR_0->min)
  VAR_0->min = VAR_1->min;
 if (VAR_0->count == 0 || VAR_1->max > VAR_0->max)
  VAR_0->max = VAR_1->max;
 VAR_0->count += VAR_1->count;
 VAR_0->sum += VAR_1->sum;
 VAR_0->sum2 += VAR_1->sum2;
}
