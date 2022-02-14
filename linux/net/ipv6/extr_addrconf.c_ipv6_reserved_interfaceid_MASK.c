
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int* s6_addr32; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static bool FUNC_1(struct in6_addr VAR_0)
{
 if ((VAR_0.s6_addr32[2] | VAR_0.s6_addr32[3]) == 0)
  return 1;

 if (VAR_0.s6_addr32[2] == FUNC_0(0x02005eff) &&
     ((VAR_0.s6_addr32[3] & FUNC_0(0xfe000000)) == FUNC_0(0xfe000000)))
  return 1;

 if (VAR_0.s6_addr32[2] == FUNC_0(0xfdffffff) &&
     ((VAR_0.s6_addr32[3] & FUNC_0(0xffffff80)) == FUNC_0(0xffffff80)))
  return 1;

 return 0;
}
