
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ a4; } ;
typedef TYPE_3__ xfrm_address_t ;
struct TYPE_6__ {scalar_t__ a4; } ;
struct TYPE_7__ {scalar_t__ mode; TYPE_1__ saddr; } ;
struct xfrm_state {TYPE_2__ props; struct xfrm_encap_tmpl* encap; struct crypto_aead* data; } ;
struct xfrm_offload {int flags; } ;
struct xfrm_encap_tmpl {scalar_t__ encap_sport; } ;
struct udphdr {scalar_t__ source; } ;
struct sk_buff {int ip_summed; } ;
struct iphdr {int ihl; scalar_t__ saddr; } ;
struct ip_esp_hdr {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct TYPE_9__ {int tmp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__* FUNC_0 (struct sk_buff*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct crypto_aead*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct iphdr* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct xfrm_state*,TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,int) ;
 scalar_t__ FUNC_10 (int) ;
 struct xfrm_state* FUNC_11 (struct sk_buff*) ;
 struct xfrm_offload* FUNC_12 (struct sk_buff*) ;

int FUNC_13(struct sk_buff *VAR_6, int VAR_7)
{
 const struct iphdr *VAR_8;
 struct xfrm_state *VAR_9 = FUNC_11(VAR_6);
 struct xfrm_offload *VAR_10 = FUNC_12(VAR_6);
 struct crypto_aead *VAR_11 = VAR_9->data;
 int VAR_12 = sizeof(struct ip_esp_hdr) + FUNC_1(VAR_11);
 int VAR_13;

 if (!VAR_10 || (VAR_10 && !(VAR_10->flags & VAR_1)))
  FUNC_4(FUNC_0(VAR_6)->tmp);

 if (FUNC_10(VAR_7))
  goto out;

 VAR_7 = FUNC_2(VAR_6);
 if (FUNC_10(VAR_7 < 0))
  goto out;

 VAR_8 = FUNC_3(VAR_6);
 VAR_13 = VAR_8->ihl * 4;

 if (VAR_9->encap) {
  struct xfrm_encap_tmpl *VAR_14 = VAR_9->encap;
  struct udphdr *VAR_15 = (void *)(FUNC_6(VAR_6) + VAR_13);







  if (VAR_8->saddr != VAR_9->props.saddr.a4 ||
      VAR_15->source != VAR_14->encap_sport) {
   xfrm_address_t VAR_16;

   VAR_16.a4 = VAR_8->saddr;
   FUNC_5(VAR_9, &VAR_16, VAR_15->source);
  }
  if (VAR_9->props.mode == VAR_4)
   VAR_6->ip_summed = VAR_0;
 }

 FUNC_7(VAR_6, VAR_12);
 if (VAR_9->props.mode == VAR_5)
  FUNC_8(VAR_6);
 else
  FUNC_9(VAR_6, -VAR_13);


 if (VAR_7 == VAR_3)
  VAR_7 = -VAR_2;

out:
 return VAR_7;
}
