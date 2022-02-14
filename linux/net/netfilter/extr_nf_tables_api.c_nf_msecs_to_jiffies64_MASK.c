
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (struct nlattr const*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(const struct nlattr *VAR_2, u64 *VAR_3)
{
 u64 VAR_4 = FUNC_0(FUNC_2(VAR_2));
 u64 VAR_5 = (u64)(~((u64)0));

 VAR_5 = FUNC_1(VAR_5, VAR_1);
 if (VAR_4 >= VAR_5)
  return -VAR_0;

 VAR_4 *= VAR_1;
 *VAR_3 = FUNC_3(VAR_4);
 return 0;
}
