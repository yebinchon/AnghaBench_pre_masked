
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {scalar_t__ arg; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (unsigned long) ;
 int FUNC_1 (char const*,int ,unsigned long*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_2, const struct kernel_param *VAR_3)
{
 unsigned long VAR_4;
 unsigned int VAR_5;
 int VAR_6;

 if (!VAR_2)
  goto out_inval;
 VAR_6 = FUNC_1(VAR_2, 0, &VAR_4);
 if (VAR_6)
  goto out_inval;
 VAR_5 = FUNC_0(VAR_4 - 1);
 if (VAR_5 > VAR_1 || VAR_5 < 2)
  goto out_inval;
 *(unsigned int *)VAR_3->arg = VAR_5;
 return 0;
out_inval:
 return -VAR_0;
}
