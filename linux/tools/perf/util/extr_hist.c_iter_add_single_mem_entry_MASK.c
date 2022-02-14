
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct perf_sample {int weight; int period; } ;
struct mem_info {int dummy; } ;
struct hists {int dummy; } ;
struct hist_entry_iter {struct hist_entry* he; int parent; struct perf_sample* sample; int evsel; struct mem_info* priv; } ;
struct hist_entry {int dummy; } ;
struct addr_location {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hists* FUNC_0 (int ) ;
 struct hist_entry* FUNC_1 (struct hists*,struct addr_location*,int ,int *,struct mem_info*,struct perf_sample*,int) ;

__attribute__((used)) static int
FUNC_2(struct hist_entry_iter *VAR_2, struct addr_location *VAR_3)
{
 u64 VAR_4;
 struct mem_info *VAR_5 = VAR_2->priv;
 struct hists *VAR_6 = FUNC_0(VAR_2->evsel);
 struct perf_sample *VAR_7 = VAR_2->sample;
 struct hist_entry *VAR_8;

 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_4 = VAR_7->weight;
 if (!VAR_4)
  VAR_4 = 1;
 VAR_7->period = VAR_4;

 VAR_8 = FUNC_1(VAR_6, VAR_3, VAR_2->parent, ((void*)0), VAR_5,
         VAR_7, 1);
 if (!VAR_8)
  return -VAR_1;

 VAR_2->he = VAR_8;
 return 0;
}
