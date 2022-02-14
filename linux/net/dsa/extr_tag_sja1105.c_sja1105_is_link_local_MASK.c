
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sk_buff {int dummy; } ;
struct ethhdr {int h_proto; int h_dest; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ethhdr* FUNC_0 (struct sk_buff const*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static inline bool FUNC_3(const struct sk_buff *VAR_5)
{
 const struct ethhdr *VAR_6 = FUNC_0(VAR_5);
 u64 VAR_7 = FUNC_1(VAR_6->h_dest);

 if (FUNC_2(VAR_6->h_proto) == VAR_0)
  return 0;
 if ((VAR_7 & VAR_2) ==
      VAR_1)
  return 1;
 if ((VAR_7 & VAR_4) ==
      VAR_3)
  return 1;
 return 0;
}
