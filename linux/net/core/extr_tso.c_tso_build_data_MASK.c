
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tso_t {int tcp_seq; scalar_t__ size; int data; size_t next_frag_idx; } ;
struct sk_buff {int dummy; } ;
typedef int skb_frag_t ;
struct TYPE_2__ {size_t nr_frags; int * frags; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;

void FUNC_3(struct sk_buff *VAR_0, struct tso_t *VAR_1, int VAR_2)
{
 VAR_1->tcp_seq += VAR_2;
 VAR_1->size -= VAR_2;
 VAR_1->data += VAR_2;

 if ((VAR_1->size == 0) &&
     (VAR_1->next_frag_idx < FUNC_2(VAR_0)->nr_frags)) {
  skb_frag_t *VAR_3 = &FUNC_2(VAR_0)->frags[VAR_1->next_frag_idx];


  VAR_1->size = FUNC_1(VAR_3);
  VAR_1->data = FUNC_0(VAR_3);
  VAR_1->next_frag_idx++;
 }
}
