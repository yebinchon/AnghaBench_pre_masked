
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct skb_seq_state {unsigned int lower_offset; unsigned int upper_offset; unsigned int stepped_offset; size_t frag_idx; TYPE_2__* cur_skb; TYPE_2__* root_skb; int * frag_data; } ;
typedef int skb_frag_t ;
struct TYPE_6__ {struct TYPE_6__* next; int * data; } ;
struct TYPE_5__ {size_t nr_frags; TYPE_2__* frag_list; int * frags; } ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 unsigned int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 unsigned int FUNC_6 (TYPE_2__*) ;
 TYPE_1__* FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (int) ;

unsigned int FUNC_9(unsigned int VAR_0, const u8 **VAR_1,
     struct skb_seq_state *VAR_2)
{
 unsigned int VAR_3, VAR_4 = VAR_0 + VAR_2->lower_offset;
 skb_frag_t *VAR_5;

 if (FUNC_8(VAR_4 >= VAR_2->upper_offset)) {
  if (VAR_2->frag_data) {
   FUNC_1(VAR_2->frag_data);
   VAR_2->frag_data = ((void*)0);
  }
  return 0;
 }

next_skb:
 VAR_3 = FUNC_6(VAR_2->cur_skb) + VAR_2->stepped_offset;

 if (VAR_4 < VAR_3 && !VAR_2->frag_data) {
  *VAR_1 = VAR_2->cur_skb->data + (VAR_4 - VAR_2->stepped_offset);
  return VAR_3 - VAR_4;
 }

 if (VAR_2->frag_idx == 0 && !VAR_2->frag_data)
  VAR_2->stepped_offset += FUNC_6(VAR_2->cur_skb);

 while (VAR_2->frag_idx < FUNC_7(VAR_2->cur_skb)->nr_frags) {
  VAR_5 = &FUNC_7(VAR_2->cur_skb)->frags[VAR_2->frag_idx];
  VAR_3 = FUNC_4(VAR_5) + VAR_2->stepped_offset;

  if (VAR_4 < VAR_3) {
   if (!VAR_2->frag_data)
    VAR_2->frag_data = FUNC_0(FUNC_3(VAR_5));

   *VAR_1 = (u8 *) VAR_2->frag_data + FUNC_2(VAR_5) +
    (VAR_4 - VAR_2->stepped_offset);

   return VAR_3 - VAR_4;
  }

  if (VAR_2->frag_data) {
   FUNC_1(VAR_2->frag_data);
   VAR_2->frag_data = ((void*)0);
  }

  VAR_2->frag_idx++;
  VAR_2->stepped_offset += FUNC_4(VAR_5);
 }

 if (VAR_2->frag_data) {
  FUNC_1(VAR_2->frag_data);
  VAR_2->frag_data = ((void*)0);
 }

 if (VAR_2->root_skb == VAR_2->cur_skb && FUNC_5(VAR_2->root_skb)) {
  VAR_2->cur_skb = FUNC_7(VAR_2->root_skb)->frag_list;
  VAR_2->frag_idx = 0;
  goto next_skb;
 } else if (VAR_2->cur_skb->next) {
  VAR_2->cur_skb = VAR_2->cur_skb->next;
  VAR_2->frag_idx = 0;
  goto next_skb;
 }

 return 0;
}
