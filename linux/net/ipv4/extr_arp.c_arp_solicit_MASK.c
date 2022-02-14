
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct net_device {int priv_flags; int dev_addr; } ;
struct neighbour {int nud_state; int parms; int probes; scalar_t__ primary_key; struct net_device* dev; } ;
struct in_device {int dummy; } ;
struct dst_entry {int dummy; } ;
typedef scalar_t__ __be32 ;
struct TYPE_2__ {scalar_t__ saddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct in_device*) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct in_device* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ,scalar_t__,struct net_device*,scalar_t__,int *,int ,int *,struct dst_entry*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct in_device*,scalar_t__,scalar_t__) ;
 int FUNC_7 (int ,struct net_device*,scalar_t__) ;
 scalar_t__ FUNC_8 (struct net_device*,scalar_t__,int ) ;
 TYPE_1__* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct neighbour*) ;
 int FUNC_11 (int *,struct neighbour*,struct net_device*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 struct dst_entry* FUNC_15 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_16(struct neighbour *VAR_9, struct sk_buff *VAR_10)
{
 __be32 VAR_11 = 0;
 u8 VAR_12[VAR_4], *VAR_13 = ((void*)0);
 struct net_device *VAR_14 = VAR_9->dev;
 __be32 VAR_15 = *(__be32 *)VAR_9->primary_key;
 int VAR_16 = FUNC_4(&VAR_9->probes);
 struct in_device *VAR_17;
 struct dst_entry *VAR_18 = ((void*)0);

 FUNC_13();
 VAR_17 = FUNC_2(VAR_14);
 if (!VAR_17) {
  FUNC_14();
  return;
 }
 switch (FUNC_0(VAR_17)) {
 default:
 case 0:
  if (VAR_10 && FUNC_7(FUNC_5(VAR_14), VAR_14,
       FUNC_9(VAR_10)->saddr) == VAR_6)
   VAR_11 = FUNC_9(VAR_10)->saddr;
  break;
 case 1:
  if (!VAR_10)
   break;
  VAR_11 = FUNC_9(VAR_10)->saddr;
  if (FUNC_7(FUNC_5(VAR_14), VAR_14,
          VAR_11) == VAR_6) {

   if (FUNC_6(VAR_17, VAR_15, VAR_11))
    break;
  }
  VAR_11 = 0;
  break;
 case 2:
  break;
 }
 FUNC_14();

 if (!VAR_11)
  VAR_11 = FUNC_8(VAR_14, VAR_15, VAR_7);

 VAR_16 -= FUNC_1(VAR_9->parms, VAR_8);
 if (VAR_16 < 0) {
  if (!(VAR_9->nud_state & VAR_5))
   FUNC_12("trying to ucast probe in NUD_INVALID\n");
  FUNC_11(VAR_12, VAR_9, VAR_14);
  VAR_13 = VAR_12;
 } else {
  VAR_16 -= FUNC_1(VAR_9->parms, VAR_0);
  if (VAR_16 < 0) {
   FUNC_10(VAR_9);
   return;
  }
 }

 if (VAR_10 && !(VAR_14->priv_flags & VAR_3))
  VAR_18 = FUNC_15(VAR_10);
 FUNC_3(VAR_1, VAR_2, VAR_15, VAR_14, VAR_11,
       VAR_13, VAR_14->dev_addr, ((void*)0), VAR_18);
}
