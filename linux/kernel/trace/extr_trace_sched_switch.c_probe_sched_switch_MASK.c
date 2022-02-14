
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct task_struct*,struct task_struct*,int) ;

__attribute__((used)) static void
FUNC_1(void *VAR_4, bool VAR_5,
     struct task_struct *VAR_6, struct task_struct *VAR_7)
{
 int VAR_8;

 VAR_8 = (VAR_1 * !!VAR_3) +
  (VAR_0 * !!VAR_2);

 if (!VAR_8)
  return;
 FUNC_0(VAR_6, VAR_7, VAR_8);
}
