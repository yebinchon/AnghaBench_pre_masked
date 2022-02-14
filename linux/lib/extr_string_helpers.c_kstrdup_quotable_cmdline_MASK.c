
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct task_struct*,char*,scalar_t__) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (scalar_t__,int ) ;
 char* FUNC_3 (char*,int ) ;

char *FUNC_4(struct task_struct *VAR_2, gfp_t VAR_3)
{
 char *VAR_4, *VAR_5;
 int VAR_6, VAR_7;

 VAR_4 = FUNC_2(VAR_1, VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_7 = FUNC_0(VAR_2, VAR_4, VAR_1 - 1);
 VAR_4[VAR_7] = '\0';


 while (--VAR_7 >= 0 && VAR_4[VAR_7] == '\0')
  ;


 for (VAR_6 = 0; VAR_6 <= VAR_7; VAR_6++)
  if (VAR_4[VAR_6] == '\0')
   VAR_4[VAR_6] = ' ';


 VAR_5 = FUNC_3(VAR_4, VAR_3);
 FUNC_1(VAR_4);
 return VAR_5;
}
