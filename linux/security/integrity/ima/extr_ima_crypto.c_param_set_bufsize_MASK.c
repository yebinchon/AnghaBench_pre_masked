
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long long) ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long long FUNC_1 (char const*,int *) ;

__attribute__((used)) static int FUNC_2(const char *VAR_5, const struct kernel_param *VAR_6)
{
 unsigned long long VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(VAR_5, ((void*)0));
 VAR_8 = FUNC_0(VAR_7);
 if (VAR_8 >= VAR_1)
  return -VAR_0;
 VAR_4 = VAR_8;
 VAR_3 = VAR_2 << VAR_8;
 return 0;
}
