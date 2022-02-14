
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_sample {int dummy; } ;
struct mem_info {int dummy; } ;
struct hist_entry_iter {struct mem_info* priv; struct perf_sample* sample; } ;
struct addr_location {int dummy; } ;


 int VAR_0 ;
 struct mem_info* FUNC_0 (struct perf_sample*,struct addr_location*) ;

__attribute__((used)) static int
FUNC_1(struct hist_entry_iter *VAR_1, struct addr_location *VAR_2)
{
 struct perf_sample *VAR_3 = VAR_1->sample;
 struct mem_info *VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_2);
 if (VAR_4 == ((void*)0))
  return -VAR_0;

 VAR_1->priv = VAR_4;
 return 0;
}
