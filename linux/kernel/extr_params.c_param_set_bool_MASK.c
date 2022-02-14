
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int arg; } ;


 int FUNC_0 (char const*,int ) ;

int FUNC_1(const char *VAR_0, const struct kernel_param *VAR_1)
{

 if (!VAR_0) VAR_0 = "1";


 return FUNC_0(VAR_0, VAR_1->arg);
}
