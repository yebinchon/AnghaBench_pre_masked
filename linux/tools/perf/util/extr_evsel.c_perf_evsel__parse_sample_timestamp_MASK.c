
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int* array; } ;
struct TYPE_5__ {scalar_t__ type; } ;
union perf_event {TYPE_2__ sample; TYPE_1__ header; } ;
typedef int u64 ;
struct perf_sample {unsigned long long time; } ;
struct TYPE_8__ {int sample_type; int sample_id_all; } ;
struct TYPE_7__ {TYPE_4__ attr; } ;
struct evsel {int sample_size; TYPE_3__ core; } ;
typedef int __u64 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (union perf_event*,int ) ;
 scalar_t__ FUNC_1 (struct evsel*,union perf_event*,struct perf_sample*) ;

int FUNC_2(struct evsel *VAR_6,
           union perf_event *VAR_7,
           u64 *VAR_8)
{
 u64 VAR_9 = VAR_6->core.attr.sample_type;
 const __u64 *VAR_10;

 if (!(VAR_9 & VAR_5))
  return -1;

 if (VAR_7->header.type != VAR_1) {
  struct perf_sample VAR_11 = {
   .time = -1ULL,
  };

  if (!VAR_6->core.attr.sample_id_all)
   return -1;
  if (FUNC_1(VAR_6, VAR_7, &VAR_11))
   return -1;

  *VAR_8 = VAR_11.time;
  return 0;
 }

 VAR_10 = VAR_7->sample.array;

 if (FUNC_0(VAR_7, VAR_6->sample_size))
  return -VAR_0;

 if (VAR_9 & VAR_2)
  VAR_10++;

 if (VAR_9 & VAR_3)
  VAR_10++;

 if (VAR_9 & VAR_4)
  VAR_10++;

 if (VAR_9 & VAR_5)
  *VAR_8 = *VAR_10;

 return 0;
}
