
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {int mode; scalar_t__ trailer_len; scalar_t__ header_len; } ;
struct TYPE_3__ {int family; } ;
struct xfrm_state {TYPE_2__ props; TYPE_1__ sel; struct crypto_aead* data; scalar_t__ aead; scalar_t__ encap; } ;
struct ipv6hdr {int dummy; } ;
struct iphdr {int dummy; } ;
struct ip_esp_hdr {int dummy; } ;
struct crypto_aead {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;



 scalar_t__ FUNC_1 (struct crypto_aead*) ;
 int FUNC_2 (struct crypto_aead*) ;
 scalar_t__ FUNC_3 (struct crypto_aead*) ;
 int FUNC_4 (struct xfrm_state*) ;
 int FUNC_5 (struct xfrm_state*) ;

__attribute__((used)) static int FUNC_6(struct xfrm_state *VAR_3)
{
 struct crypto_aead *VAR_4;
 u32 VAR_5;
 int VAR_6;

 if (VAR_3->encap)
  return -VAR_1;

 VAR_3->data = ((void*)0);

 if (VAR_3->aead)
  VAR_6 = FUNC_4(VAR_3);
 else
  VAR_6 = FUNC_5(VAR_3);

 if (VAR_6)
  goto error;

 VAR_4 = VAR_3->data;

 VAR_3->props.header_len = sizeof(struct ip_esp_hdr) +
         FUNC_3(VAR_4);
 switch (VAR_3->props.mode) {
 case 130:
  if (VAR_3->sel.family != VAR_0)
   VAR_3->props.header_len += VAR_2 +
            (sizeof(struct ipv6hdr) - sizeof(struct iphdr));
  break;
 default:
 case 129:
  break;
 case 128:
  VAR_3->props.header_len += sizeof(struct ipv6hdr);
  break;
 }

 VAR_5 = FUNC_0(FUNC_2(VAR_4), 4);
 VAR_3->props.trailer_len = VAR_5 + 1 + FUNC_1(VAR_4);

error:
 return VAR_6;
}
