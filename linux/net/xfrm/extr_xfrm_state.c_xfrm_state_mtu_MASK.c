
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct xfrm_type {scalar_t__ proto; } ;
struct TYPE_4__ {int header_len; int mode; int family; } ;
struct TYPE_3__ {scalar_t__ state; } ;
struct xfrm_state {TYPE_2__ props; struct crypto_aead* data; TYPE_1__ km; int type; } ;
struct ipv6hdr {int dummy; } ;
struct iphdr {int dummy; } ;
struct crypto_aead {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_2 ;
 struct xfrm_type* FUNC_1 (int ) ;
 int FUNC_2 (int) ;



 scalar_t__ VAR_3 ;
 int FUNC_3 (struct crypto_aead*) ;
 int FUNC_4 (struct crypto_aead*) ;

u32 FUNC_5(struct xfrm_state *VAR_4, int VAR_5)
{
 const struct xfrm_type *VAR_6 = FUNC_1(VAR_4->type);
 struct crypto_aead *VAR_7;
 u32 VAR_8, VAR_9 = 0;

 if (VAR_4->km.state != VAR_3 ||
     !VAR_6 || VAR_6->proto != VAR_2)
  return VAR_5 - VAR_4->props.header_len;

 VAR_7 = VAR_4->data;
 VAR_8 = FUNC_0(FUNC_4(VAR_7), 4);

 switch (VAR_4->props.mode) {
 case 129:
 case 130:
  if (VAR_4->props.family == VAR_0)
   VAR_9 = sizeof(struct iphdr);
  else if (VAR_4->props.family == VAR_1)
   VAR_9 = sizeof(struct ipv6hdr);
  break;
 case 128:
  break;
 default:
  FUNC_2(1);
  break;
 }

 return ((VAR_5 - VAR_4->props.header_len - FUNC_3(VAR_7) -
   VAR_9) & ~(VAR_8 - 1)) + VAR_9 - 2;
}
