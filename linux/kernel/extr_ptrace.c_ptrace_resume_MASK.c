
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {unsigned long exit_code; TYPE_1__* sighand; } ;
struct TYPE_2__ {int siglock; } ;


 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct task_struct*,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (long) ;
 scalar_t__ FUNC_4 (long) ;
 scalar_t__ FUNC_5 (long) ;
 int FUNC_6 (struct task_struct*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (struct task_struct*) ;
 int FUNC_12 (struct task_struct*) ;
 int FUNC_13 (struct task_struct*) ;
 int FUNC_14 (unsigned long) ;
 int FUNC_15 (struct task_struct*,int ) ;

__attribute__((used)) static int FUNC_16(struct task_struct *VAR_8, long VAR_9,
    unsigned long VAR_10)
{
 bool VAR_11;

 if (!FUNC_14(VAR_10))
  return -VAR_0;

 if (VAR_9 == VAR_1)
  FUNC_6(VAR_8, VAR_5);
 else
  FUNC_2(VAR_8, VAR_5);
 if (FUNC_3(VAR_9)) {
  if (FUNC_10(!FUNC_0()))
   return -VAR_0;
  FUNC_12(VAR_8);
 } else if (FUNC_4(VAR_9) || FUNC_5(VAR_9)) {
  if (FUNC_10(!FUNC_1()))
   return -VAR_0;
  FUNC_13(VAR_8);
 } else {
  FUNC_11(VAR_8);
 }
 VAR_11 = VAR_10 && !FUNC_9(VAR_7);
 if (VAR_11)
  FUNC_7(&VAR_8->sighand->siglock);
 VAR_8->exit_code = VAR_10;
 FUNC_15(VAR_8, VAR_6);
 if (VAR_11)
  FUNC_8(&VAR_8->sighand->siglock);

 return 0;
}
