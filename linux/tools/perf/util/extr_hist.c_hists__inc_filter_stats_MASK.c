
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int total_non_filtered_period; } ;
struct hists {TYPE_1__ stats; int nr_non_filtered_entries; } ;
struct TYPE_4__ {scalar_t__ period; } ;
struct hist_entry {TYPE_2__ stat; } ;



__attribute__((used)) static void FUNC_0(struct hists *VAR_0, struct hist_entry *VAR_1)
{
 VAR_0->nr_non_filtered_entries++;
 VAR_0->stats.total_non_filtered_period += VAR_1->stat.period;
}
