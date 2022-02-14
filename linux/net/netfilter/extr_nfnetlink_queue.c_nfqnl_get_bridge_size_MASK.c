
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ network_header; scalar_t__ mac_header; } ;
struct TYPE_2__ {scalar_t__ pf; } ;
struct nf_queue_entry {TYPE_1__ state; struct sk_buff* skb; } ;
typedef int __be16 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static u32 FUNC_3(struct nf_queue_entry *VAR_1)
{
 struct sk_buff *VAR_2 = VAR_1->skb;
 u32 VAR_3 = 0;

 if (VAR_1->state.pf != VAR_0 || !FUNC_1(VAR_2))
  return 0;

 if (FUNC_2(VAR_2))
  VAR_3 += FUNC_0(FUNC_0(sizeof(__be16)) +
      FUNC_0(sizeof(__be16)));

 if (VAR_2->network_header > VAR_2->mac_header)
  VAR_3 += FUNC_0((VAR_2->network_header -
       VAR_2->mac_header));

 return VAR_3;
}
