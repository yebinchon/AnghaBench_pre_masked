
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct xfrm_state {struct ipcomp_data* data; } ;
struct sk_buff {int len; int truesize; int data_len; int * data; } ;
struct page {int dummy; } ;
struct ipcomp_data {int tfms; } ;
struct ip_comp_hdr {int dummy; } ;
struct crypto_comp {int dummy; } ;
typedef int skb_frag_t ;
struct TYPE_2__ {scalar_t__ nr_frags; int * frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,struct page*) ;
 int FUNC_2 (struct sk_buff*,int) ;
 struct page* FUNC_3 (int ) ;
 int FUNC_4 (struct crypto_comp*,int const*,int const,int *,int*) ;
 int FUNC_5 () ;
 int VAR_7 ;
 int FUNC_6 (int ,int *,int) ;
 void** FUNC_7 (int ,int const) ;
 int FUNC_8 () ;
 int FUNC_9 (struct sk_buff*,int *,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int) ;
 TYPE_1__* FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_15(struct xfrm_state *VAR_8, struct sk_buff *VAR_9)
{
 struct ipcomp_data *VAR_10 = VAR_8->data;
 const int VAR_11 = VAR_9->len;
 int VAR_12 = VAR_4;
 const u8 *VAR_13 = VAR_9->data;
 const int VAR_14 = FUNC_5();
 u8 *VAR_15 = *FUNC_7(VAR_7, VAR_14);
 struct crypto_comp *VAR_16 = *FUNC_7(VAR_10->tfms, VAR_14);
 int VAR_17 = FUNC_4(VAR_16, VAR_13, VAR_11, VAR_15, &VAR_12);
 int VAR_18;

 if (VAR_17)
  goto out;

 if (VAR_12 < (VAR_11 + sizeof(struct ip_comp_hdr))) {
  VAR_17 = -VAR_0;
  goto out;
 }

 VAR_18 = VAR_12 - VAR_11;
 if (VAR_18 > FUNC_14(VAR_9))
  VAR_18 = FUNC_14(VAR_9);

 FUNC_2(VAR_9, VAR_18);

 VAR_18 += VAR_11;
 FUNC_9(VAR_9, VAR_15, VAR_18);

 while ((VAR_15 += VAR_18, VAR_12 -= VAR_18) > 0) {
  skb_frag_t *VAR_19;
  struct page *VAR_20;

  VAR_17 = -VAR_1;
  if (FUNC_0(FUNC_13(VAR_9)->nr_frags >= VAR_5))
   goto out;

  VAR_19 = FUNC_13(VAR_9)->frags + FUNC_13(VAR_9)->nr_frags;
  VAR_20 = FUNC_3(VAR_3);

  VAR_17 = -VAR_2;
  if (!VAR_20)
   goto out;

  FUNC_1(VAR_19, VAR_20);

  VAR_18 = VAR_6;
  if (VAR_12 < VAR_18)
   VAR_18 = VAR_12;

  FUNC_11(VAR_19, 0);
  FUNC_12(VAR_19, VAR_18);
  FUNC_6(FUNC_10(VAR_19), VAR_15, VAR_18);

  VAR_9->truesize += VAR_18;
  VAR_9->data_len += VAR_18;
  VAR_9->len += VAR_18;

  FUNC_13(VAR_9)->nr_frags++;
 }

 VAR_17 = 0;

out:
 FUNC_8();
 return VAR_17;
}
