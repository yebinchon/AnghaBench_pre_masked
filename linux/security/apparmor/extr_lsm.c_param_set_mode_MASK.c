
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int ,char const*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(const char *VAR_7, const struct kernel_param *VAR_8)
{
 int VAR_9;

 if (!VAR_5)
  return -VAR_1;
 if (!VAR_7)
  return -VAR_1;
 if (VAR_6 && !FUNC_1(((void*)0)))
  return -VAR_2;

 VAR_9 = FUNC_0(VAR_4, VAR_0,
    VAR_7);
 if (VAR_9 < 0)
  return -VAR_1;

 VAR_3 = VAR_9;
 return 0;
}
