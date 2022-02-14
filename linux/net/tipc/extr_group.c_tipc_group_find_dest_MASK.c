
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_member {int dummy; } ;
struct tipc_group {int dummy; } ;


 struct tipc_member* FUNC_0 (struct tipc_group*,int ,int ) ;
 scalar_t__ FUNC_1 (struct tipc_member*) ;

__attribute__((used)) static struct tipc_member *FUNC_2(struct tipc_group *VAR_0,
      u32 VAR_1, u32 VAR_2)
{
 struct tipc_member *VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_3 && FUNC_1(VAR_3))
  return VAR_3;
 return ((void*)0);
}
