
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ethhdr {int h_source; int h_dest; } ;
struct batadv_hard_iface {int dummy; } ;


 struct ethhdr* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*,int) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (int) ;

bool FUNC_7(struct sk_buff *VAR_0,
        struct batadv_hard_iface *VAR_1,
        int VAR_2)
{
 struct ethhdr *VAR_3;


 if (FUNC_6(!FUNC_3(VAR_0, VAR_2)))
  return 0;

 VAR_3 = FUNC_0(VAR_0);


 if (!FUNC_1(VAR_3->h_dest))
  return 0;


 if (!FUNC_2(VAR_3->h_source))
  return 0;


 if (FUNC_4(VAR_0, 0) < 0)
  return 0;


 if (FUNC_5(VAR_0) < 0)
  return 0;

 return 1;
}
