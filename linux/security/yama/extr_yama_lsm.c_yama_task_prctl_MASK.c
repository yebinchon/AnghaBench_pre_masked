
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int group_leader; } ;


 int VAR_0 ;
 int VAR_1 ;

 unsigned long VAR_2 ;
 struct task_struct* VAR_3 ;
 struct task_struct* FUNC_0 (unsigned long) ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct task_struct*) ;
 struct task_struct* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct task_struct*) ;
 int FUNC_7 (struct task_struct*,struct task_struct*) ;
 int FUNC_8 (int *,struct task_struct*) ;

__attribute__((used)) static int FUNC_9(int VAR_4, unsigned long VAR_5, unsigned long VAR_6,
      unsigned long VAR_7, unsigned long VAR_8)
{
 int VAR_9 = -VAR_1;
 struct task_struct *VAR_10 = VAR_3;

 switch (VAR_4) {
 case 128:






  FUNC_4();
  if (!FUNC_6(VAR_10))
   VAR_10 = FUNC_3(VAR_10->group_leader);
  FUNC_1(VAR_10);
  FUNC_5();

  if (VAR_5 == 0) {
   FUNC_8(((void*)0), VAR_10);
   VAR_9 = 0;
  } else if (VAR_5 == VAR_2 || (int)VAR_5 == -1) {
   VAR_9 = FUNC_7(((void*)0), VAR_10);
  } else {
   struct task_struct *VAR_11;

   VAR_11 = FUNC_0(VAR_5);
   if (!VAR_11) {
    VAR_9 = -VAR_0;
   } else {
    VAR_9 = FUNC_7(VAR_11, VAR_10);
    FUNC_2(VAR_11);
   }
  }

  FUNC_2(VAR_10);
  break;
 }

 return VAR_9;
}
