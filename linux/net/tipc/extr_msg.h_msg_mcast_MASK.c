
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_msg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tipc_msg*) ;

__attribute__((used)) static inline u32 FUNC_1(struct tipc_msg *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_3);

 return ((VAR_4 == VAR_2) || (VAR_4 == VAR_0) ||
  (VAR_4 == VAR_1));
}
