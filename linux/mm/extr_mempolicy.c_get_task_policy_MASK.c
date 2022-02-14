
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {struct mempolicy* mempolicy; } ;
struct mempolicy {scalar_t__ mode; } ;


 int VAR_0 ;
 struct mempolicy VAR_1 ;
 int FUNC_0 () ;
 struct mempolicy* VAR_2 ;

struct mempolicy *FUNC_1(struct task_struct *VAR_3)
{
 struct mempolicy *VAR_4 = VAR_3->mempolicy;
 int VAR_5;

 if (VAR_4)
  return VAR_4;

 VAR_5 = FUNC_0();
 if (VAR_5 != VAR_0) {
  VAR_4 = &VAR_2[VAR_5];

  if (VAR_4->mode)
   return VAR_4;
 }

 return &VAR_1;
}
