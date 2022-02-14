
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int computed; int wdiff; } ;
struct TYPE_3__ {int period; } ;
struct hist_entry {TYPE_2__ diff; TYPE_1__ stat; } ;
typedef int s64 ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static s64 FUNC_0(struct hist_entry *VAR_2, struct hist_entry *VAR_3)
{
 u64 VAR_4 = VAR_2->stat.period;
 u64 VAR_5 = VAR_3->stat.period;

 VAR_3->diff.computed = 1;
 VAR_3->diff.wdiff = VAR_5 * VAR_1 -
      VAR_4 * VAR_0;

 return VAR_3->diff.wdiff;
}
