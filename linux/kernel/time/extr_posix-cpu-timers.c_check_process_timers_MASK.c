
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct task_struct {struct signal_struct* signal; } ;
struct TYPE_4__ {int cputime_atomic; } ;
struct posix_cputimers {int expiry_active; TYPE_3__* bases; int timers_active; } ;
struct signal_struct {TYPE_2__* rlim; int * it; TYPE_1__ cputimer; struct posix_cputimers posix_cputimers; } ;
struct list_head {int dummy; } ;
struct TYPE_6__ {scalar_t__ nextevt; } ;
struct TYPE_5__ {unsigned long rlim_cur; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 size_t VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct task_struct*,int *,scalar_t__*,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,int ,int,int) ;
 int FUNC_3 (struct posix_cputimers*,scalar_t__*,struct list_head*) ;
 scalar_t__ FUNC_4 (struct posix_cputimers*) ;
 int FUNC_5 (int *,scalar_t__*) ;
 int FUNC_6 (struct signal_struct* const) ;
 unsigned long FUNC_7 (struct task_struct*,size_t) ;
 unsigned long FUNC_8 (struct task_struct*,size_t) ;

__attribute__((used)) static void FUNC_9(struct task_struct *VAR_10,
     struct list_head *VAR_11)
{
 struct signal_struct *const VAR_12 = VAR_10->signal;
 struct posix_cputimers *VAR_13 = &VAR_12->posix_cputimers;
 u64 VAR_14[VAR_0];
 unsigned long VAR_15;






 if (!FUNC_0(VAR_13->timers_active) || VAR_13->expiry_active)
  return;





 VAR_13->expiry_active = 1;





 FUNC_5(&VAR_12->cputimer.cputime_atomic, VAR_14);
 FUNC_3(VAR_13, VAR_14, VAR_11);




 FUNC_1(VAR_10, &VAR_12->it[VAR_1],
    &VAR_13->bases[VAR_1].nextevt,
    VAR_14[VAR_1], VAR_7);
 FUNC_1(VAR_10, &VAR_12->it[VAR_2],
    &VAR_13->bases[VAR_2].nextevt,
    VAR_14[VAR_2], VAR_8);

 VAR_15 = FUNC_7(VAR_10, VAR_4);
 if (VAR_15 != VAR_5) {

  unsigned long VAR_16 = FUNC_8(VAR_10, VAR_4);
  u64 VAR_17 = VAR_14[VAR_1];
  u64 VAR_18 = (u64)VAR_15 * VAR_3;
  u64 VAR_19 = (u64)VAR_16 * VAR_3;


  if (VAR_16 != VAR_5 &&
      FUNC_2(VAR_17, VAR_19, VAR_6, 0, 1))
   return;


  if (FUNC_2(VAR_17, VAR_18, VAR_9, 0, 0)) {
   VAR_12->rlim[VAR_4].rlim_cur = VAR_15 + 1;
   VAR_18 += VAR_3;
  }


  if (VAR_18 < VAR_13->bases[VAR_1].nextevt)
   VAR_13->bases[VAR_1].nextevt = VAR_18;
 }

 if (FUNC_4(VAR_13))
  FUNC_6(VAR_12);

 VAR_13->expiry_active = 0;
}
