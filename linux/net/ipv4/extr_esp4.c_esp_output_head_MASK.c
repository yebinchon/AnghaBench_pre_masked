
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct page_frag {int offset; struct page* page; } ;
struct xfrm_state {int lock; struct page_frag xfrag; scalar_t__ encap; } ;
struct sock {int sk_wmem_alloc; } ;
struct sk_buff {int len; int data_len; int truesize; struct sock* sk; } ;
struct page {int dummy; } ;
struct ip_esp_hdr {int dummy; } ;
struct esp_info {int tailen; int inplace; int proto; int plen; int tfclen; struct ip_esp_hdr* esph; } ;
struct TYPE_2__ {int nr_frags; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*,int,struct page*,int,int) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (struct xfrm_state*,struct sk_buff*,struct esp_info*) ;
 int FUNC_4 (struct page*) ;
 int * FUNC_5 (struct page*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct sk_buff*,struct sk_buff*,int) ;
 int FUNC_8 (int,int *) ;
 scalar_t__ FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*,int,struct sk_buff**) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (int,struct page_frag*,int ) ;
 TYPE_1__* FUNC_14 (struct sk_buff*) ;
 int * FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*) ;
 unsigned char* FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (int) ;

int FUNC_21(struct xfrm_state *VAR_3, struct sk_buff *VAR_4, struct esp_info *VAR_5)
{
 u8 *VAR_6;
 u8 *VAR_7;
 int VAR_8;
 int VAR_9;
 struct page *VAR_10;
 struct sk_buff *VAR_11;
 int VAR_12 = VAR_5->tailen;


 if (VAR_3->encap) {
  int VAR_13 = FUNC_3(VAR_3, VAR_4, VAR_5);

  if (VAR_13 < 0)
   return VAR_13;
 }

 if (!FUNC_10(VAR_4)) {
  if (VAR_12 <= FUNC_16(VAR_4)) {
   VAR_8 = 1;
   VAR_11 = VAR_4;
   VAR_6 = FUNC_15(VAR_11);

   goto skip_cow;
  } else if ((FUNC_14(VAR_4)->nr_frags < VAR_2)
      && !FUNC_12(VAR_4)) {
   int VAR_14;
   struct sock *VAR_15 = VAR_4->sk;
   struct page_frag *VAR_16 = &VAR_3->xfrag;

   VAR_5->inplace = 0;

   VAR_14 = FUNC_0(VAR_12, VAR_1);

   FUNC_18(&VAR_3->lock);

   if (FUNC_20(!FUNC_13(VAR_14, VAR_16, VAR_0))) {
    FUNC_19(&VAR_3->lock);
    goto cow;
   }

   VAR_10 = VAR_16->page;
   FUNC_4(VAR_10);

   VAR_7 = FUNC_5(VAR_10);

   VAR_6 = VAR_7 + VAR_16->offset;

   FUNC_2(VAR_6, VAR_5->tfclen, VAR_5->plen, VAR_5->proto);

   FUNC_6(VAR_7);

   VAR_8 = FUNC_14(VAR_4)->nr_frags;

   FUNC_1(VAR_4, VAR_8, VAR_10, VAR_16->offset,
          VAR_12);
   FUNC_14(VAR_4)->nr_frags = ++VAR_8;

   VAR_16->offset = VAR_16->offset + VAR_14;

   FUNC_19(&VAR_3->lock);

   VAR_8++;

   VAR_4->len += VAR_12;
   VAR_4->data_len += VAR_12;
   VAR_4->truesize += VAR_12;
   if (VAR_15 && FUNC_9(VAR_15))
    FUNC_8(VAR_12, &VAR_15->sk_wmem_alloc);

   goto out;
  }
 }

cow:
 VAR_9 = (unsigned char *)VAR_5->esph - FUNC_17(VAR_4);

 VAR_8 = FUNC_11(VAR_4, VAR_12, &VAR_11);
 if (VAR_8 < 0)
  goto out;
 VAR_6 = FUNC_15(VAR_11);
 VAR_5->esph = (struct ip_esp_hdr *)(FUNC_17(VAR_4) + VAR_9);

skip_cow:
 FUNC_2(VAR_6, VAR_5->tfclen, VAR_5->plen, VAR_5->proto);
 FUNC_7(VAR_4, VAR_11, VAR_12);

out:
 return VAR_8;
}
