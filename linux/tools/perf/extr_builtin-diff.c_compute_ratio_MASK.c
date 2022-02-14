
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int computed; double period_ratio; } ;
struct TYPE_3__ {double period; } ;
struct hist_entry {TYPE_2__ diff; TYPE_1__ stat; } ;



__attribute__((used)) static double FUNC_0(struct hist_entry *VAR_0, struct hist_entry *VAR_1)
{
 double VAR_2 = VAR_0->stat.period ?: 1;
 double VAR_3 = VAR_1->stat.period;

 VAR_1->diff.computed = 1;
 VAR_1->diff.period_ratio = VAR_3 / VAR_2;
 return VAR_1->diff.period_ratio;
}
