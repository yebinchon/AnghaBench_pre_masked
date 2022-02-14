
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u64 ;
struct thread {int dummy; } ;
struct perf_sample {int cpumode; struct branch_stack* branch_stack; } ;
struct perf_event_attr {int dummy; } ;
struct branch_stack {size_t nr; TYPE_2__* entries; } ;
struct addr_location {int map; int sym; } ;
typedef int alt ;
typedef int alf ;
struct TYPE_3__ {int cycles; scalar_t__ abort; scalar_t__ in_tx; } ;
struct TYPE_4__ {size_t from; size_t to; TYPE_1__ flags; } ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,char*,...) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (struct addr_location*,int ,int) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int ,struct addr_location*,int *) ;
 int FUNC_6 (struct thread*,int ,size_t,struct addr_location*) ;

__attribute__((used)) static int FUNC_7(struct perf_sample *VAR_1,
        struct thread *VAR_2,
        struct perf_event_attr *VAR_3, FILE *VAR_4)
{
 struct branch_stack *VAR_5 = VAR_1->branch_stack;
 struct addr_location VAR_6, VAR_7;
 u64 VAR_8, VAR_9, VAR_10;
 int VAR_11 = 0;

 if (!(VAR_5 && VAR_5->nr))
  return 0;

 for (VAR_8 = 0; VAR_8 < VAR_5->nr; VAR_8++) {

  FUNC_3(&VAR_6, 0, sizeof(VAR_6));
  FUNC_3(&VAR_7, 0, sizeof(VAR_7));
  VAR_9 = VAR_5->entries[VAR_8].from;
  VAR_10 = VAR_5->entries[VAR_8].to;

  FUNC_6(VAR_2, VAR_1->cpumode, VAR_9, &VAR_6);
  FUNC_6(VAR_2, VAR_1->cpumode, VAR_10, &VAR_7);

  VAR_11 += FUNC_5(VAR_6.sym, &VAR_6, VAR_4);
  if (FUNC_0(VAR_0)) {
   VAR_11 += FUNC_1(VAR_4, "(");
   VAR_11 += FUNC_2(VAR_6.map, VAR_4);
   VAR_11 += FUNC_1(VAR_4, ")");
  }
  VAR_11 += FUNC_1(VAR_4, "%c", '/');
  VAR_11 += FUNC_5(VAR_7.sym, &VAR_7, VAR_4);
  if (FUNC_0(VAR_0)) {
   VAR_11 += FUNC_1(VAR_4, "(");
   VAR_11 += FUNC_2(VAR_7.map, VAR_4);
   VAR_11 += FUNC_1(VAR_4, ")");
  }
  VAR_11 += FUNC_1(VAR_4, "/%c/%c/%c/%d ",
   FUNC_4( VAR_5->entries + VAR_8),
   VAR_5->entries[VAR_8].flags.in_tx? 'X' : '-',
   VAR_5->entries[VAR_8].flags.abort? 'A' : '-',
   VAR_5->entries[VAR_8].flags.cycles);
 }

 return VAR_11;
}
