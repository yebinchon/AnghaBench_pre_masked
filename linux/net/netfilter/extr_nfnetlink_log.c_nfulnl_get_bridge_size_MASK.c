
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sk_buff {scalar_t__ network_header; scalar_t__ mac_header; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff const*) ;
 scalar_t__ FUNC_2 (struct sk_buff const*) ;

__attribute__((used)) static u32 FUNC_3(const struct sk_buff *VAR_0)
{
 u32 VAR_1 = 0;

 if (!FUNC_1(VAR_0))
  return 0;

 if (FUNC_2(VAR_0)) {
  VAR_1 += FUNC_0(0);
  VAR_1 += FUNC_0(sizeof(u16));
  VAR_1 += FUNC_0(sizeof(u16));
 }

 if (VAR_0->network_header > VAR_0->mac_header)
  VAR_1 += FUNC_0(VAR_0->network_header - VAR_0->mac_header);

 return VAR_1;
}
