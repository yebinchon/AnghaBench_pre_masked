
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int unwind_entry_cb_t ;
struct thread {TYPE_2__* mg; } ;
struct perf_sample {int dummy; } ;
struct TYPE_4__ {TYPE_1__* unwind_libunwind_ops; } ;
struct TYPE_3__ {int (* get_entries ) (int ,void*,struct thread*,struct perf_sample*,int) ;} ;


 int FUNC_0 (int ,void*,struct thread*,struct perf_sample*,int) ;

int FUNC_1(unwind_entry_cb_t VAR_0, void *VAR_1,
    struct thread *VAR_2,
    struct perf_sample *VAR_3, int VAR_4)
{
 if (VAR_2->mg->unwind_libunwind_ops)
  return VAR_2->mg->unwind_libunwind_ops->get_entries(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 return 0;
}
