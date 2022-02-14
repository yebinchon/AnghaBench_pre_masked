
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int dummy; } ;
struct perf_sample {int dummy; } ;
struct mem_info {int dummy; } ;
struct hists {int dummy; } ;
struct hist_entry {int dummy; } ;
struct branch_info {int dummy; } ;
struct addr_location {int dummy; } ;


 struct hist_entry* FUNC_0 (struct hists*,struct addr_location*,struct symbol*,struct branch_info*,struct mem_info*,int *,struct perf_sample*,int,int *) ;

struct hist_entry *FUNC_1(struct hists *VAR_0,
        struct addr_location *VAR_1,
        struct symbol *VAR_2,
        struct branch_info *VAR_3,
        struct mem_info *VAR_4,
        struct perf_sample *VAR_5,
        bool VAR_6)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, ((void*)0),
      VAR_5, VAR_6, ((void*)0));
}
