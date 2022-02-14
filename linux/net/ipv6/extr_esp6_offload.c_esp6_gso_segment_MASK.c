
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ dev; } ;
struct TYPE_4__ {scalar_t__ spi; } ;
struct xfrm_state {TYPE_2__ xso; TYPE_1__ id; struct crypto_aead* data; } ;
struct xfrm_offload {int flags; } ;
struct sk_buff {int encap_hdr_csum; scalar_t__ dev; } ;
struct sec_path {int len; struct xfrm_state** xvec; } ;
struct ip_esp_hdr {scalar_t__ spi; } ;
struct crypto_aead {int dummy; } ;
typedef int netdev_features_t ;
struct TYPE_6__ {int gso_type; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct crypto_aead*) ;
 struct ip_esp_hdr* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,scalar_t__) ;
 struct sec_path* FUNC_5 (struct sk_buff*) ;
 TYPE_3__* FUNC_6 (struct sk_buff*) ;
 struct sk_buff* FUNC_7 (struct xfrm_state*,struct sk_buff*,int) ;
 struct xfrm_offload* FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_9(struct sk_buff *VAR_7,
            netdev_features_t VAR_8)
{
 struct xfrm_state *VAR_9;
 struct ip_esp_hdr *VAR_10;
 struct crypto_aead *VAR_11;
 netdev_features_t VAR_12 = VAR_8;
 struct xfrm_offload *VAR_13 = FUNC_8(VAR_7);
 struct sec_path *VAR_14;

 if (!VAR_13)
  return FUNC_0(-VAR_0);

 if (!(FUNC_6(VAR_7)->gso_type & VAR_5))
  return FUNC_0(-VAR_0);

 VAR_14 = FUNC_5(VAR_7);
 VAR_9 = VAR_14->xvec[VAR_14->len - 1];
 VAR_11 = VAR_9->data;
 VAR_10 = FUNC_3(VAR_7);

 if (VAR_10->spi != VAR_9->id.spi)
  return FUNC_0(-VAR_0);

 if (!FUNC_4(VAR_7, sizeof(*VAR_10) + FUNC_2(VAR_11)))
  return FUNC_0(-VAR_0);

 FUNC_1(VAR_7, sizeof(*VAR_10) + FUNC_2(VAR_11));

 VAR_7->encap_hdr_csum = 1;

 if (!(VAR_8 & VAR_2) || VAR_9->xso.dev != VAR_7->dev)
  VAR_12 = VAR_8 & ~(VAR_4 | VAR_1);
 else if (!(VAR_8 & VAR_3))
  VAR_12 = VAR_8 & ~VAR_1;

 VAR_13->flags |= VAR_6;

 return FUNC_7(VAR_9, VAR_7, VAR_12);
}
