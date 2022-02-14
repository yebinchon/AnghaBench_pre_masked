
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dialog_list {struct dialog_list* next; } ;


 struct dialog_list* VAR_0 ;
 struct dialog_list* VAR_1 ;

int FUNC_0(void)
{
 int VAR_2 = 0;
 struct dialog_list *VAR_3;

 for (VAR_3 = VAR_1; VAR_3; VAR_3 = VAR_3->next) {
  if (VAR_3 == VAR_0)
   return VAR_2;
  VAR_2++;
 }
 return 0;
}
