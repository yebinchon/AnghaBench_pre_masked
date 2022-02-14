
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_6__ {scalar_t__ shadowing; scalar_t__ exists; } ;
struct TYPE_5__ {scalar_t__ shadowing; scalar_t__ exists; } ;
struct TYPE_8__ {TYPE_2__ querier_ipv6; TYPE_1__ querier_ipv4; scalar_t__ bridged; int tvlv_flags; } ;
struct TYPE_7__ {TYPE_4__ mla_flags; } ;
struct batadv_priv {TYPE_3__ mcast; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ,int ) ;

int FUNC_1(struct sk_buff *VAR_9,
          struct batadv_priv *VAR_10)
{
 u32 VAR_11 = VAR_10->mcast.mla_flags.tvlv_flags;
 u32 VAR_12 = VAR_7;

 if (VAR_10->mcast.mla_flags.bridged) {
  VAR_12 |= VAR_2;

  if (VAR_10->mcast.mla_flags.querier_ipv4.exists)
   VAR_12 |= VAR_3;
  if (VAR_10->mcast.mla_flags.querier_ipv6.exists)
   VAR_12 |= VAR_5;
  if (VAR_10->mcast.mla_flags.querier_ipv4.shadowing)
   VAR_12 |= VAR_4;
  if (VAR_10->mcast.mla_flags.querier_ipv6.shadowing)
   VAR_12 |= VAR_6;
 }

 if (FUNC_0(VAR_9, VAR_0, VAR_11) ||
     FUNC_0(VAR_9, VAR_1, VAR_12))
  return -VAR_8;

 return 0;
}
