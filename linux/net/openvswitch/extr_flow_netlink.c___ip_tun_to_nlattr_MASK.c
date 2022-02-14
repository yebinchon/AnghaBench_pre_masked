
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_5__ {int dst; int src; } ;
struct TYPE_4__ {int dst; int src; } ;
struct TYPE_6__ {TYPE_2__ ipv6; TYPE_1__ ipv4; } ;
struct ip_tunnel_key {int tun_flags; scalar_t__ tp_dst; scalar_t__ tp_src; scalar_t__ ttl; scalar_t__ tos; TYPE_3__ u; int tun_id; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int,void const*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ) ;
 int FUNC_5 (struct sk_buff*,int ,int *) ;
 int FUNC_6 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_8 (struct sk_buff*,void const*,int) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_25,
         const struct ip_tunnel_key *VAR_26,
         const void *VAR_27, int VAR_28,
         unsigned short VAR_29, u8 VAR_30)
{
 if (VAR_26->tun_flags & VAR_22 &&
     FUNC_3(VAR_25, VAR_6, VAR_26->tun_id,
    VAR_13))
  return -VAR_0;

 if (VAR_30 & VAR_1)
  return FUNC_4(VAR_25, VAR_8)
         ? -VAR_0 : 0;

 switch (VAR_29) {
 case 129:
  if (VAR_26->u.ipv4.src &&
      FUNC_6(VAR_25, VAR_9,
        VAR_26->u.ipv4.src))
   return -VAR_0;
  if (VAR_26->u.ipv4.dst &&
      FUNC_6(VAR_25, VAR_7,
        VAR_26->u.ipv4.dst))
   return -VAR_0;
  break;
 case 128:
  if (!FUNC_0(&VAR_26->u.ipv6.src) &&
      FUNC_5(VAR_25, VAR_11,
         &VAR_26->u.ipv6.src))
   return -VAR_0;
  if (!FUNC_0(&VAR_26->u.ipv6.dst) &&
      FUNC_5(VAR_25, VAR_10,
         &VAR_26->u.ipv6.dst))
   return -VAR_0;
  break;
 }
 if (VAR_26->tos &&
     FUNC_7(VAR_25, VAR_14, VAR_26->tos))
  return -VAR_0;
 if (FUNC_7(VAR_25, VAR_17, VAR_26->ttl))
  return -VAR_0;
 if ((VAR_26->tun_flags & VAR_19) &&
     FUNC_4(VAR_25, VAR_3))
  return -VAR_0;
 if ((VAR_26->tun_flags & VAR_18) &&
     FUNC_4(VAR_25, VAR_2))
  return -VAR_0;
 if (VAR_26->tp_src &&
     FUNC_2(VAR_25, VAR_16, VAR_26->tp_src))
  return -VAR_0;
 if (VAR_26->tp_dst &&
     FUNC_2(VAR_25, VAR_15, VAR_26->tp_dst))
  return -VAR_0;
 if ((VAR_26->tun_flags & VAR_23) &&
     FUNC_4(VAR_25, VAR_12))
  return -VAR_0;
 if (VAR_28) {
  if (VAR_26->tun_flags & VAR_21 &&
      FUNC_1(VAR_25, VAR_5,
       VAR_28, VAR_27))
   return -VAR_0;
  else if (VAR_26->tun_flags & VAR_24 &&
    FUNC_8(VAR_25, VAR_27, VAR_28))
   return -VAR_0;
  else if (VAR_26->tun_flags & VAR_20 &&
    FUNC_1(VAR_25, VAR_4,
     VAR_28, VAR_27))
   return -VAR_0;
 }

 return 0;
}
