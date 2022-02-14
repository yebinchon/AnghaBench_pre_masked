
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {scalar_t__ parent; int ptrace; } ;
struct mm_struct {int user_ns; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct task_struct*,struct mm_struct*,unsigned long,void*,int,unsigned int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct mm_struct*) ;
 struct mm_struct* FUNC_2 (struct task_struct*) ;
 int FUNC_3 (struct mm_struct*) ;
 int FUNC_4 (struct task_struct*,int ) ;

int FUNC_5(struct task_struct *VAR_2, unsigned long VAR_3,
       void *VAR_4, int VAR_5, unsigned int VAR_6)
{
 struct mm_struct *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(VAR_2);
 if (!VAR_7)
  return 0;

 if (!VAR_2->ptrace ||
     (VAR_1 != VAR_2->parent) ||
     ((FUNC_1(VAR_7) != VAR_0) &&
      !FUNC_4(VAR_2, VAR_7->user_ns))) {
  FUNC_3(VAR_7);
  return 0;
 }

 VAR_8 = FUNC_0(VAR_2, VAR_7, VAR_3, VAR_4, VAR_5, VAR_6);
 FUNC_3(VAR_7);

 return VAR_8;
}
