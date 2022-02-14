
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int total_period; } ;
struct hists {TYPE_1__ stats; int nr_entries; } ;
struct TYPE_4__ {scalar_t__ period; } ;
struct hist_entry {TYPE_2__ stat; int filtered; } ;


 int FUNC_0 (struct hists*,struct hist_entry*) ;

void FUNC_1(struct hists *VAR_0, struct hist_entry *VAR_1)
{
 if (!VAR_1->filtered)
  FUNC_0(VAR_0, VAR_1);

 VAR_0->nr_entries++;
 VAR_0->stats.total_period += VAR_1->stat.period;
}
