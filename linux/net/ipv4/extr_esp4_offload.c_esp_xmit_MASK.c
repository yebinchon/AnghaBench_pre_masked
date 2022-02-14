
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_10__ {int spi; } ;
struct TYPE_8__ {TYPE_2__* dev; } ;
struct xfrm_state {TYPE_3__ id; struct crypto_aead* data; TYPE_1__ xso; } ;
struct TYPE_11__ {scalar_t__ hi; scalar_t__ low; } ;
struct xfrm_offload {int flags; TYPE_4__ seq; int proto; } ;
struct sk_buff {int len; TYPE_2__* dev; } ;
struct ip_esp_hdr {int seq_no; int spi; } ;
struct esp_info {int inplace; int tfclen; int clen; int plen; int tailen; scalar_t__ nfrags; int seqno; struct ip_esp_hdr* esph; int proto; } ;
struct crypto_aead {int dummy; } ;
typedef int netdev_features_t ;
typedef scalar_t__ __u32 ;
struct TYPE_13__ {int tot_len; } ;
struct TYPE_12__ {scalar_t__ gso_segs; } ;
struct TYPE_9__ {int gso_partial_features; } ;


 void* FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct crypto_aead*) ;
 int FUNC_3 (struct crypto_aead*) ;
 scalar_t__ FUNC_4 (struct xfrm_state*,struct sk_buff*,struct esp_info*) ;
 int FUNC_5 (struct xfrm_state*,struct sk_buff*,struct esp_info*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int) ;
 struct ip_esp_hdr* FUNC_8 (struct sk_buff*) ;
 TYPE_6__* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (TYPE_6__*) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct sk_buff*,int ) ;
 TYPE_5__* FUNC_15 (struct sk_buff*) ;
 struct xfrm_offload* FUNC_16 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_17(struct xfrm_state *VAR_4, struct sk_buff *VAR_5, netdev_features_t VAR_6)
{
 int VAR_7;
 int VAR_8;
 int VAR_9;
 struct xfrm_offload *VAR_10;
 struct ip_esp_hdr *VAR_11;
 struct crypto_aead *VAR_12;
 struct esp_info VAR_13;
 bool VAR_14 = 1;
 __u32 VAR_15;

 VAR_13.inplace = 1;

 VAR_10 = FUNC_16(VAR_5);

 if (!VAR_10)
  return -VAR_1;

 if ((!(VAR_6 & VAR_2) &&
      !(VAR_5->dev->gso_partial_features & VAR_2)) ||
     VAR_4->xso.dev != VAR_5->dev) {
  VAR_10->flags |= VAR_0;
  VAR_14 = 0;
 }

 VAR_13.proto = VAR_10->proto;



 VAR_12 = VAR_4->data;
 VAR_8 = FUNC_2(VAR_12);

 VAR_13.tfclen = 0;


 VAR_9 = FUNC_0(FUNC_3(VAR_12), 4);
 VAR_13.clen = FUNC_0(VAR_5->len + 2 + VAR_13.tfclen, VAR_9);
 VAR_13.plen = VAR_13.clen - VAR_5->len - VAR_13.tfclen;
 VAR_13.tailen = VAR_13.tfclen + VAR_13.plen + VAR_8;

 VAR_13.esph = FUNC_8(VAR_5);


 if (!VAR_14 || (VAR_14 && !FUNC_12(VAR_5))) {
  VAR_13.nfrags = FUNC_4(VAR_4, VAR_5, &VAR_13);
  if (VAR_13.nfrags < 0)
   return VAR_13.nfrags;
 }

 VAR_15 = VAR_10->seq.low;

 VAR_11 = VAR_13.esph;
 VAR_11->spi = VAR_4->id.spi;

 FUNC_14(VAR_5, -FUNC_13(VAR_5));

 if (VAR_10->flags & VAR_3) {
  VAR_11->seq_no = FUNC_6(VAR_15);

  if (!FUNC_12(VAR_5))
   VAR_10->seq.low++;
  else
   VAR_10->seq.low += FUNC_15(VAR_5)->gso_segs;
 }

 VAR_13.seqno = FUNC_1(VAR_15 + ((u64)VAR_10->seq.hi << 32));

 FUNC_9(VAR_5)->tot_len = FUNC_7(VAR_5->len);
 FUNC_10(FUNC_9(VAR_5));

 if (VAR_14)
  return 0;

 VAR_7 = FUNC_5(VAR_4, VAR_5, &VAR_13);
 if (VAR_7)
  return VAR_7;

 FUNC_11(VAR_5);

 return 0;
}
