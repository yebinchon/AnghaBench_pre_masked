
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 scalar_t__ FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 struct task_struct* FUNC_4 (int (*) (void*),void*,char*,char*) ;
 int FUNC_5 (struct task_struct*) ;

int FUNC_6(int (*VAR_0)(void *VAR_1), void *VAR_2, char *VAR_3, char *VAR_4,
       char *VAR_5, struct task_struct **VAR_6)
{
 int VAR_7 = 0;

 FUNC_3(VAR_4);
 *VAR_6 = FUNC_4(VAR_0, VAR_2, "%s", VAR_3);
 if (FUNC_0(*VAR_6)) {
  VAR_7 = FUNC_1(*VAR_6);
  FUNC_2(VAR_5);
  *VAR_6 = ((void*)0);
 }
 FUNC_5(*VAR_6);
 return VAR_7;
}
