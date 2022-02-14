
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dialog_list {struct dialog_list* next; } ;


 struct dialog_list* VAR_0 ;

int FUNC_0(void)
{
 int VAR_1 = 0;
 struct dialog_list *VAR_2;

 for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next)
  VAR_1++;
 return VAR_1;
}
