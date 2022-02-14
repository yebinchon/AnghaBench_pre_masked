
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u64 ;
struct thread {int dummy; } ;
struct perf_sample {int cpumode; struct branch_stack* branch_stack; } ;
struct branch_stack {size_t nr; TYPE_2__* entries; } ;
struct addr_location {int map; } ;
struct TYPE_3__ {int cycles; int abort; int in_tx; int predicted; int mispred; } ;
struct TYPE_4__ {int to; int from; TYPE_1__ flags; } ;
typedef int PyObject ;


 int FUNC_0 (int ) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char const*) ;
 char* FUNC_8 (int ) ;
 int FUNC_9 (int *,char*,int ) ;
 int FUNC_10 (struct thread*,int ,int ,struct addr_location*) ;

__attribute__((used)) static PyObject *FUNC_11(struct perf_sample *VAR_0,
     struct thread *VAR_1)
{
 struct branch_stack *VAR_2 = VAR_0->branch_stack;
 PyObject *VAR_3;
 u64 VAR_4;

 VAR_3 = FUNC_3(0);
 if (!VAR_3)
  FUNC_6("couldn't create Python list");

 if (!(VAR_2 && VAR_2->nr))
  goto exit;

 for (VAR_4 = 0; VAR_4 < VAR_2->nr; VAR_4++) {
  PyObject *VAR_5;
  struct addr_location VAR_6;
  const char *VAR_7;

  VAR_5 = FUNC_1();
  if (!VAR_5)
   FUNC_6("couldn't create Python dictionary");

  FUNC_9(VAR_5, "from",
      FUNC_4(VAR_2->entries[VAR_4].from));
  FUNC_9(VAR_5, "to",
      FUNC_4(VAR_2->entries[VAR_4].to));
  FUNC_9(VAR_5, "mispred",
      FUNC_0(VAR_2->entries[VAR_4].flags.mispred));
  FUNC_9(VAR_5, "predicted",
      FUNC_0(VAR_2->entries[VAR_4].flags.predicted));
  FUNC_9(VAR_5, "in_tx",
      FUNC_0(VAR_2->entries[VAR_4].flags.in_tx));
  FUNC_9(VAR_5, "abort",
      FUNC_0(VAR_2->entries[VAR_4].flags.abort));
  FUNC_9(VAR_5, "cycles",
      FUNC_4(VAR_2->entries[VAR_4].flags.cycles));

  FUNC_10(VAR_1, VAR_0->cpumode,
        VAR_2->entries[VAR_4].from, &VAR_6);
  VAR_7 = FUNC_8(VAR_6.map);
  FUNC_9(VAR_5, "from_dsoname",
           FUNC_7(VAR_7));

  FUNC_10(VAR_1, VAR_0->cpumode,
        VAR_2->entries[VAR_4].to, &VAR_6);
  VAR_7 = FUNC_8(VAR_6.map);
  FUNC_9(VAR_5, "to_dsoname",
           FUNC_7(VAR_7));

  FUNC_2(VAR_3, VAR_5);
  FUNC_5(VAR_5);
 }

exit:
 return VAR_3;
}
