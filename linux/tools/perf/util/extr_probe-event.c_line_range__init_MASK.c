
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_range {int line_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct line_range*,int ,int) ;

int FUNC_2(struct line_range *VAR_1)
{
 FUNC_1(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->line_list = FUNC_0(((void*)0));
 if (!VAR_1->line_list)
  return -VAR_0;
 else
  return 0;
}
