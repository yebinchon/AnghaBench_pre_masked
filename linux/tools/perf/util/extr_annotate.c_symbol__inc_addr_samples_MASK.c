
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct symbol {int dummy; } ;
struct perf_sample {int dummy; } ;
struct map {int dummy; } ;
struct evsel {int idx; TYPE_2__* evlist; } ;
struct annotated_source {int dummy; } ;
struct TYPE_3__ {int nr_entries; } ;
struct TYPE_4__ {TYPE_1__ core; } ;


 int FUNC_0 (struct symbol*,struct map*,struct annotated_source*,int ,int ,struct perf_sample*) ;
 struct annotated_source* FUNC_1 (struct symbol*,int ) ;

__attribute__((used)) static int FUNC_2(struct symbol *VAR_0, struct map *VAR_1,
        struct evsel *VAR_2, u64 VAR_3,
        struct perf_sample *VAR_4)
{
 struct annotated_source *VAR_5;

 if (VAR_0 == ((void*)0))
  return 0;
 VAR_5 = FUNC_1(VAR_0, VAR_2->evlist->core.nr_entries);
 return (VAR_5) ? FUNC_0(VAR_0, VAR_1, VAR_5, VAR_2->idx,
         VAR_3, VAR_4) : 0;
}
