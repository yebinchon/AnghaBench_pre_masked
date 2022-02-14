
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {scalar_t__ arg; } ;






 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_2(char *VAR_0, const struct kernel_param *VAR_1)
{
 int *VAR_2 = (int *)VAR_1->arg;

 switch (*VAR_2)
 {
 case 131:
  return FUNC_1(VAR_0, "auto", 20);
 case 130:
  return FUNC_1(VAR_0, "global", 20);
 case 129:
  return FUNC_1(VAR_0, "percpu", 20);
 case 128:
  return FUNC_1(VAR_0, "pernode", 20);
 default:
  return FUNC_0(VAR_0, "%d", *VAR_2);
 }
}
