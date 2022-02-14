
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_msg {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct tipc_msg*) ;
 scalar_t__ FUNC_2 (struct tipc_msg*) ;

__attribute__((used)) static inline bool FUNC_3(struct tipc_msg *VAR_2)
{
 if (FUNC_0(FUNC_2(VAR_2) != VAR_0))
  return 1;
 if (FUNC_1(VAR_2) == VAR_1)
  return 1;
 return 0;
}
