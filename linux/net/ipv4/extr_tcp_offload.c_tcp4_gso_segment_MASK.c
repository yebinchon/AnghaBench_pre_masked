
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcphdr {scalar_t__ check; } ;
struct sk_buff {scalar_t__ ip_summed; } ;
struct iphdr {int daddr; int saddr; } ;
typedef int netdev_features_t ;
struct TYPE_2__ {int gso_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;
 struct iphdr* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int) ;
 TYPE_1__* FUNC_4 (struct sk_buff*) ;
 struct sk_buff* FUNC_5 (struct sk_buff*,int ) ;
 struct tcphdr* FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_8(struct sk_buff *VAR_3,
     netdev_features_t VAR_4)
{
 if (!(FUNC_4(VAR_3)->gso_type & VAR_2))
  return FUNC_0(-VAR_1);

 if (!FUNC_3(VAR_3, sizeof(struct tcphdr)))
  return FUNC_0(-VAR_1);

 if (FUNC_7(VAR_3->ip_summed != VAR_0)) {
  const struct iphdr *VAR_5 = FUNC_2(VAR_3);
  struct tcphdr *VAR_6 = FUNC_6(VAR_3);





  VAR_6->check = 0;
  VAR_3->ip_summed = VAR_0;
  FUNC_1(VAR_3, VAR_5->saddr, VAR_5->daddr);
 }

 return FUNC_5(VAR_3, VAR_4);
}
