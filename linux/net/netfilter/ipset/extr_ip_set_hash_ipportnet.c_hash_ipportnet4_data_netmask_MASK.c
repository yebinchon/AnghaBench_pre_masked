
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct hash_ipportnet4_elem {scalar_t__ cidr; int ip2; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline void
FUNC_1(struct hash_ipportnet4_elem *VAR_0, u8 VAR_1)
{
 VAR_0->ip2 &= FUNC_0(VAR_1);
 VAR_0->cidr = VAR_1 - 1;
}
