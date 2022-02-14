
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nlattr const*) ;
 int FUNC_1 (int ) ;

int FUNC_2(const struct nlattr *VAR_1, int VAR_2, u32 *VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_1(FUNC_0(VAR_1));
 if (VAR_4 > VAR_2)
  return -VAR_0;

 *VAR_3 = VAR_4;
 return 0;
}
