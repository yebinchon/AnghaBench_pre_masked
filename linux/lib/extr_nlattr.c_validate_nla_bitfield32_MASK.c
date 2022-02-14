
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nlattr {int dummy; } ;
struct nla_bitfield32 {int const selector; int const value; } ;


 int VAR_0 ;
 struct nla_bitfield32* FUNC_0 (struct nlattr const*) ;

__attribute__((used)) static int FUNC_1(const struct nlattr *VAR_1,
       const u32 *VAR_2)
{
 const struct nla_bitfield32 *VAR_3 = FUNC_0(VAR_1);

 if (!VAR_2)
  return -VAR_0;


 if (VAR_3->selector & ~*VAR_2)
  return -VAR_0;


 if (VAR_3->value & ~*VAR_2)
  return -VAR_0;


 if (VAR_3->value & ~VAR_3->selector)
  return -VAR_0;

 return 0;
}
