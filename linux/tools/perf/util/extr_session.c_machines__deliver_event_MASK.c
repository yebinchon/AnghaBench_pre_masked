
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int flags; } ;
struct TYPE_8__ {int lost; } ;
struct TYPE_7__ {int lost; } ;
struct TYPE_6__ {int type; int misc; } ;
union perf_event {TYPE_4__ aux; TYPE_3__ lost_samples; TYPE_2__ lost; TYPE_1__ header; } ;
typedef int u64 ;
struct perf_tool {int (* mmap ) (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;int (* mmap2 ) (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;int (* comm ) (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;int (* namespaces ) (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;int (* fork ) (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;int (* exit ) (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;int (* lost ) (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;int (* lost_samples ) (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;int (* read ) (struct perf_tool*,union perf_event*,struct perf_sample*,struct evsel*,struct machine*) ;int (* throttle ) (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;int (* unthrottle ) (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;int (* aux ) (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;int (* itrace_start ) (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;int (* context_switch ) (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;int (* ksymbol ) (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;int (* bpf ) (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;} ;
struct perf_sample {int id; } ;
struct machines {int dummy; } ;
struct machine {int dummy; } ;
struct evsel {int dummy; } ;
struct TYPE_10__ {int total_aux_lost; int total_aux_partial; int nr_unknown_events; int total_lost_samples; int total_lost; int nr_proc_map_timeout; int nr_unprocessable_samples; int nr_unknown_id; } ;
struct evlist {TYPE_5__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct evlist*,union perf_event*,int ,struct perf_sample*) ;
 int FUNC_1 (struct evsel*,union perf_event*) ;
 int FUNC_2 (struct evsel*,union perf_event*,struct perf_sample*) ;
 struct machine* FUNC_3 (struct machines*,union perf_event*,struct perf_sample*) ;
 int FUNC_4 (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;
 int FUNC_5 (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;
 int FUNC_6 (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;
 int FUNC_7 (struct evlist*,struct perf_tool*,union perf_event*,struct perf_sample*,struct evsel*,struct machine*) ;
 struct evsel* FUNC_8 (struct evlist*,int ) ;
 int FUNC_9 (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;
 int FUNC_10 (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;
 int FUNC_11 (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;
 int FUNC_12 (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;
 int FUNC_13 (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;
 int FUNC_14 (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;
 int FUNC_15 (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;
 int FUNC_16 (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;
 int FUNC_17 (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;
 int FUNC_18 (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;
 int FUNC_19 (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;
 int FUNC_20 (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;
 int FUNC_21 (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;
 int FUNC_22 (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;
 int FUNC_23 (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;
 int FUNC_24 (struct perf_tool*,union perf_event*,struct perf_sample*,struct evsel*,struct machine*) ;

__attribute__((used)) static int FUNC_25(struct machines *VAR_3,
       struct evlist *VAR_4,
       union perf_event *VAR_5,
       struct perf_sample *VAR_6,
       struct perf_tool *VAR_7, u64 VAR_8)
{
 struct evsel *VAR_9;
 struct machine *VAR_10;

 FUNC_0(VAR_4, VAR_5, VAR_8, VAR_6);

 VAR_9 = FUNC_8(VAR_4, VAR_6->id);

 VAR_10 = FUNC_3(VAR_3, VAR_5, VAR_6);

 switch (VAR_5->header.type) {
 case 132:
  if (VAR_9 == ((void*)0)) {
   ++VAR_4->stats.nr_unknown_id;
   return 0;
  }
  FUNC_2(VAR_9, VAR_5, VAR_6);
  if (VAR_10 == ((void*)0)) {
   ++VAR_4->stats.nr_unprocessable_samples;
   return 0;
  }
  return FUNC_7(VAR_4, VAR_7, VAR_5, VAR_6, VAR_9, VAR_10);
 case 136:
  return VAR_7->mmap(VAR_7, VAR_5, VAR_6, VAR_10);
 case 135:
  if (VAR_5->header.misc & VAR_2)
   ++VAR_4->stats.nr_proc_map_timeout;
  return VAR_7->mmap2(VAR_7, VAR_5, VAR_6, VAR_10);
 case 143:
  return VAR_7->comm(VAR_7, VAR_5, VAR_6, VAR_10);
 case 134:
  return VAR_7->namespaces(VAR_7, VAR_5, VAR_6, VAR_10);
 case 141:
  return VAR_7->fork(VAR_7, VAR_5, VAR_6, VAR_10);
 case 142:
  return VAR_7->exit(VAR_7, VAR_5, VAR_6, VAR_10);
 case 138:
  if (VAR_7->lost == FUNC_5)
   VAR_4->stats.total_lost += VAR_5->lost.lost;
  return VAR_7->lost(VAR_7, VAR_5, VAR_6, VAR_10);
 case 137:
  if (VAR_7->lost_samples == FUNC_6)
   VAR_4->stats.total_lost_samples += VAR_5->lost_samples.lost;
  return VAR_7->lost_samples(VAR_7, VAR_5, VAR_6, VAR_10);
 case 133:
  FUNC_1(VAR_9, VAR_5);
  return VAR_7->read(VAR_7, VAR_5, VAR_6, VAR_9, VAR_10);
 case 129:
  return VAR_7->throttle(VAR_7, VAR_5, VAR_6, VAR_10);
 case 128:
  return VAR_7->unthrottle(VAR_7, VAR_5, VAR_6, VAR_10);
 case 145:
  if (VAR_7->aux == FUNC_4) {
   if (VAR_5->aux.flags & VAR_1)
    VAR_4->stats.total_aux_lost += 1;
   if (VAR_5->aux.flags & VAR_0)
    VAR_4->stats.total_aux_partial += 1;
  }
  return VAR_7->aux(VAR_7, VAR_5, VAR_6, VAR_10);
 case 140:
  return VAR_7->itrace_start(VAR_7, VAR_5, VAR_6, VAR_10);
 case 131:
 case 130:
  return VAR_7->context_switch(VAR_7, VAR_5, VAR_6, VAR_10);
 case 139:
  return VAR_7->ksymbol(VAR_7, VAR_5, VAR_6, VAR_10);
 case 144:
  return VAR_7->bpf(VAR_7, VAR_5, VAR_6, VAR_10);
 default:
  ++VAR_4->stats.nr_unknown_events;
  return -1;
 }
}
