
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct tc_vlan {int dummy; } ;
struct tc_action {int dummy; } ;


 size_t FUNC_0 (int) ;

__attribute__((used)) static size_t FUNC_1(const struct tc_action *VAR_0)
{
 return FUNC_0(sizeof(struct tc_vlan))
  + FUNC_0(sizeof(u16))
  + FUNC_0(sizeof(u16))
  + FUNC_0(sizeof(u8));
}
