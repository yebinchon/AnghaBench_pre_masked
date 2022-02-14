
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union perf_event {int dummy; } perf_event ;
typedef int u64 ;
struct perf_tool {int (* sample ) (struct perf_tool*,union perf_event*,struct perf_sample*,struct evsel*,struct machine*) ;} ;
struct TYPE_4__ {int one; } ;
struct perf_sample {TYPE_1__ read; } ;
struct machine {int dummy; } ;
struct TYPE_5__ {int sample_type; int read_format; } ;
struct TYPE_6__ {TYPE_2__ attr; } ;
struct evsel {TYPE_3__ core; } ;
struct evlist {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct evlist*,struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;
 int FUNC_1 (struct evlist*,struct perf_tool*,union perf_event*,struct perf_sample*,int *,struct machine*) ;
 int FUNC_2 (struct perf_tool*,union perf_event*,struct perf_sample*,struct evsel*,struct machine*) ;

__attribute__((used)) static int
 FUNC_3(struct evlist *VAR_2,
        struct perf_tool *VAR_3,
        union perf_event *VAR_4,
        struct perf_sample *VAR_5,
        struct evsel *VAR_6,
        struct machine *VAR_7)
{

 u64 VAR_8 = VAR_6->core.attr.sample_type;
 u64 VAR_9 = VAR_6->core.attr.read_format;


 if (!(VAR_8 & VAR_1))
  return VAR_3->sample(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);


 if (VAR_9 & VAR_0)
  return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5,
         VAR_7);
 else
  return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5,
         &VAR_5->read.one, VAR_7);
}
