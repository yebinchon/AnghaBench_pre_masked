
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union perf_event {int dummy; } perf_event ;
typedef size_t u64 ;
struct perf_tool {int dummy; } ;
struct TYPE_3__ {size_t nr; int * values; } ;
struct TYPE_4__ {TYPE_1__ group; } ;
struct perf_sample {TYPE_2__ read; } ;
struct machine {int dummy; } ;
struct evlist {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct evlist*,struct perf_tool*,union perf_event*,struct perf_sample*,int *,struct machine*) ;

__attribute__((used)) static int FUNC_1(struct evlist *VAR_1,
    struct perf_tool *VAR_2,
    union perf_event *VAR_3,
    struct perf_sample *VAR_4,
    struct machine *VAR_5)
{
 int VAR_6 = -VAR_0;
 u64 VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_4->read.group.nr; VAR_7++) {
  VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4,
        &VAR_4->read.group.values[VAR_7],
        VAR_5);
  if (VAR_6)
   break;
 }

 return VAR_6;
}
