
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int* s6_addr32; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline bool FUNC_1(const struct in6_addr *VAR_0)
{
 return (VAR_0->s6_addr32[2] | FUNC_0(0x02000000)) == FUNC_0(0x02005EFE);
}
