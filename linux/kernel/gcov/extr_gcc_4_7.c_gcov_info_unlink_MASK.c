
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcov_info {int next; } ;


 int VAR_0 ;

void FUNC_0(struct gcov_info *VAR_1, struct gcov_info *VAR_2)
{
 if (VAR_1)
  VAR_1->next = VAR_2->next;
 else
  VAR_0 = VAR_2->next;
}
