
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfrm_address_t ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct in6_addr const*) ;

__attribute__((used)) static inline unsigned int FUNC_1(const xfrm_address_t *VAR_1)
{
 unsigned int VAR_2;

 VAR_2 = FUNC_0((const struct in6_addr *)VAR_1);
 VAR_2 ^= VAR_2 >> 16;
 VAR_2 ^= VAR_2 >> 8;
 VAR_2 &= VAR_0 - 1;

 return VAR_2;
}
