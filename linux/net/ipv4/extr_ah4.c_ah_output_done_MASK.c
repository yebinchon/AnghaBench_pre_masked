
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iphdr {int ihl; int daddr; int frag_off; int ttl; int tos; } ;
typedef struct iphdr u8 ;
struct xfrm_state {struct ah_data* data; } ;
struct sk_buff {int dummy; } ;
struct ip_auth_hdr {struct iphdr* auth_data; } ;
struct crypto_async_request {struct sk_buff* data; } ;
struct ah_data {int icv_trunc_len; int ahash; } ;
struct TYPE_4__ {struct iphdr* tmp; } ;
struct TYPE_3__ {struct xfrm_state* xfrm; } ;


 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 struct iphdr* FUNC_1 (int ,struct iphdr*,int) ;
 struct ip_auth_hdr* FUNC_2 (struct sk_buff*) ;
 struct iphdr* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct iphdr*) ;
 int FUNC_6 (struct iphdr*,struct iphdr*,int) ;
 TYPE_1__* FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_9(struct crypto_async_request *VAR_0, int VAR_1)
{
 u8 *VAR_2;
 struct iphdr *VAR_3;
 struct sk_buff *VAR_4 = VAR_0->data;
 struct xfrm_state *VAR_5 = FUNC_7(VAR_4)->xfrm;
 struct ah_data *VAR_6 = VAR_5->data;
 struct iphdr *VAR_7 = FUNC_3(VAR_4);
 struct ip_auth_hdr *VAR_8 = FUNC_2(VAR_4);
 int VAR_9 = FUNC_4(VAR_4);

 VAR_3 = FUNC_0(VAR_4)->tmp;
 VAR_2 = FUNC_1(VAR_6->ahash, VAR_3, VAR_9);
 FUNC_6(VAR_8->auth_data, VAR_2, VAR_6->icv_trunc_len);

 VAR_7->tos = VAR_3->tos;
 VAR_7->ttl = VAR_3->ttl;
 VAR_7->frag_off = VAR_3->frag_off;
 if (VAR_7->ihl != 5) {
  VAR_7->daddr = VAR_3->daddr;
  FUNC_6(VAR_7+1, VAR_3+1, VAR_7->ihl*4 - sizeof(struct iphdr));
 }

 FUNC_5(FUNC_0(VAR_4)->tmp);
 FUNC_8(VAR_4, VAR_1);
}
