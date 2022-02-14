
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ethhdr {int h_proto; } ;
struct batadv_priv {int multicast_mode; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct batadv_priv*,struct sk_buff*,int*,int*) ;
 int FUNC_3 (struct batadv_priv*,struct sk_buff*,int*,int*) ;
 struct ethhdr* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct batadv_priv *VAR_2,
     struct sk_buff *VAR_3,
     bool *VAR_4,
     int *VAR_5)
{
 struct ethhdr *VAR_6 = FUNC_4(VAR_3);

 if (!FUNC_1(&VAR_2->multicast_mode))
  return -VAR_1;

 switch (FUNC_5(VAR_6->h_proto)) {
 case 129:
  return FUNC_2(VAR_2, VAR_3,
        VAR_4,
        VAR_5);
 case 128:
  if (!FUNC_0(VAR_0))
   return -VAR_1;

  return FUNC_3(VAR_2, VAR_3,
        VAR_4,
        VAR_5);
 default:
  return -VAR_1;
 }
}
