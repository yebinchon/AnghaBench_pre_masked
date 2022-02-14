
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_7__ {int spi; } ;
struct TYPE_6__ {scalar_t__ dev; } ;
struct xfrm_state {TYPE_2__ id; struct crypto_aead* data; TYPE_1__ xso; } ;
struct TYPE_8__ {scalar_t__ hi; scalar_t__ low; } ;
struct xfrm_offload {int flags; TYPE_3__ seq; int proto; } ;
struct sk_buff {scalar_t__ dev; int len; } ;
struct ipv6hdr {int dummy; } ;
struct ip_esp_hdr {int seq_no; int spi; } ;
struct esp_info {int inplace; int tfclen; int clen; int plen; int tailen; scalar_t__ nfrags; int seqno; int proto; } ;
struct crypto_aead {int dummy; } ;
typedef int netdev_features_t ;
typedef scalar_t__ __u32 ;
struct TYPE_10__ {int payload_len; } ;
struct TYPE_9__ {scalar_t__ gso_segs; } ;


 void* FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct crypto_aead*) ;
 int FUNC_3 (struct crypto_aead*) ;
 scalar_t__ FUNC_4 (struct xfrm_state*,struct sk_buff*,struct esp_info*) ;
 int FUNC_5 (struct xfrm_state*,struct sk_buff*,struct esp_info*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int) ;
 struct ip_esp_hdr* FUNC_8 (struct sk_buff*) ;
 TYPE_5__* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*,int ) ;
 TYPE_4__* FUNC_14 (struct sk_buff*) ;
 struct xfrm_offload* FUNC_15 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_16(struct xfrm_state *VAR_5, struct sk_buff *VAR_6, netdev_features_t VAR_7)
{
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 struct xfrm_offload *VAR_12;
 struct ip_esp_hdr *VAR_13;
 struct crypto_aead *VAR_14;
 struct esp_info VAR_15;
 bool VAR_16 = 1;
 __u32 VAR_17;

 VAR_15.inplace = 1;

 VAR_12 = FUNC_15(VAR_6);

 if (!VAR_12)
  return -VAR_1;

 if (!(VAR_7 & VAR_3) || VAR_5->xso.dev != VAR_6->dev) {
  VAR_12->flags |= VAR_0;
  VAR_16 = 0;
 }

 VAR_15.proto = VAR_12->proto;



 VAR_14 = VAR_5->data;
 VAR_10 = FUNC_2(VAR_14);

 VAR_15.tfclen = 0;


 VAR_11 = FUNC_0(FUNC_3(VAR_14), 4);
 VAR_15.clen = FUNC_0(VAR_6->len + 2 + VAR_15.tfclen, VAR_11);
 VAR_15.plen = VAR_15.clen - VAR_6->len - VAR_15.tfclen;
 VAR_15.tailen = VAR_15.tfclen + VAR_15.plen + VAR_10;

 if (!VAR_16 || (VAR_16 && !FUNC_11(VAR_6))) {
  VAR_15.nfrags = FUNC_4(VAR_5, VAR_6, &VAR_15);
  if (VAR_15.nfrags < 0)
   return VAR_15.nfrags;
 }

 VAR_17 = VAR_12->seq.low;

 VAR_13 = FUNC_8(VAR_6);
 VAR_13->spi = VAR_5->id.spi;

 FUNC_13(VAR_6, -FUNC_12(VAR_6));

 if (VAR_12->flags & VAR_4) {
  VAR_13->seq_no = FUNC_6(VAR_17);

  if (!FUNC_11(VAR_6))
   VAR_12->seq.low++;
  else
   VAR_12->seq.low += FUNC_14(VAR_6)->gso_segs;
 }

 VAR_15.seqno = FUNC_1(VAR_12->seq.low + ((u64)VAR_12->seq.hi << 32));

 VAR_8 = VAR_6->len - sizeof(struct ipv6hdr);
 if (VAR_8 > VAR_2)
  VAR_8 = 0;

 FUNC_9(VAR_6)->payload_len = FUNC_7(VAR_8);

 if (VAR_16)
  return 0;

 VAR_9 = FUNC_5(VAR_5, VAR_6, &VAR_15);
 if (VAR_9)
  return VAR_9;

 FUNC_10(VAR_6);

 return 0;
}
