
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {scalar_t__ arg; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,char*) ;

int FUNC_1(char *VAR_1, const struct kernel_param *VAR_2)
{
 return FUNC_0(VAR_1, VAR_0, "%s\n", *((char **)VAR_2->arg));
}
