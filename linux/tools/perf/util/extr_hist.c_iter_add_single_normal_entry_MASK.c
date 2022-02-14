
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_sample {int dummy; } ;
struct hist_entry_iter {struct hist_entry* he; int parent; struct perf_sample* sample; struct evsel* evsel; } ;
struct hist_entry {int dummy; } ;
struct evsel {int dummy; } ;
struct addr_location {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct evsel*) ;
 struct hist_entry* FUNC_1 (int ,struct addr_location*,int ,int *,int *,struct perf_sample*,int) ;

__attribute__((used)) static int
FUNC_2(struct hist_entry_iter *VAR_1, struct addr_location *VAR_2)
{
 struct evsel *VAR_3 = VAR_1->evsel;
 struct perf_sample *VAR_4 = VAR_1->sample;
 struct hist_entry *VAR_5;

 VAR_5 = FUNC_1(FUNC_0(VAR_3), VAR_2, VAR_1->parent, ((void*)0), ((void*)0),
         VAR_4, 1);
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_1->he = VAR_5;
 return 0;
}
