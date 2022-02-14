
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct pppoe_hdr {int dummy; } ;
typedef int __be16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff const*) ;

__attribute__((used)) static inline __be16 FUNC_1(const struct sk_buff *VAR_1)
{
 return *((__be16 *)(FUNC_0(VAR_1) + VAR_0 +
       sizeof(struct pppoe_hdr)));
}
