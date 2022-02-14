
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; } ;
union perf_event {TYPE_2__ header; } ;
struct perf_top {int tool; int guest_us_samples; int guest_kernel_samples; int hide_kernel_symbols; int kernel_samples; int hide_user_symbols; int us_samples; int samples; int evswitch; int drop_total; int drop; struct perf_session* session; struct evlist* evlist; } ;
struct machine {int dummy; } ;
struct TYPE_5__ {struct machine host; } ;
struct perf_session {TYPE_4__* evlist; TYPE_1__ machines; } ;
struct perf_sample {int cpumode; int pid; int id; } ;
struct ordered_events {struct perf_top* data; } ;
struct ordered_event {union perf_event* event; } ;
struct evsel {int dummy; } ;
struct evlist {int dummy; } ;
struct TYPE_7__ {int nr_unknown_events; } ;
struct TYPE_8__ {TYPE_3__ stats; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;




 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct evsel*) ;
 scalar_t__ FUNC_2 (int *,struct evsel*) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct machine*,union perf_event*,struct perf_sample*) ;
 int FUNC_5 (int *,union perf_event*,struct evsel*,struct perf_sample*,struct machine*) ;
 struct evsel* FUNC_6 (TYPE_4__*,int ) ;
 int FUNC_7 (struct evlist*,union perf_event*,struct perf_sample*) ;
 struct machine* FUNC_8 (struct perf_session*,int ) ;
 int FUNC_9 (struct perf_top*,union perf_event*,struct evsel*) ;
 int FUNC_10 (struct perf_top*,union perf_event*,struct evsel*) ;
 int FUNC_11 (char*,int) ;
 scalar_t__ FUNC_12 (struct ordered_event*,struct perf_top*) ;

__attribute__((used)) static int FUNC_13(struct ordered_events *VAR_4,
    struct ordered_event *VAR_5)
{
 struct perf_top *VAR_6 = VAR_4->data;
 struct evlist *VAR_7 = VAR_6->evlist;
 struct perf_session *VAR_8 = VAR_6->session;
 union perf_event *VAR_9 = VAR_5->event;
 struct perf_sample VAR_10;
 struct evsel *VAR_11;
 struct machine *VAR_12;
 int VAR_13 = -1;

 if (FUNC_12(VAR_5, VAR_6)) {
  VAR_6->drop++;
  VAR_6->drop_total++;
  return 0;
 }

 VAR_13 = FUNC_7(VAR_7, VAR_9, &VAR_10);
 if (VAR_13) {
  FUNC_11("Can't parse sample, err = %d\n", VAR_13);
  goto next_event;
 }

 VAR_11 = FUNC_6(VAR_8->evlist, VAR_10.id);
 FUNC_0(VAR_11 != ((void*)0));

 if (VAR_9->header.type == VAR_3) {
  if (FUNC_2(&VAR_6->evswitch, VAR_11))
   return 0;
  ++VAR_6->samples;
 }

 switch (VAR_10.cpumode) {
 case 128:
  ++VAR_6->us_samples;
  if (VAR_6->hide_user_symbols)
   goto next_event;
  VAR_12 = &VAR_8->machines.host;
  break;
 case 129:
  ++VAR_6->kernel_samples;
  if (VAR_6->hide_kernel_symbols)
   goto next_event;
  VAR_12 = &VAR_8->machines.host;
  break;
 case 131:
  ++VAR_6->guest_kernel_samples;
  VAR_12 = FUNC_8(VAR_8,
           VAR_10.pid);
  break;
 case 130:
  ++VAR_6->guest_us_samples;




  goto next_event;
 default:
  if (VAR_9->header.type == VAR_3)
   goto next_event;
  VAR_12 = &VAR_8->machines.host;
  break;
 }

 if (VAR_9->header.type == VAR_3) {
  FUNC_5(&VAR_6->tool, VAR_9, VAR_11,
        &VAR_10, VAR_12);
 } else if (VAR_9->header.type == VAR_0) {
  FUNC_9(VAR_6, VAR_9, VAR_11);
 } else if (VAR_9->header.type == VAR_1) {
  FUNC_10(VAR_6, VAR_9, VAR_11);
 } else if (VAR_9->header.type < VAR_2) {
  FUNC_3(FUNC_1(VAR_11), VAR_9->header.type);
  FUNC_4(VAR_12, VAR_9, &VAR_10);
 } else
  ++VAR_8->evlist->stats.nr_unknown_events;

 VAR_13 = 0;
next_event:
 return VAR_13;
}
