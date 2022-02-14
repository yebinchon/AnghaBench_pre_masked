
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct lowpan_addr_info {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff const*) ;

__attribute__((used)) static inline struct
lowpan_addr_info *FUNC_2(const struct sk_buff *VAR_0)
{
 FUNC_0(FUNC_1(VAR_0) < sizeof(struct lowpan_addr_info));
 return (struct lowpan_addr_info *)(VAR_0->data -
   sizeof(struct lowpan_addr_info));
}
