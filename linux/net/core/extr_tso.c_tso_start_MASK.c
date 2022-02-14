
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tso_t {size_t next_frag_idx; int ipv6; scalar_t__ size; scalar_t__ data; int tcp_seq; int ip_id; } ;
struct sk_buff {scalar_t__ data; } ;
typedef int skb_frag_t ;
struct TYPE_6__ {int id; } ;
struct TYPE_5__ {size_t nr_frags; int * frags; } ;
struct TYPE_4__ {int seq; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 TYPE_2__* FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 TYPE_1__* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 scalar_t__ FUNC_11 (struct sk_buff*) ;

void FUNC_12(struct sk_buff *VAR_1, struct tso_t *VAR_2)
{
 int VAR_3 = FUNC_8(VAR_1) + FUNC_10(VAR_1);

 VAR_2->ip_id = FUNC_3(FUNC_1(VAR_1)->id);
 VAR_2->tcp_seq = FUNC_2(FUNC_9(VAR_1)->seq);
 VAR_2->next_frag_idx = 0;
 VAR_2->ipv6 = FUNC_11(VAR_1) == FUNC_0(VAR_0);


 VAR_2->size = FUNC_6(VAR_1) - VAR_3;
 VAR_2->data = VAR_1->data + VAR_3;
 if ((VAR_2->size == 0) &&
     (VAR_2->next_frag_idx < FUNC_7(VAR_1)->nr_frags)) {
  skb_frag_t *VAR_4 = &FUNC_7(VAR_1)->frags[VAR_2->next_frag_idx];


  VAR_2->size = FUNC_5(VAR_4);
  VAR_2->data = FUNC_4(VAR_4);
  VAR_2->next_frag_idx++;
 }
}
