
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct iphdr {int ihl; int daddr; int saddr; } ;
struct ip_options {int optlen; int srr; } ;
struct in_device {int dummy; } ;
struct TYPE_2__ {struct ip_options opt; } ;


 scalar_t__ FUNC_0 (struct in_device*) ;
 int FUNC_1 (struct in_device*) ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 struct in_device* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 struct iphdr* FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int ,struct ip_options*,struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct sk_buff*,struct net_device*) ;
 int FUNC_9 (char*,int *,int *) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int ) ;
 int FUNC_11 (struct sk_buff*) ;
 scalar_t__ FUNC_12 (int ) ;

__attribute__((used)) static inline bool FUNC_13(struct sk_buff *VAR_2, struct net_device *VAR_3)
{
 struct ip_options *VAR_4;
 const struct iphdr *VAR_5;
 if (FUNC_10(VAR_2, FUNC_11(VAR_2))) {
  FUNC_3(FUNC_5(VAR_3), VAR_0);
  goto drop;
 }

 VAR_5 = FUNC_6(VAR_2);
 VAR_4 = &(FUNC_2(VAR_2)->opt);
 VAR_4->optlen = VAR_5->ihl*4 - sizeof(struct iphdr);

 if (FUNC_7(FUNC_5(VAR_3), VAR_4, VAR_2)) {
  FUNC_3(FUNC_5(VAR_3), VAR_1);
  goto drop;
 }

 if (FUNC_12(VAR_4->srr)) {
  struct in_device *VAR_6 = FUNC_4(VAR_3);

  if (VAR_6) {
   if (!FUNC_1(VAR_6)) {
    if (FUNC_0(VAR_6))
     FUNC_9("source route option %pI4 -> %pI4\n",
            &VAR_5->saddr,
            &VAR_5->daddr);
    goto drop;
   }
  }

  if (FUNC_8(VAR_2, VAR_3))
   goto drop;
 }

 return 0;
drop:
 return 1;
}
