
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int unwind_entry_cb_t ;
struct unwind_info {int machine; struct thread* thread; struct perf_sample* sample; } ;
struct thread {TYPE_1__* mg; } ;
struct TYPE_4__ {int regs; } ;
struct perf_sample {TYPE_2__ user_regs; } ;
struct TYPE_3__ {int machine; } ;


 int VAR_0 ;
 int FUNC_0 (struct unwind_info*,int ,void*,int) ;

__attribute__((used)) static int FUNC_1(unwind_entry_cb_t VAR_1, void *VAR_2,
   struct thread *VAR_3,
   struct perf_sample *VAR_4, int VAR_5)
{
 struct unwind_info VAR_6 = {
  .sample = VAR_4,
  .thread = VAR_3,
  .machine = VAR_3->mg->machine,
 };

 if (!VAR_4->user_regs.regs)
  return -VAR_0;

 if (VAR_5 <= 0)
  return -VAR_0;

 return FUNC_0(&VAR_6, VAR_1, VAR_2, VAR_5);
}
