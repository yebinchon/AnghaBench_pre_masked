
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_state {struct crypto_aead* data; } ;
struct xfrm_offload {int flags; } ;
struct sk_buff {int ip_summed; } ;
struct ip_esp_hdr {int dummy; } ;
struct crypto_aead {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct crypto_aead*) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (struct sk_buff*,scalar_t__) ;
 struct xfrm_offload* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_4(struct xfrm_state *VAR_3, struct sk_buff *VAR_4)
{
 struct crypto_aead *VAR_5 = VAR_3->data;
 struct xfrm_offload *VAR_6 = FUNC_3(VAR_4);

 if (!FUNC_2(VAR_4, sizeof(struct ip_esp_hdr) + FUNC_0(VAR_5)))
  return -VAR_2;

 if (!(VAR_6->flags & VAR_1))
  VAR_4->ip_summed = VAR_0;

 return FUNC_1(VAR_4, 0);
}
