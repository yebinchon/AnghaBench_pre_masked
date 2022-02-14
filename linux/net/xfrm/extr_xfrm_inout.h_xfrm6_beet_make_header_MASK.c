
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ipv6hdr {int version; int hop_limit; int nexthdr; int flow_lbl; } ;
struct TYPE_2__ {int ttl; int tos; int protocol; int flow_lbl; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct ipv6hdr*,int ,int ) ;
 struct ipv6hdr* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static inline void FUNC_4(struct sk_buff *VAR_0)
{
 struct ipv6hdr *VAR_1 = FUNC_2(VAR_0);

 VAR_1->version = 6;

 FUNC_3(VAR_1->flow_lbl, FUNC_0(VAR_0)->flow_lbl,
        sizeof(VAR_1->flow_lbl));
 VAR_1->nexthdr = FUNC_0(VAR_0)->protocol;

 FUNC_1(VAR_1, 0, FUNC_0(VAR_0)->tos);
 VAR_1->hop_limit = FUNC_0(VAR_0)->ttl;
}
