
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef double u64 ;
struct TYPE_4__ {double period; } ;
struct hist_entry {TYPE_2__* stat_acc; int hists; TYPE_1__ stat; } ;
struct TYPE_6__ {scalar_t__ cumulate_callchain; } ;
struct TYPE_5__ {double period; } ;


 double FUNC_0 (int ) ;
 TYPE_3__ VAR_0 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline float FUNC_2(struct hist_entry *VAR_1)
{
 u64 VAR_2 = VAR_1->stat.period;
 u64 VAR_3 = FUNC_0(VAR_1->hists);

 if (FUNC_1(VAR_3 == 0))
  return 0;

 if (VAR_0.cumulate_callchain)
  VAR_2 = VAR_1->stat_acc->period;

 return VAR_2 * 100.0 / VAR_3;
}
