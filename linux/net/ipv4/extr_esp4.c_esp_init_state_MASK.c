
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {scalar_t__ mode; scalar_t__ trailer_len; scalar_t__ header_len; } ;
struct TYPE_3__ {scalar_t__ family; } ;
struct xfrm_state {TYPE_2__ props; struct xfrm_encap_tmpl* encap; TYPE_1__ sel; struct crypto_aead* data; scalar_t__ aead; } ;
struct xfrm_encap_tmpl {int encap_type; } ;
struct udphdr {int dummy; } ;
struct iphdr {int dummy; } ;
struct ip_esp_hdr {int dummy; } ;
struct crypto_aead {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;


 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (struct crypto_aead*) ;
 int FUNC_2 (struct crypto_aead*) ;
 scalar_t__ FUNC_3 (struct crypto_aead*) ;
 int FUNC_4 (struct xfrm_state*) ;
 int FUNC_5 (struct xfrm_state*) ;

__attribute__((used)) static int FUNC_6(struct xfrm_state *VAR_5)
{
 struct crypto_aead *VAR_6;
 u32 VAR_7;
 int VAR_8;

 VAR_5->data = ((void*)0);

 if (VAR_5->aead)
  VAR_8 = FUNC_4(VAR_5);
 else
  VAR_8 = FUNC_5(VAR_5);

 if (VAR_8)
  goto error;

 VAR_6 = VAR_5->data;

 VAR_5->props.header_len = sizeof(struct ip_esp_hdr) +
         FUNC_3(VAR_6);
 if (VAR_5->props.mode == VAR_4)
  VAR_5->props.header_len += sizeof(struct iphdr);
 else if (VAR_5->props.mode == VAR_3 && VAR_5->sel.family != VAR_0)
  VAR_5->props.header_len += VAR_2;
 if (VAR_5->encap) {
  struct xfrm_encap_tmpl *VAR_9 = VAR_5->encap;

  switch (VAR_9->encap_type) {
  default:
   VAR_8 = -VAR_1;
   goto error;
  case 129:
   VAR_5->props.header_len += sizeof(struct udphdr);
   break;
  case 128:
   VAR_5->props.header_len += sizeof(struct udphdr) + 2 * sizeof(u32);
   break;
  }
 }

 VAR_7 = FUNC_0(FUNC_2(VAR_6), 4);
 VAR_5->props.trailer_len = VAR_7 + 1 + FUNC_1(VAR_6);

error:
 return VAR_8;
}
