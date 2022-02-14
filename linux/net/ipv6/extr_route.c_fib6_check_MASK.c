
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct fib6_info {int dummy; } ;


 scalar_t__ FUNC_0 (struct fib6_info*) ;
 int FUNC_1 (struct fib6_info*,scalar_t__*) ;

__attribute__((used)) static bool FUNC_2(struct fib6_info *VAR_0, u32 VAR_1)
{
 u32 VAR_2 = 0;

 if (!FUNC_1(VAR_0, &VAR_2) || VAR_2 != VAR_1)
  return 0;

 if (FUNC_0(VAR_0))
  return 0;

 return 1;
}
