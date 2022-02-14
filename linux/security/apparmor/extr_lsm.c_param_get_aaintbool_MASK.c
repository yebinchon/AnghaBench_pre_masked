
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int* arg; } ;
typedef int kp_local ;


 int FUNC_0 (struct kernel_param*,struct kernel_param const*,int) ;
 int FUNC_1 (char*,struct kernel_param*) ;

__attribute__((used)) static int FUNC_2(char *VAR_0, const struct kernel_param *VAR_1)
{
 struct kernel_param VAR_2;
 bool VAR_3;


 VAR_3 = !!*((int *)VAR_1->arg);
 FUNC_0(&VAR_2, VAR_1, sizeof(VAR_2));
 VAR_2.arg = &VAR_3;

 return FUNC_1(VAR_0, &VAR_2);
}
