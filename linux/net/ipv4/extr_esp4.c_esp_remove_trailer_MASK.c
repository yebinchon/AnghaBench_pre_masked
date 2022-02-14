
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xfrm_state {struct crypto_aead* data; } ;
struct xfrm_offload {int flags; int proto; } ;
struct sk_buff {int len; scalar_t__ ip_summed; int csum; } ;
struct ip_esp_hdr {int dummy; } ;
struct crypto_aead {int dummy; } ;
typedef int __wsum ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct crypto_aead*) ;
 int FUNC_2 (struct crypto_aead*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (char*,int,int) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*,int,int,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int,int*,int) ;
 struct xfrm_state* FUNC_8 (struct sk_buff*) ;
 struct xfrm_offload* FUNC_9 (struct sk_buff*) ;

__attribute__((used)) static inline int FUNC_10(struct sk_buff *VAR_3)
{
 struct xfrm_state *VAR_4 = FUNC_8(VAR_3);
 struct xfrm_offload *VAR_5 = FUNC_9(VAR_3);
 struct crypto_aead *VAR_6 = VAR_4->data;
 int VAR_7, VAR_8, VAR_9;
 int VAR_10, VAR_11;
 __wsum VAR_12;
 u8 VAR_13[2];
 int VAR_14;

 VAR_7 = FUNC_1(VAR_6);
 VAR_8 = sizeof(struct ip_esp_hdr) + FUNC_2(VAR_6);
 VAR_9 = VAR_3->len - VAR_8;

 if (VAR_5 && (VAR_5->flags & VAR_2)) {
  VAR_14 = VAR_5->proto;
  goto out;
 }

 if (FUNC_7(VAR_3, VAR_3->len - VAR_7 - 2, VAR_13, 2))
  FUNC_0();

 VAR_14 = -VAR_1;
 VAR_10 = VAR_13[0];
 if (VAR_10 + 2 + VAR_7 >= VAR_9) {
  FUNC_4("ipsec esp packet is garbage padlen=%d, elen=%d\n",
        VAR_10 + 2, VAR_9 - VAR_7);
  goto out;
 }

 VAR_11 = VAR_7 + VAR_10 + 2;
 if (VAR_3->ip_summed == VAR_0) {
  VAR_12 = FUNC_6(VAR_3, VAR_3->len - VAR_11, VAR_11, 0);
  VAR_3->csum = FUNC_3(VAR_3->csum, VAR_12,
        VAR_3->len - VAR_11);
 }
 FUNC_5(VAR_3, VAR_3->len - VAR_11);

 VAR_14 = VAR_13[1];

out:
 return VAR_14;
}
