
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__ mode; } ;
struct xfrm_state {TYPE_1__ props; struct ah_data* data; } ;
struct sk_buff {int network_header; } ;
struct iphdr {int dummy; } ;
struct ip_auth_hdr {int hdrlen; int nexthdr; } ;
struct crypto_async_request {struct sk_buff* data; } ;
struct ah_data {int icv_trunc_len; int ahash; } ;
struct TYPE_4__ {struct iphdr* tmp; } ;


 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct sk_buff*,int) ;
 int * FUNC_2 (struct iphdr*,int) ;
 int * FUNC_3 (int ,int *,int ) ;
 scalar_t__ FUNC_4 (int *,int *,int ) ;
 struct ip_auth_hdr* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct iphdr*) ;
 int FUNC_8 (int ,struct iphdr*,int) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*,int) ;
 int FUNC_12 (struct sk_buff*,int) ;
 struct xfrm_state* FUNC_13 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_14(struct crypto_async_request *VAR_2, int VAR_3)
{
 u8 *VAR_4;
 u8 *VAR_5;
 struct iphdr *VAR_6;
 struct sk_buff *VAR_7 = VAR_2->data;
 struct xfrm_state *VAR_8 = FUNC_13(VAR_7);
 struct ah_data *VAR_9 = VAR_8->data;
 struct ip_auth_hdr *VAR_10 = FUNC_5(VAR_7);
 int VAR_11 = FUNC_6(VAR_7);
 int VAR_12 = (VAR_10->hdrlen + 2) << 2;

 if (VAR_3)
  goto out;

 VAR_6 = FUNC_0(VAR_7)->tmp;
 VAR_4 = FUNC_2(VAR_6, VAR_11);
 VAR_5 = FUNC_3(VAR_9->ahash, VAR_4, VAR_9->icv_trunc_len);

 VAR_3 = FUNC_4(VAR_5, VAR_4, VAR_9->icv_trunc_len) ? -VAR_0 : 0;
 if (VAR_3)
  goto out;

 VAR_3 = VAR_10->nexthdr;

 VAR_7->network_header += VAR_12;
 FUNC_8(FUNC_9(VAR_7), VAR_6, VAR_11);
 FUNC_1(VAR_7, VAR_12 + VAR_11);

 if (VAR_8->props.mode == VAR_1)
  FUNC_10(VAR_7);
 else
  FUNC_11(VAR_7, -VAR_11);
out:
 FUNC_7(FUNC_0(VAR_7)->tmp);
 FUNC_12(VAR_7, VAR_3);
}
