
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 char** VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,char*,char*) ;

__attribute__((used)) static int FUNC_2(char *VAR_6, const struct kernel_param *VAR_7)
{
 if (!VAR_4)
  return -VAR_0;
 if (VAR_5 && !FUNC_0(((void*)0)))
  return -VAR_1;

 return FUNC_1(VAR_6, "%s", VAR_3[VAR_2]);
}
