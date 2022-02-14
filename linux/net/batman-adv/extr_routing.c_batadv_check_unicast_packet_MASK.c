
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ethhdr {int h_dest; int h_source; } ;
struct batadv_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct batadv_priv*,int ) ;
 struct ethhdr* FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*,int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct batadv_priv *VAR_3,
           struct sk_buff *VAR_4, int VAR_5)
{
 struct ethhdr *VAR_6;


 if (FUNC_5(!FUNC_4(VAR_4, VAR_5)))
  return -VAR_1;

 VAR_6 = FUNC_1(VAR_4);


 if (!FUNC_3(VAR_6->h_dest))
  return -VAR_0;


 if (FUNC_2(VAR_6->h_source))
  return -VAR_0;


 if (!FUNC_0(VAR_3, VAR_6->h_dest))
  return -VAR_2;

 return 0;
}
