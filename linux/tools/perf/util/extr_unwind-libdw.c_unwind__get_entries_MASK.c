
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int (* unwind_entry_cb_t ) (TYPE_2__*,void*) ;
typedef int ui_buf ;
struct unwind_info {int (* cb ) (TYPE_2__*,void*) ;void* arg; int max_stack; int idx; int dwfl; TYPE_2__* entries; int machine; struct thread* thread; struct perf_sample* sample; } ;
struct thread {int tid; TYPE_1__* mg; } ;
struct TYPE_9__ {int regs; } ;
struct perf_sample {TYPE_5__ user_regs; } ;
struct TYPE_10__ {scalar_t__ order; } ;
struct TYPE_8__ {scalar_t__ ip; } ;
struct TYPE_7__ {int machine; } ;
typedef int Dwarf_Word ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_6__ VAR_6 ;
 int FUNC_0 (int ,int ,int ,int *,struct unwind_info*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int ,struct unwind_info*) ;
 int VAR_7 ;
 int FUNC_5 (struct unwind_info*) ;
 int VAR_8 ;
 int FUNC_6 (int *,TYPE_5__*,int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int ,struct unwind_info*) ;
 int FUNC_9 (TYPE_2__*,void*) ;
 struct unwind_info* FUNC_10 (int) ;

int FUNC_11(unwind_entry_cb_t VAR_9, void *VAR_10,
   struct thread *VAR_11,
   struct perf_sample *VAR_12,
   int VAR_13)
{
 struct unwind_info *VAR_14, VAR_15 = {
  .sample = VAR_12,
  .thread = VAR_11,
  .machine = VAR_11->mg->machine,
  .cb = VAR_9,
  .arg = VAR_10,
  .max_stack = VAR_13,
 };
 Dwarf_Word VAR_16;
 int VAR_17 = -VAR_0, VAR_18;

 if (!VAR_12->user_regs.regs)
  return -VAR_0;

 VAR_14 = FUNC_10(sizeof(VAR_15) + sizeof(VAR_15.entries[0]) * VAR_13);
 if (!VAR_14)
  return -VAR_2;

 *VAR_14 = VAR_15;

 VAR_14->dwfl = FUNC_1(&VAR_8);
 if (!VAR_14->dwfl)
  goto out;

 VAR_17 = FUNC_6(&VAR_16, &VAR_12->user_regs, VAR_4);
 if (VAR_17)
  goto out;

 VAR_17 = FUNC_8(VAR_16, VAR_14);
 if (VAR_17)
  goto out;

 VAR_17 = !FUNC_0(VAR_14->dwfl, VAR_1, VAR_11->tid, &VAR_5, VAR_14);
 if (VAR_17)
  goto out;

 VAR_17 = FUNC_4(VAR_14->dwfl, VAR_11->tid, VAR_7, VAR_14);

 if (VAR_17 && VAR_14->max_stack != VAR_13)
  VAR_17 = 0;




 for (VAR_18 = 0; VAR_18 < VAR_14->idx && !VAR_17; VAR_18++) {
  int VAR_19 = VAR_18;

  if (VAR_6.order == VAR_3)
   VAR_19 = VAR_14->idx - VAR_18 - 1;

  VAR_17 = VAR_14->entries[VAR_19].ip ? VAR_14->cb(&VAR_14->entries[VAR_19], VAR_14->arg) : 0;
 }

 out:
 if (VAR_17)
  FUNC_7("unwind: failed with '%s'\n", FUNC_3(-1));

 FUNC_2(VAR_14->dwfl);
 FUNC_5(VAR_14);
 return 0;
}
