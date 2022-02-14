
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct mutex {int owner; } ;


 int FUNC_0 (unsigned long) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_1 (unsigned long) ;
 struct task_struct* FUNC_2 (unsigned long) ;
 unsigned long FUNC_3 (int *,unsigned long,unsigned long) ;
 unsigned long FUNC_4 (int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static inline struct task_struct *FUNC_6(struct mutex *VAR_4)
{
 unsigned long VAR_5, VAR_6 = (unsigned long)VAR_3;

 VAR_5 = FUNC_4(&VAR_4->owner);
 for (;;) {
  unsigned long VAR_7, VAR_8 = FUNC_1(VAR_5);
  unsigned long VAR_9 = VAR_5 & ~VAR_0;

  if (VAR_9) {
   if (FUNC_5(VAR_9 != VAR_6))
    break;

   if (FUNC_5(!(VAR_8 & VAR_2)))
    break;

   VAR_8 &= ~VAR_2;
  } else {



  }






  VAR_8 &= ~VAR_1;

  VAR_7 = FUNC_3(&VAR_4->owner, VAR_5, VAR_6 | VAR_8);
  if (VAR_7 == VAR_5)
   return ((void*)0);

  VAR_5 = VAR_7;
 }

 return FUNC_2(VAR_5);
}
