
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
struct thread {int dummy; } ;
struct symbol {int dummy; } ;
struct perf_sample {struct ip_callchain* callchain; struct branch_stack* branch_stack; } ;
struct iterations {int dummy; } ;
struct ip_callchain {int nr; scalar_t__* ips; } ;
struct evsel {int dummy; } ;
struct callchain_cursor {int dummy; } ;
struct branch_stack {int nr; struct branch_entry* entries; } ;
struct branch_entry {int from; scalar_t__ to; int flags; } ;
struct addr_location {int dummy; } ;
struct TYPE_2__ {scalar_t__ order; scalar_t__ branch_callstack; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct thread*,struct callchain_cursor*,struct symbol**,struct addr_location*,int *,scalar_t__,int,int *,struct iterations*,int) ;
 int FUNC_1 (struct thread*,struct ip_callchain*) ;
 TYPE_1__ VAR_5 ;
 int FUNC_2 (struct ip_callchain*,struct thread*,struct callchain_cursor*,struct symbol**,struct addr_location*,int *,int) ;
 int FUNC_3 (struct iterations*,int ,int) ;
 int FUNC_4 (int,int) ;
 scalar_t__ FUNC_5 (struct evsel*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct branch_entry*,int,struct iterations*) ;
 int FUNC_8 (struct thread*,struct callchain_cursor*,struct perf_sample*,struct symbol**,struct addr_location*,int) ;

__attribute__((used)) static int FUNC_9(struct thread *VAR_6,
         struct callchain_cursor *VAR_7,
         struct evsel *VAR_8,
         struct perf_sample *VAR_9,
         struct symbol **VAR_10,
         struct addr_location *VAR_11,
         int VAR_12)
{
 struct branch_stack *VAR_13 = VAR_9->branch_stack;
 struct ip_callchain *VAR_14 = VAR_9->callchain;
 int VAR_15 = 0;
 u8 VAR_16 = VAR_4;
 int VAR_17, VAR_18, VAR_19, VAR_20;
 int VAR_21 = -1;
 int VAR_22 = 0;

 if (VAR_14)
  VAR_15 = VAR_14->nr;

 if (FUNC_5(VAR_8)) {
  VAR_19 = FUNC_8(VAR_6, VAR_7, VAR_9, VAR_10,
         VAR_11, VAR_12);
  if (VAR_19)
   return (VAR_19 < 0) ? VAR_19 : 0;
 }





 VAR_21 = FUNC_1(VAR_6, VAR_14);
 if (VAR_13 && VAR_5.branch_callstack) {
  int VAR_23 = FUNC_4(VAR_12, (int)VAR_13->nr);
  struct branch_entry VAR_24[VAR_23];
  struct iterations VAR_25[VAR_23];

  if (VAR_13->nr > VAR_3) {
   FUNC_6("corrupted branch chain. skipping...\n");
   goto check_calls;
  }

  for (VAR_17 = 0; VAR_17 < VAR_23; VAR_17++) {
   if (VAR_5.order == VAR_1) {
    VAR_24[VAR_17] = VAR_13->entries[VAR_17];

    if (VAR_14 == ((void*)0))
     continue;
    if (VAR_17 == VAR_21 ||
        VAR_14->ips[VAR_22] >= VAR_2)
     VAR_22++;
    else if (VAR_24[VAR_17].from < VAR_14->ips[VAR_22] &&
        VAR_24[VAR_17].from >= VAR_14->ips[VAR_22] - 8)
     VAR_22++;
   } else
    VAR_24[VAR_17] = VAR_13->entries[VAR_13->nr - VAR_17 - 1];
  }

  FUNC_3(VAR_25, 0, sizeof(struct iterations) * VAR_23);
  VAR_23 = FUNC_7(VAR_24, VAR_23, VAR_25);

  for (VAR_17 = 0; VAR_17 < VAR_23; VAR_17++) {
   VAR_19 = FUNC_0(VAR_6, VAR_7, VAR_10,
            VAR_11,
            ((void*)0), VAR_24[VAR_17].to,
            1, &VAR_24[VAR_17].flags,
            ((void*)0), VAR_24[VAR_17].from);

   if (!VAR_19)
    VAR_19 = FUNC_0(VAR_6, VAR_7, VAR_10, VAR_11,
             ((void*)0), VAR_24[VAR_17].from,
             1, &VAR_24[VAR_17].flags,
             &VAR_25[VAR_17], 0);
   if (VAR_19 == -VAR_0)
    break;
   if (VAR_19)
    return VAR_19;
  }

  if (VAR_15 == 0)
   return 0;

  VAR_15 -= VAR_23;
 }

check_calls:
 if (VAR_5.order != VAR_1) {
  VAR_19 = FUNC_2(VAR_14, VAR_6, VAR_7, VAR_10, VAR_11,
     &VAR_16, VAR_14->nr - VAR_22);
  if (VAR_19)
   return (VAR_19 < 0) ? VAR_19 : 0;
 }
 for (VAR_17 = VAR_22, VAR_20 = 0;
      VAR_17 < VAR_15 && VAR_20 < VAR_12; VAR_17++) {
  u64 VAR_26;

  if (VAR_5.order == VAR_1)
   VAR_18 = VAR_17;
  else
   VAR_18 = VAR_14->nr - VAR_17 - 1;





  VAR_26 = VAR_14->ips[VAR_18];
  if (VAR_26 < VAR_2)
                       ++VAR_20;
  else if (VAR_5.order != VAR_1) {
   VAR_19 = FUNC_2(VAR_14, VAR_6, VAR_7, VAR_10,
      VAR_11, &VAR_16, VAR_18);
   if (VAR_19)
    return (VAR_19 < 0) ? VAR_19 : 0;
   continue;
  }

  VAR_19 = FUNC_0(VAR_6, VAR_7, VAR_10,
           VAR_11, &VAR_16, VAR_26,
           0, ((void*)0), ((void*)0), 0);

  if (VAR_19)
   return (VAR_19 < 0) ? VAR_19 : 0;
 }

 return 0;
}
