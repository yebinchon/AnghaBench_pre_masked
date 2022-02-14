
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {scalar_t__ parent; scalar_t__ state; scalar_t__ ptrace; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct task_struct*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (struct task_struct*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct task_struct *VAR_4, bool VAR_5)
{
 int VAR_6 = -VAR_0;
 FUNC_2(&VAR_3);
 if (VAR_4->ptrace && VAR_4->parent == VAR_2) {
  FUNC_0(VAR_4->state == VAR_1);




  if (VAR_5 || FUNC_1(VAR_4))
   VAR_6 = 0;
 }
 FUNC_3(&VAR_3);

 if (!VAR_6 && !VAR_5) {
  if (!FUNC_4(VAR_4, VAR_1)) {





   FUNC_0(VAR_4->state == VAR_1);
   VAR_6 = -VAR_0;
  }
 }

 return VAR_6;
}
