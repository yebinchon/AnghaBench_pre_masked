
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_5__ {int spi; } ;
struct xfrm_state {TYPE_1__ id; scalar_t__ tfcpad; struct crypto_aead* data; } ;
struct xfrm_dst {int child_mtu_cached; } ;
struct sk_buff {scalar_t__ len; } ;
struct ip_esp_hdr {int seq_no; int spi; } ;
struct esp_info {int inplace; int tfclen; int clen; int plen; int tailen; scalar_t__ nfrags; int seqno; int proto; } ;
struct crypto_aead {int dummy; } ;
struct TYPE_6__ {scalar_t__ hi; scalar_t__ low; } ;
struct TYPE_7__ {TYPE_2__ output; } ;
struct TYPE_8__ {TYPE_3__ seq; } ;


 void* FUNC_0 (int,int) ;
 int VAR_0 ;
 TYPE_4__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct crypto_aead*) ;
 int FUNC_4 (struct crypto_aead*) ;
 scalar_t__ FUNC_5 (struct xfrm_state*,struct sk_buff*,struct esp_info*) ;
 int FUNC_6 (struct xfrm_state*,struct sk_buff*,struct esp_info*) ;
 int FUNC_7 (scalar_t__) ;
 struct ip_esp_hdr* FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (scalar_t__,int ) ;
 scalar_t__ FUNC_10 (struct sk_buff*) ;
 int * FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*,int ) ;
 int FUNC_14 (struct xfrm_state*,int ) ;

__attribute__((used)) static int FUNC_15(struct xfrm_state *VAR_1, struct sk_buff *VAR_2)
{
 int VAR_3;
 int VAR_4;
 struct ip_esp_hdr *VAR_5;
 struct crypto_aead *VAR_6;
 struct esp_info VAR_7;

 VAR_7.inplace = 1;

 VAR_7.proto = *FUNC_11(VAR_2);
 *FUNC_11(VAR_2) = VAR_0;



 VAR_6 = VAR_1->data;
 VAR_3 = FUNC_3(VAR_6);

 VAR_7.tfclen = 0;
 if (VAR_1->tfcpad) {
  struct xfrm_dst *VAR_8 = (struct xfrm_dst *)FUNC_10(VAR_2);
  u32 VAR_9;

  VAR_9 = FUNC_9(VAR_1->tfcpad, FUNC_14(VAR_1, VAR_8->child_mtu_cached));
  if (VAR_2->len < VAR_9)
   VAR_7.tfclen = VAR_9 - VAR_2->len;
 }
 VAR_4 = FUNC_0(FUNC_4(VAR_6), 4);
 VAR_7.clen = FUNC_0(VAR_2->len + 2 + VAR_7.tfclen, VAR_4);
 VAR_7.plen = VAR_7.clen - VAR_2->len - VAR_7.tfclen;
 VAR_7.tailen = VAR_7.tfclen + VAR_7.plen + VAR_3;

 VAR_7.nfrags = FUNC_5(VAR_1, VAR_2, &VAR_7);
 if (VAR_7.nfrags < 0)
  return VAR_7.nfrags;

 VAR_5 = FUNC_8(VAR_2);
 VAR_5->spi = VAR_1->id.spi;

 VAR_5->seq_no = FUNC_7(FUNC_1(VAR_2)->seq.output.low);
 VAR_7.seqno = FUNC_2(FUNC_1(VAR_2)->seq.output.low +
       ((u64)FUNC_1(VAR_2)->seq.output.hi << 32));

 FUNC_13(VAR_2, -FUNC_12(VAR_2));

 return FUNC_6(VAR_1, VAR_2, &VAR_7);
}
