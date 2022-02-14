
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skb_shared_info {int nr_frags; struct sk_buff* frag_list; int * frags; } ;
struct sk_buff {unsigned int len; unsigned int truesize; unsigned int data_len; unsigned char* data; struct sk_buff* next; int head; scalar_t__ head_frag; } ;
struct page {int dummy; } ;
typedef int skb_frag_t ;
struct TYPE_2__ {int same_flow; int count; struct sk_buff* last; int free; scalar_t__ flush; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_1 (int) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int *,struct page*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,unsigned int) ;
 int FUNC_6 (int *,int *,int) ;
 scalar_t__ FUNC_7 (struct page*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (int *,unsigned int) ;
 int FUNC_10 (int *,unsigned int) ;
 int FUNC_11 (int *,unsigned int) ;
 int FUNC_12 (int *,unsigned int) ;
 unsigned int FUNC_13 (struct sk_buff*) ;
 unsigned int FUNC_14 (struct sk_buff*) ;
 unsigned int FUNC_15 (struct sk_buff*) ;
 struct skb_shared_info* FUNC_16 (struct sk_buff*) ;
 scalar_t__ FUNC_17 (int) ;
 struct page* FUNC_18 (int ) ;

int FUNC_19(struct sk_buff *VAR_4, struct sk_buff *VAR_5)
{
 struct skb_shared_info *VAR_6, *VAR_7 = FUNC_16(VAR_5);
 unsigned int VAR_8 = FUNC_14(VAR_5);
 unsigned int VAR_9 = FUNC_15(VAR_5);
 unsigned int VAR_10 = FUNC_13(VAR_5);
 unsigned int VAR_11;
 struct sk_buff *VAR_12;

 if (FUNC_17(VAR_4->len + VAR_10 >= 65536 || FUNC_0(VAR_5)->flush))
  return -VAR_0;

 VAR_12 = FUNC_0(VAR_4)->last;
 VAR_6 = FUNC_16(VAR_12);

 if (VAR_9 <= VAR_8) {
  skb_frag_t *VAR_13;
  skb_frag_t *VAR_14;
  int VAR_15 = VAR_7->nr_frags;
  int VAR_16 = VAR_6->nr_frags + VAR_15;

  if (VAR_16 > VAR_1)
   goto merge;

  VAR_8 -= VAR_9;
  VAR_6->nr_frags = VAR_16;
  VAR_7->nr_frags = 0;

  VAR_13 = VAR_6->frags + VAR_16;
  VAR_14 = VAR_7->frags + VAR_15;
  do {
   *--VAR_13 = *--VAR_14;
  } while (--VAR_15);

  FUNC_9(VAR_13, VAR_8);
  FUNC_12(VAR_13, VAR_8);


  VAR_11 = VAR_5->truesize -
     FUNC_2(FUNC_8(VAR_5));

  VAR_5->truesize -= VAR_5->data_len;
  VAR_5->len -= VAR_5->data_len;
  VAR_5->data_len = 0;

  FUNC_0(VAR_5)->free = VAR_2;
  goto done;
 } else if (VAR_5->head_frag) {
  int VAR_17 = VAR_6->nr_frags;
  skb_frag_t *VAR_18 = VAR_6->frags + VAR_17;
  struct page *VAR_19 = FUNC_18(VAR_5->head);
  unsigned int VAR_20 = VAR_9 - VAR_8;
  unsigned int VAR_21;

  if (VAR_17 + 1 + VAR_7->nr_frags > VAR_1)
   goto merge;

  VAR_21 = VAR_5->data -
          (unsigned char *)FUNC_7(VAR_19) +
          VAR_8;

  VAR_6->nr_frags = VAR_17 + 1 + VAR_7->nr_frags;

  FUNC_3(VAR_18, VAR_19);
  FUNC_10(VAR_18, VAR_21);
  FUNC_11(VAR_18, VAR_20);

  FUNC_6(VAR_18 + 1, VAR_7->frags, sizeof(*VAR_18) * VAR_7->nr_frags);


  VAR_11 = VAR_5->truesize - FUNC_1(sizeof(struct sk_buff));
  FUNC_0(VAR_5)->free = VAR_3;
  goto done;
 }

merge:
 VAR_11 = VAR_5->truesize;
 if (VAR_8 > VAR_9) {
  unsigned int VAR_22 = VAR_8 - VAR_9;

  FUNC_9(&VAR_7->frags[0], VAR_22);
  FUNC_12(&VAR_7->frags[0], VAR_22);
  VAR_5->data_len -= VAR_22;
  VAR_5->len -= VAR_22;
  VAR_8 = VAR_9;
 }

 FUNC_5(VAR_5, VAR_8);

 if (FUNC_0(VAR_4)->last == VAR_4)
  FUNC_16(VAR_4)->frag_list = VAR_5;
 else
  FUNC_0(VAR_4)->last->next = VAR_5;
 FUNC_0(VAR_4)->last = VAR_5;
 FUNC_4(VAR_5);
 VAR_12 = VAR_4;

done:
 FUNC_0(VAR_4)->count++;
 VAR_4->data_len += VAR_10;
 VAR_4->truesize += VAR_11;
 VAR_4->len += VAR_10;
 if (VAR_12 != VAR_4) {
  VAR_12->data_len += VAR_10;
  VAR_12->truesize += VAR_11;
  VAR_12->len += VAR_10;
 }
 FUNC_0(VAR_5)->same_flow = 1;
 return 0;
}
