
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
struct thread {int dummy; } ;
struct symbol {int dummy; } ;
struct perf_sample {struct branch_stack* branch_stack; struct ip_callchain* callchain; } ;
struct ip_callchain {scalar_t__* ips; scalar_t__ nr; } ;
struct callchain_cursor {int dummy; } ;
struct branch_stack {int nr; TYPE_1__* entries; } ;
struct branch_flags {int dummy; } ;
struct addr_location {int dummy; } ;
struct TYPE_4__ {scalar_t__ order; } ;
struct TYPE_3__ {scalar_t__ from; scalar_t__ to; struct branch_flags flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct thread*,struct callchain_cursor*,struct symbol**,struct addr_location*,int *,scalar_t__,int,struct branch_flags*,int *,scalar_t__) ;
 TYPE_2__ VAR_3 ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct thread *VAR_4,
     struct callchain_cursor *VAR_5,
     struct perf_sample *VAR_6,
     struct symbol **VAR_7,
     struct addr_location *VAR_8,
     int VAR_9)
{
 struct ip_callchain *VAR_10 = VAR_6->callchain;
 int VAR_11 = FUNC_1(VAR_9, (int)VAR_10->nr), VAR_12;
 u8 VAR_13 = VAR_2;
 u64 VAR_14, VAR_15 = 0;

 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
  if (VAR_10->ips[VAR_12] == VAR_1)
   break;
 }


 if (VAR_12 != VAR_11) {
  struct branch_stack *VAR_16 = VAR_6->branch_stack;
  int VAR_17 = VAR_16->nr, VAR_18, VAR_19;
  bool VAR_20;
  struct branch_flags *VAR_21;
  int VAR_22 = VAR_12 + 1 + VAR_17 + 1;

  for (VAR_18 = 0; VAR_18 < VAR_22; VAR_18++) {
   int VAR_23;
   VAR_20 = 0;
   VAR_21 = ((void*)0);

   if (VAR_3.order == VAR_0) {
    if (VAR_18 < VAR_12 + 1)
     VAR_14 = VAR_10->ips[VAR_18];
    else if (VAR_18 > VAR_12 + 1) {
     VAR_19 = VAR_18 - VAR_12 - 2;
     VAR_14 = VAR_16->entries[VAR_19].from;
     VAR_20 = 1;
     VAR_21 = &VAR_16->entries[VAR_19].flags;
    } else {
     VAR_14 = VAR_16->entries[0].to;
     VAR_20 = 1;
     VAR_21 = &VAR_16->entries[0].flags;
     VAR_15 =
      VAR_16->entries[0].from;
    }
   } else {
    if (VAR_18 < VAR_17) {
     VAR_19 = VAR_17 - VAR_18 - 1;
     VAR_14 = VAR_16->entries[VAR_19].from;
     VAR_20 = 1;
     VAR_21 = &VAR_16->entries[VAR_19].flags;
    }
    else if (VAR_18 > VAR_17)
     VAR_14 = VAR_10->ips[VAR_12 + 1 - (VAR_18 - VAR_17)];
    else {
     VAR_14 = VAR_16->entries[0].to;
     VAR_20 = 1;
     VAR_21 = &VAR_16->entries[0].flags;
     VAR_15 =
      VAR_16->entries[0].from;
    }
   }

   VAR_23 = FUNC_0(VAR_4, VAR_5, VAR_7,
            VAR_8, &VAR_13, VAR_14,
            VAR_20, VAR_21, ((void*)0),
            VAR_15);
   if (VAR_23)
    return (VAR_23 < 0) ? VAR_23 : 0;
  }
  return 1;
 }

 return 0;
}
