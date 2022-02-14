
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ipv6hdr {int daddr; } ;
struct ethhdr {int dummy; } ;
struct batadv_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int *) ;
 struct ipv6hdr* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_5(struct batadv_priv *VAR_4,
          struct sk_buff *VAR_5,
          bool *VAR_6,
          int *VAR_7)
{
 struct ipv6hdr *VAR_8;


 if (!FUNC_4(VAR_5, sizeof(struct ethhdr) + sizeof(*VAR_8)))
  return -VAR_1;

 if (FUNC_1(VAR_5))
  return -VAR_0;

 VAR_8 = FUNC_3(VAR_5);

 if (FUNC_0(&VAR_8->daddr) < VAR_3)
  return -VAR_0;




 if (FUNC_2(&VAR_8->daddr))
  *VAR_6 = 1;
 else if (FUNC_0(&VAR_8->daddr) > VAR_3)
  *VAR_7 = VAR_2;

 return 0;
}
