
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct hist_browser {scalar_t__ nr_callchain_rows; TYPE_1__* hists; scalar_t__ nr_non_filtered_entries; scalar_t__ nr_hierarchy_entries; } ;
struct TYPE_4__ {scalar_t__ report_hierarchy; } ;
struct TYPE_3__ {scalar_t__ nr_entries; } ;


 scalar_t__ FUNC_0 (struct hist_browser*) ;
 scalar_t__ FUNC_1 (struct hist_browser*) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static u32 FUNC_2(struct hist_browser *VAR_1)
{
 u32 VAR_2;

 if (VAR_0.report_hierarchy)
  VAR_2 = VAR_1->nr_hierarchy_entries;
 else if (FUNC_1(VAR_1))
  VAR_2 = VAR_1->nr_non_filtered_entries;
 else
  VAR_2 = VAR_1->hists->nr_entries;

 VAR_1->nr_callchain_rows = FUNC_0(VAR_1);
 return VAR_2 + VAR_1->nr_callchain_rows;
}
