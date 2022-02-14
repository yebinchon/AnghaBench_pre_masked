
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {unsigned int ptrace; } ;
struct TYPE_2__ {int ptrace; int seccomp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 unsigned int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_10 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (unsigned long) ;

__attribute__((used)) static int FUNC_4(struct task_struct *VAR_11, unsigned long VAR_12)
{
 unsigned VAR_13;

 if (VAR_12 & ~(unsigned long)VAR_5)
  return -VAR_3;

 if (FUNC_3(VAR_12 & VAR_6)) {
  if (!FUNC_0(VAR_1) ||
      !FUNC_0(VAR_2))
   return -VAR_3;

  if (!FUNC_1(VAR_0))
   return -VAR_4;

  if (FUNC_2(&VAR_10->seccomp) != VAR_9 ||
      VAR_10->ptrace & VAR_8)
   return -VAR_4;
 }


 VAR_13 = VAR_11->ptrace;
 VAR_13 &= ~(VAR_5 << VAR_7);
 VAR_13 |= (VAR_12 << VAR_7);
 VAR_11->ptrace = VAR_13;

 return 0;
}
