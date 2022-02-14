
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct in6_addr {scalar_t__* s6_addr32; } ;
typedef scalar_t__ __be64 ;


 scalar_t__ FUNC_0 (scalar_t__ const) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

int FUNC_2(const struct in6_addr *VAR_0,
   const struct in6_addr *VAR_1)
{
 u32 VAR_2, VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
  if (VAR_0->s6_addr32[VAR_4] != VAR_1->s6_addr32[VAR_4]) {
   VAR_2 = FUNC_1(VAR_0->s6_addr32[VAR_4]);
   VAR_3 = FUNC_1(VAR_1->s6_addr32[VAR_4]);
   if (VAR_2 < VAR_3)
    return -1;
   else if (VAR_2 > VAR_3)
    return 1;
  }
 }
 return 0;

}
