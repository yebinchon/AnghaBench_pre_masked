
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int* s6_addr32; } ;


 int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(const struct in6_addr *VAR_1)
{



 return (VAR_1->s6_addr32[3] & (VAR_0 - 1));
}
