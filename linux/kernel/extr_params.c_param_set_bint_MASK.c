
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int* arg; } ;


 int FUNC_0 (char const*,struct kernel_param*) ;

int FUNC_1(const char *VAR_0, const struct kernel_param *VAR_1)
{

 struct kernel_param VAR_2 = *VAR_1;
 bool VAR_3;
 int VAR_4;

 VAR_2.arg = &VAR_3;

 VAR_4 = FUNC_0(VAR_0, &VAR_2);
 if (VAR_4 == 0)
  *(int *)VAR_1->arg = VAR_3;
 return VAR_4;
}
