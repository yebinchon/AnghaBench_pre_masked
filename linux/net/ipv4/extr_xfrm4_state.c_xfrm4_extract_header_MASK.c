
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct iphdr {int ihl; int ttl; int tos; int frag_off; int id; } ;
struct TYPE_2__ {int ihl; int optlen; int flow_lbl; int ttl; int tos; int frag_off; int id; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 struct iphdr* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int ,int) ;

int FUNC_3(struct sk_buff *VAR_0)
{
 const struct iphdr *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_0)->ihl = sizeof(*VAR_1);
 FUNC_0(VAR_0)->id = VAR_1->id;
 FUNC_0(VAR_0)->frag_off = VAR_1->frag_off;
 FUNC_0(VAR_0)->tos = VAR_1->tos;
 FUNC_0(VAR_0)->ttl = VAR_1->ttl;
 FUNC_0(VAR_0)->optlen = VAR_1->ihl * 4 - sizeof(*VAR_1);
 FUNC_2(FUNC_0(VAR_0)->flow_lbl, 0,
        sizeof(FUNC_0(VAR_0)->flow_lbl));

 return 0;
}
