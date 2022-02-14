
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct thread {int srccode_state; } ;
struct perf_sample {scalar_t__ callchain; } ;
struct perf_event_attr {int sample_type; int type; } ;
struct machine {int dummy; } ;
struct TYPE_4__ {struct perf_event_attr attr; } ;
struct evsel {TYPE_1__ core; } ;
struct callchain_cursor {int dummy; } ;
struct addr_location {int addr; int map; int thread; } ;
struct TYPE_6__ {unsigned int print_ip_opts; int user_set; } ;
struct TYPE_5__ {int bt_stop_list; scalar_t__ use_callchain; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 struct callchain_cursor VAR_6 ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,int ,char*,int *) ;
 TYPE_3__* VAR_7 ;
 unsigned int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct perf_sample*,struct thread*,struct perf_event_attr*,int *) ;
 scalar_t__ FUNC_6 (struct perf_sample*,struct evsel*,struct thread*,struct addr_location*,int *) ;
 scalar_t__ FUNC_7 (struct perf_sample*,struct perf_event_attr*,struct thread*,struct machine*,int *) ;
 scalar_t__ FUNC_8 (struct perf_sample*,struct perf_event_attr*,int *) ;
 scalar_t__ FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (struct perf_sample*,struct addr_location*,int ,unsigned int,struct callchain_cursor*,int ,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_2__ VAR_10 ;
 scalar_t__ FUNC_11 (int ,struct callchain_cursor*,struct evsel*,struct perf_sample*,int *,int *,int ) ;

__attribute__((used)) static int FUNC_12(struct perf_sample *VAR_11,
        struct evsel *VAR_12,
        struct thread *VAR_13,
        struct addr_location *VAR_14,
        struct machine *VAR_15, FILE *VAR_16)
{
 struct perf_event_attr *VAR_17 = &VAR_12->core.attr;
 unsigned int VAR_18 = FUNC_4(VAR_17->type);
 bool VAR_19 = 0;
 int VAR_20 = 0;

 if (FUNC_0(VAR_1))
  VAR_20 += FUNC_6(VAR_11, VAR_12, VAR_13, VAR_14, VAR_16);


 if (FUNC_0(VAR_3)) {
  unsigned int VAR_21 = VAR_7[VAR_18].print_ip_opts;
  struct callchain_cursor *VAR_22 = ((void*)0);

  if (VAR_10.use_callchain && VAR_11->callchain &&
      FUNC_11(VAR_14->thread, &VAR_6, VAR_12,
           VAR_11, ((void*)0), ((void*)0), VAR_8) == 0)
   VAR_22 = &VAR_6;

  if (VAR_22 == ((void*)0)) {
   VAR_20 += FUNC_1(VAR_16, " ");
   if (VAR_21 & VAR_2) {
    VAR_19 = 1;
    VAR_21 &= ~VAR_2;
   }
  } else
   VAR_20 += FUNC_1(VAR_16, "\n");

  VAR_20 += FUNC_10(VAR_11, VAR_14, 0, VAR_21, VAR_22,
            VAR_10.bt_stop_list, VAR_16);
 }


 if (FUNC_0(VAR_0) ||
     ((VAR_12->core.attr.sample_type & VAR_4) &&
      !VAR_7[VAR_18].user_set)) {
  VAR_20 += FUNC_1(VAR_16, " => ");
  VAR_20 += FUNC_5(VAR_11, VAR_13, VAR_17, VAR_16);
 }

 VAR_20 += FUNC_8(VAR_11, VAR_17, VAR_16);

 if (VAR_19)
  VAR_20 += FUNC_3(VAR_14->map, VAR_14->addr, "\n  ", VAR_16);

 VAR_20 += FUNC_7(VAR_11, VAR_17, VAR_13, VAR_15, VAR_16);
 VAR_20 += FUNC_1(VAR_16, "\n");
 if (FUNC_0(VAR_5)) {
  int VAR_23 = FUNC_2(VAR_14->map, VAR_14->addr, VAR_9,
      &VAR_13->srccode_state);
  if (VAR_23) {
   VAR_20 += VAR_23;
   VAR_20 += FUNC_9("\n");
  }
 }
 return VAR_20;
}
