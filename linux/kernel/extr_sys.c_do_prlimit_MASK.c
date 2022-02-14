
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int group_leader; TYPE_1__* signal; int sighand; } ;
struct rlimit {scalar_t__ rlim_cur; scalar_t__ rlim_max; } ;
struct TYPE_2__ {struct rlimit* rlim; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct task_struct*,unsigned int,struct rlimit*) ;
 scalar_t__ VAR_9 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_10 ;
 int FUNC_7 (struct task_struct*,scalar_t__) ;

int FUNC_8(struct task_struct *VAR_11, unsigned int VAR_12,
  struct rlimit *VAR_13, struct rlimit *VAR_14)
{
 struct rlimit *VAR_15;
 int VAR_16 = 0;

 if (VAR_12 >= VAR_8)
  return -VAR_2;
 if (VAR_13) {
  if (VAR_13->rlim_cur > VAR_13->rlim_max)
   return -VAR_2;
  if (VAR_12 == VAR_6 &&
    VAR_13->rlim_max > VAR_9)
   return -VAR_3;
 }


 FUNC_2(&VAR_10);
 if (!VAR_11->sighand) {
  VAR_16 = -VAR_4;
  goto out;
 }

 VAR_15 = VAR_11->signal->rlim + VAR_12;
 FUNC_5(VAR_11->group_leader);
 if (VAR_13) {


  if (VAR_13->rlim_max > VAR_15->rlim_max &&
    !FUNC_1(VAR_0))
   VAR_16 = -VAR_3;
  if (!VAR_16)
   VAR_16 = FUNC_4(VAR_11, VAR_12, VAR_13);
 }
 if (!VAR_16) {
  if (VAR_14)
   *VAR_14 = *VAR_15;
  if (VAR_13)
   *VAR_15 = *VAR_13;
 }
 FUNC_6(VAR_11->group_leader);






  if (!VAR_16 && VAR_13 && VAR_12 == VAR_5 &&
      VAR_13->rlim_cur != VAR_7 &&
      FUNC_0(VAR_1))
  FUNC_7(VAR_11, VAR_13->rlim_cur);
out:
 FUNC_3(&VAR_10);
 return VAR_16;
}
