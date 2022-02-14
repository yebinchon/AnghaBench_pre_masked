
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,...) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(char *VAR_2, const struct kernel_param *VAR_3)
{
 if (FUNC_3(&VAR_0))
  return FUNC_2(VAR_2, "fallback\n");

 return FUNC_2(VAR_2, "%s\n",
  FUNC_1(FUNC_0(VAR_1)));
}
