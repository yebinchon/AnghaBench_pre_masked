
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct policydb {int te_cond_avtab; int * cond_list; int * bool_val_to_struct; } ;


 int FUNC_0 (int *) ;

int FUNC_1(struct policydb *VAR_0)
{
 int VAR_1;

 VAR_0->bool_val_to_struct = ((void*)0);
 VAR_0->cond_list = ((void*)0);

 VAR_1 = FUNC_0(&VAR_0->te_cond_avtab);
 if (VAR_1)
  return VAR_1;

 return 0;
}
