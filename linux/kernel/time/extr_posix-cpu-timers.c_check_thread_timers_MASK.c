
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {unsigned long timeout; } ;
struct posix_cputimers {int dummy; } ;
struct task_struct {TYPE_3__* signal; TYPE_1__ rt; struct posix_cputimers posix_cputimers; } ;
struct list_head {int dummy; } ;
struct TYPE_6__ {TYPE_2__* rlim; } ;
struct TYPE_5__ {unsigned long rlim_cur; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 size_t VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_0 (struct task_struct*) ;
 scalar_t__ FUNC_1 (unsigned long,unsigned long,int ,int,int) ;
 int FUNC_2 (struct posix_cputimers*,int *,struct list_head*) ;
 scalar_t__ FUNC_3 (struct task_struct*) ;
 scalar_t__ FUNC_4 (struct posix_cputimers*) ;
 unsigned long FUNC_5 (struct task_struct*,size_t) ;
 unsigned long FUNC_6 (struct task_struct*,size_t) ;
 int FUNC_7 (struct task_struct*,int *) ;
 int FUNC_8 (struct task_struct*,int ) ;

__attribute__((used)) static void FUNC_9(struct task_struct *VAR_8,
    struct list_head *VAR_9)
{
 struct posix_cputimers *VAR_10 = &VAR_8->posix_cputimers;
 u64 VAR_11[VAR_0];
 unsigned long VAR_12;

 if (FUNC_3(VAR_8))
  FUNC_0(VAR_8);

 if (FUNC_4(VAR_10))
  return;

 FUNC_7(VAR_8, VAR_11);
 FUNC_2(VAR_10, VAR_11, VAR_9);




 VAR_12 = FUNC_5(VAR_8, VAR_2);
 if (VAR_12 != VAR_3) {

  unsigned long VAR_13 = VAR_8->rt.timeout * (VAR_7 / VAR_1);
  unsigned long VAR_14 = FUNC_6(VAR_8, VAR_2);


  if (VAR_14 != VAR_3 &&
      FUNC_1(VAR_13, VAR_14, VAR_4, 1, 1))
   return;


  if (FUNC_1(VAR_13, VAR_12, VAR_5, 1, 0)) {
   VAR_12 += VAR_7;
   VAR_8->signal->rlim[VAR_2].rlim_cur = VAR_12;
  }
 }

 if (FUNC_4(VAR_10))
  FUNC_8(VAR_8, VAR_6);
}
