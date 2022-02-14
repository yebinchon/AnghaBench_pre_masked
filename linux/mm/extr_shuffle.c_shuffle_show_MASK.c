
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,char) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(char *VAR_2, const struct kernel_param *VAR_3)
{
 return FUNC_0(VAR_2, "%c\n", FUNC_1(VAR_0, &VAR_1)
   ? 'Y' : 'N');
}
