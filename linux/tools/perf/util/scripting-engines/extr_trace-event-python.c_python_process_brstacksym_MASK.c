
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u64 ;
struct thread {int dummy; } ;
struct perf_sample {int cpumode; struct branch_stack* branch_stack; } ;
struct branch_stack {size_t nr; TYPE_1__* entries; } ;
struct addr_location {int sym; } ;
typedef int bf ;
struct TYPE_4__ {scalar_t__ abort; scalar_t__ in_tx; } ;
struct TYPE_3__ {TYPE_2__ flags; int to; int from; } ;
typedef int PyObject ;


 int * FUNC_0 () ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_2__*,char*,int) ;
 int FUNC_7 (int ,struct addr_location*,int,char*,int) ;
 int FUNC_8 (int *,char*,int ) ;
 int FUNC_9 (struct thread*,int ,int ,struct addr_location*) ;

__attribute__((used)) static PyObject *FUNC_10(struct perf_sample *VAR_0,
        struct thread *VAR_1)
{
 struct branch_stack *VAR_2 = VAR_0->branch_stack;
 PyObject *VAR_3;
 u64 VAR_4;
 char VAR_5[512];
 struct addr_location VAR_6;

 VAR_3 = FUNC_2(0);
 if (!VAR_3)
  FUNC_4("couldn't create Python list");

 if (!(VAR_2 && VAR_2->nr))
  goto exit;

 for (VAR_4 = 0; VAR_4 < VAR_2->nr; VAR_4++) {
  PyObject *VAR_7;

  VAR_7 = FUNC_0();
  if (!VAR_7)
   FUNC_4("couldn't create Python dictionary");

  FUNC_9(VAR_1, VAR_0->cpumode,
           VAR_2->entries[VAR_4].from, &VAR_6);
  FUNC_7(VAR_6.sym, &VAR_6, 1, VAR_5, sizeof(VAR_5));
  FUNC_8(VAR_7, "from",
           FUNC_5(VAR_5));

  FUNC_9(VAR_1, VAR_0->cpumode,
           VAR_2->entries[VAR_4].to, &VAR_6);
  FUNC_7(VAR_6.sym, &VAR_6, 1, VAR_5, sizeof(VAR_5));
  FUNC_8(VAR_7, "to",
           FUNC_5(VAR_5));

  FUNC_6(&VAR_2->entries[VAR_4].flags, VAR_5, sizeof(VAR_5));
  FUNC_8(VAR_7, "pred",
           FUNC_5(VAR_5));

  if (VAR_2->entries[VAR_4].flags.in_tx) {
   FUNC_8(VAR_7, "in_tx",
           FUNC_5("X"));
  } else {
   FUNC_8(VAR_7, "in_tx",
           FUNC_5("-"));
  }

  if (VAR_2->entries[VAR_4].flags.abort) {
   FUNC_8(VAR_7, "abort",
           FUNC_5("A"));
  } else {
   FUNC_8(VAR_7, "abort",
           FUNC_5("-"));
  }

  FUNC_1(VAR_3, VAR_7);
  FUNC_3(VAR_7);
 }

exit:
 return VAR_3;
}
