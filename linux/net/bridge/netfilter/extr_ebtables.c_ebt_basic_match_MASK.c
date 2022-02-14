
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct net_bridge_port {TYPE_1__* br; } ;
struct ethhdr {scalar_t__ h_proto; int h_dest; int h_source; } ;
struct ebt_entry {int bitmask; scalar_t__ ethproto; int destmsk; int destmac; int sourcemsk; int sourcemac; int logical_out; int logical_in; int out; int in; } ;
typedef scalar_t__ __be16 ;
struct TYPE_2__ {struct net_device const* dev; } ;


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
 scalar_t__ FUNC_0 (struct ebt_entry const*,int ,int) ;
 struct net_bridge_port* FUNC_1 (struct net_device const*) ;
 int FUNC_2 (int ,struct net_device const*) ;
 struct ethhdr* FUNC_3 (struct sk_buff const*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct sk_buff const*) ;

__attribute__((used)) static inline int
FUNC_8(const struct ebt_entry *VAR_12, const struct sk_buff *VAR_13,
  const struct net_device *VAR_14, const struct net_device *VAR_15)
{
 const struct ethhdr *VAR_16 = FUNC_3(VAR_13);
 const struct net_bridge_port *VAR_17;
 __be16 VAR_18;

 if (FUNC_7(VAR_13))
  VAR_18 = FUNC_6(VAR_11);
 else
  VAR_18 = VAR_16->h_proto;

 if (VAR_12->bitmask & VAR_0) {
  if (FUNC_0(VAR_12, VAR_7, FUNC_4(VAR_18)))
   return 1;
 } else if (!(VAR_12->bitmask & VAR_9) &&
     FUNC_0(VAR_12, VAR_7, VAR_12->ethproto != VAR_18))
  return 1;

 if (FUNC_0(VAR_12, VAR_3, FUNC_2(VAR_12->in, VAR_14)))
  return 1;
 if (FUNC_0(VAR_12, VAR_6, FUNC_2(VAR_12->out, VAR_15)))
  return 1;

 if (VAR_14 && (VAR_17 = FUNC_1(VAR_14)) != ((void*)0) &&
     FUNC_0(VAR_12, VAR_4,
      FUNC_2(VAR_12->logical_in, VAR_17->br->dev)))
  return 1;
 if (VAR_15 && (VAR_17 = FUNC_1(VAR_15)) != ((void*)0) &&
     FUNC_0(VAR_12, VAR_5,
      FUNC_2(VAR_12->logical_out, VAR_17->br->dev)))
  return 1;

 if (VAR_12->bitmask & VAR_10) {
  if (FUNC_0(VAR_12, VAR_8,
       !FUNC_5(VAR_16->h_source, VAR_12->sourcemac,
           VAR_12->sourcemsk)))
   return 1;
 }
 if (VAR_12->bitmask & VAR_1) {
  if (FUNC_0(VAR_12, VAR_2,
       !FUNC_5(VAR_16->h_dest, VAR_12->destmac,
           VAR_12->destmsk)))
   return 1;
 }
 return 0;
}
