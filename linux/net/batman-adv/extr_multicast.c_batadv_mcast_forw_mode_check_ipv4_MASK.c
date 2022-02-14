
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct iphdr {int daddr; } ;
struct ethhdr {int dummy; } ;
struct batadv_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 struct iphdr* FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_4(struct batadv_priv *VAR_3,
          struct sk_buff *VAR_4,
          bool *VAR_5,
          int *VAR_6)
{
 struct iphdr *VAR_7;


 if (!FUNC_3(VAR_4, sizeof(struct ethhdr) + sizeof(*VAR_7)))
  return -VAR_1;

 if (FUNC_0(VAR_4))
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_4);




 if (FUNC_2(VAR_7->daddr))
  *VAR_5 = 1;
 else
  *VAR_6 = VAR_2;

 return 0;
}
