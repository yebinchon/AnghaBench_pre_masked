
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pid_namespace {int kref; struct pid_namespace* parent; } ;


 int VAR_0 ;
 struct pid_namespace VAR_1 ;
 int FUNC_0 (int *,int ) ;

void FUNC_1(struct pid_namespace *VAR_2)
{
 struct pid_namespace *VAR_3;

 while (VAR_2 != &VAR_1) {
  VAR_3 = VAR_2->parent;
  if (!FUNC_0(&VAR_2->kref, VAR_0))
   break;
  VAR_2 = VAR_3;
 }
}
