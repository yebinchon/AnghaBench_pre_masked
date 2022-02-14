
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct tc_skbedit {int dummy; } ;
struct tc_action {int dummy; } ;


 size_t FUNC_0 (int) ;
 size_t FUNC_1 (int) ;

__attribute__((used)) static size_t FUNC_2(const struct tc_action *VAR_0)
{
 return FUNC_0(sizeof(struct tc_skbedit))
  + FUNC_0(sizeof(u32))
  + FUNC_0(sizeof(u16))
  + FUNC_0(sizeof(u32))
  + FUNC_0(sizeof(u16))
  + FUNC_0(sizeof(u32))
  + FUNC_1(sizeof(u64));
}
