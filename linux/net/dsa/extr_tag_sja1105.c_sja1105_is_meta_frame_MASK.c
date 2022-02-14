
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct sk_buff {int dummy; } ;
struct ethhdr {int h_proto; int h_dest; int h_source; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct ethhdr* FUNC_0 (struct sk_buff const*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static inline bool FUNC_3(const struct sk_buff *VAR_3)
{
 const struct ethhdr *VAR_4 = FUNC_0(VAR_3);
 u64 VAR_5 = FUNC_1(VAR_4->h_source);
 u64 VAR_6 = FUNC_1(VAR_4->h_dest);

 if (VAR_5 != VAR_2)
  return 0;
 if (VAR_6 != VAR_1)
  return 0;
 if (FUNC_2(VAR_4->h_proto) != VAR_0)
  return 0;
 return 1;
}
