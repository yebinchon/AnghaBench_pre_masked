
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {scalar_t__* s6_addr32; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline int
FUNC_1(const struct in6_addr *VAR_0, const struct in6_addr *VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < 4; ++VAR_2) {
  if (VAR_0->s6_addr32[VAR_2] != VAR_1->s6_addr32[VAR_2])
   return FUNC_0(VAR_0->s6_addr32[VAR_2]) < FUNC_0(VAR_1->s6_addr32[VAR_2]);
 }

 return 0;
}
