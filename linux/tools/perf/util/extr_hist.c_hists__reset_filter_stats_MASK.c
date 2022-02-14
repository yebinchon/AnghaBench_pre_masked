
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ total_non_filtered_period; } ;
struct hists {TYPE_1__ stats; scalar_t__ nr_non_filtered_entries; } ;



__attribute__((used)) static void FUNC_0(struct hists *VAR_0)
{
 VAR_0->nr_non_filtered_entries = 0;
 VAR_0->stats.total_non_filtered_period = 0;
}
