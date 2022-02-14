
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ mode; } ;
struct xfrm_state {TYPE_1__ props; struct crypto_aead* data; } ;
struct xfrm_offload {int flags; } ;
struct sk_buff {int dummy; } ;
struct ip_esp_hdr {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct TYPE_4__ {int tmp; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct crypto_aead*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int ,int) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,int) ;
 scalar_t__ FUNC_10 (int) ;
 struct xfrm_state* FUNC_11 (struct sk_buff*) ;
 struct xfrm_offload* FUNC_12 (struct sk_buff*) ;

int FUNC_13(struct sk_buff *VAR_4, int VAR_5)
{
 struct xfrm_state *VAR_6 = FUNC_11(VAR_4);
 struct xfrm_offload *VAR_7 = FUNC_12(VAR_4);
 struct crypto_aead *VAR_8 = VAR_6->data;
 int VAR_9 = sizeof(struct ip_esp_hdr) + FUNC_1(VAR_8);
 int VAR_10 = FUNC_5(VAR_4);

 if (!VAR_7 || (VAR_7 && !(VAR_7->flags & VAR_0)))
  FUNC_3(FUNC_0(VAR_4)->tmp);

 if (FUNC_10(VAR_5))
  goto out;

 VAR_5 = FUNC_2(VAR_4);
 if (FUNC_10(VAR_5 < 0))
  goto out;

 FUNC_6(VAR_4, FUNC_4(VAR_4),
      FUNC_5(VAR_4));
 FUNC_7(VAR_4, VAR_9);
 if (VAR_6->props.mode == VAR_3)
  FUNC_8(VAR_4);
 else
  FUNC_9(VAR_4, -VAR_10);


 if (VAR_5 == VAR_2)
  VAR_5 = -VAR_1;

out:
 return VAR_5;
}
