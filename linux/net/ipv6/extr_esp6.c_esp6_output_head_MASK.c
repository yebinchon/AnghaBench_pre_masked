
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct page_frag {int offset; struct page* page; } ;
struct xfrm_state {int lock; struct page_frag xfrag; } ;
struct sock {int sk_wmem_alloc; } ;
struct sk_buff {int len; int data_len; int truesize; struct sock* sk; } ;
struct page {int dummy; } ;
struct esp_info {int tailen; int inplace; int proto; int plen; int tfclen; } ;
struct TYPE_2__ {int nr_frags; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*,int,struct page*,int,int) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (struct page*) ;
 int * FUNC_4 (struct page*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct sk_buff*,struct sk_buff*,int) ;
 int FUNC_7 (int,int *) ;
 scalar_t__ FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,int,struct sk_buff**) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (int,struct page_frag*,int ) ;
 TYPE_1__* FUNC_13 (struct sk_buff*) ;
 int * FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int) ;

int FUNC_19(struct xfrm_state *VAR_3, struct sk_buff *VAR_4, struct esp_info *VAR_5)
{
 u8 *VAR_6;
 u8 *VAR_7;
 int VAR_8;
 struct page *VAR_9;
 struct sk_buff *VAR_10;
 int VAR_11 = VAR_5->tailen;

 if (!FUNC_9(VAR_4)) {
  if (VAR_11 <= FUNC_15(VAR_4)) {
   VAR_8 = 1;
   VAR_10 = VAR_4;
   VAR_6 = FUNC_14(VAR_10);

   goto skip_cow;
  } else if ((FUNC_13(VAR_4)->nr_frags < VAR_2)
      && !FUNC_11(VAR_4)) {
   int VAR_12;
   struct sock *VAR_13 = VAR_4->sk;
   struct page_frag *VAR_14 = &VAR_3->xfrag;

   VAR_5->inplace = 0;

   VAR_12 = FUNC_0(VAR_11, VAR_1);

   FUNC_16(&VAR_3->lock);

   if (FUNC_18(!FUNC_12(VAR_12, VAR_14, VAR_0))) {
    FUNC_17(&VAR_3->lock);
    goto cow;
   }

   VAR_9 = VAR_14->page;
   FUNC_3(VAR_9);

   VAR_7 = FUNC_4(VAR_9);

   VAR_6 = VAR_7 + VAR_14->offset;

   FUNC_2(VAR_6, VAR_5->tfclen, VAR_5->plen, VAR_5->proto);

   FUNC_5(VAR_7);

   VAR_8 = FUNC_13(VAR_4)->nr_frags;

   FUNC_1(VAR_4, VAR_8, VAR_9, VAR_14->offset,
          VAR_11);
   FUNC_13(VAR_4)->nr_frags = ++VAR_8;

   VAR_14->offset = VAR_14->offset + VAR_12;

   FUNC_17(&VAR_3->lock);

   VAR_8++;

   VAR_4->len += VAR_11;
   VAR_4->data_len += VAR_11;
   VAR_4->truesize += VAR_11;
   if (VAR_13 && FUNC_8(VAR_13))
    FUNC_7(VAR_11, &VAR_13->sk_wmem_alloc);

   goto out;
  }
 }

cow:
 VAR_8 = FUNC_10(VAR_4, VAR_11, &VAR_10);
 if (VAR_8 < 0)
  goto out;
 VAR_6 = FUNC_14(VAR_10);

skip_cow:
 FUNC_2(VAR_6, VAR_5->tfclen, VAR_5->plen, VAR_5->proto);
 FUNC_6(VAR_4, VAR_10, VAR_11);

out:
 return VAR_8;
}
