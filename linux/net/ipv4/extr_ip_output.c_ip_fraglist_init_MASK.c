
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {unsigned int len; scalar_t__ data_len; } ;
struct iphdr {void* frag_off; void* tot_len; } ;
struct ip_fraglist_iter {unsigned int hlen; struct iphdr* iph; scalar_t__ offset; int frag; } ;
struct TYPE_2__ {int frag_list; } ;


 unsigned int VAR_0 ;
 void* FUNC_0 (unsigned int) ;
 int FUNC_1 (struct iphdr*) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 unsigned int FUNC_4 (struct sk_buff*) ;
 TYPE_1__* FUNC_5 (struct sk_buff*) ;

void FUNC_6(struct sk_buff *VAR_1, struct iphdr *VAR_2,
        unsigned int VAR_3, struct ip_fraglist_iter *VAR_4)
{
 unsigned int VAR_5 = FUNC_4(VAR_1);

 VAR_4->frag = FUNC_5(VAR_1)->frag_list;
 FUNC_2(VAR_1);

 VAR_4->offset = 0;
 VAR_4->iph = VAR_2;
 VAR_4->hlen = VAR_3;

 VAR_1->data_len = VAR_5 - FUNC_3(VAR_1);
 VAR_1->len = VAR_5;
 VAR_2->tot_len = FUNC_0(VAR_5);
 VAR_2->frag_off = FUNC_0(VAR_0);
 FUNC_1(VAR_2);
}
