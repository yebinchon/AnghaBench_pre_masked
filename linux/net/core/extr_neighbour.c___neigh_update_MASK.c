
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int addr_len; } ;
struct neighbour {int nud_state; int* ha; int lock; scalar_t__ arp_queue_len_bytes; int arp_queue; int (* output ) (struct neighbour*,struct sk_buff*) ;TYPE_1__* parms; void* confirmed; int ha_lock; int probes; void* updated; scalar_t__ dead; struct net_device* dev; } ;
struct dst_entry {int dummy; } ;
struct TYPE_2__ {int reachable_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
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
 struct sk_buff* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 struct neighbour* FUNC_5 (struct dst_entry*,struct sk_buff*) ;
 void* VAR_17 ;
 int FUNC_6 (int const*,int*,int ) ;
 int FUNC_7 (int const**,int const*,int ) ;
 int FUNC_8 (struct neighbour*,void*) ;
 int FUNC_9 (struct neighbour*) ;
 int FUNC_10 (struct neighbour*) ;
 int FUNC_11 (struct neighbour*) ;
 int FUNC_12 (struct neighbour*) ;
 int FUNC_13 (struct neighbour*) ;
 int FUNC_14 (struct neighbour*,int,int*) ;
 int FUNC_15 (struct neighbour*) ;
 int FUNC_16 (struct neighbour*) ;
 int FUNC_17 (struct neighbour*,int,int*) ;
 int FUNC_18 (struct neighbour*,int) ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 struct dst_entry* FUNC_21 (struct sk_buff*) ;
 int FUNC_22 (struct neighbour*,struct sk_buff*) ;
 int FUNC_23 (struct neighbour*,int const*,int,int,int) ;
 int FUNC_24 (struct neighbour*,int) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *) ;

__attribute__((used)) static int FUNC_29(struct neighbour *VAR_18, const u8 *VAR_19,
     u8 VAR_20, u32 VAR_21, u32 VAR_22,
     struct netlink_ext_ack *VAR_23)
{
 bool VAR_24 = 0;
 u8 VAR_25;
 int VAR_26;
 int VAR_27 = 0;
 struct net_device *VAR_28;
 int VAR_29 = 0;

 FUNC_23(VAR_18, VAR_19, VAR_20, VAR_21, VAR_22);

 FUNC_25(&VAR_18->lock);

 VAR_28 = VAR_18->dev;
 VAR_25 = VAR_18->nud_state;
 VAR_26 = -VAR_2;

 if (!(VAR_21 & VAR_3) &&
     (VAR_25 & (VAR_11 | VAR_12)))
  goto out;
 if (VAR_18->dead) {
  FUNC_1(VAR_23, "Neighbor entry is now dead");
  goto out;
 }

 VAR_24 = FUNC_14(VAR_18, VAR_21, &VAR_27);

 if (!(VAR_20 & VAR_16)) {
  FUNC_10(VAR_18);
  if (VAR_25 & VAR_7)
   FUNC_13(VAR_18);
  VAR_18->nud_state = VAR_20;
  VAR_26 = 0;
  VAR_27 = VAR_25 & VAR_16;
  if ((VAR_25 & (VAR_9 | VAR_13)) &&
      (VAR_20 & VAR_8)) {
   FUNC_11(VAR_18);
   VAR_27 = 1;
  }
  goto out;
 }


 if (!VAR_28->addr_len) {

  VAR_19 = VAR_18->ha;
 } else if (VAR_19) {





  if ((VAR_25 & VAR_16) &&
      !FUNC_6(VAR_19, VAR_18->ha, VAR_28->addr_len))
   VAR_19 = VAR_18->ha;
 } else {



  VAR_26 = -VAR_1;
  if (!(VAR_25 & VAR_16)) {
   FUNC_1(VAR_23, "No link layer address given");
   goto out;
  }
  VAR_19 = VAR_18->ha;
 }




 if (VAR_20 & VAR_7)
  VAR_18->confirmed = VAR_17;




 VAR_26 = 0;
 VAR_29 = VAR_21 & VAR_5;
 if (VAR_25 & VAR_16) {
  if (VAR_19 != VAR_18->ha && !(VAR_21 & VAR_4)) {
   VAR_29 = 0;
   if ((VAR_21 & VAR_6) &&
       (VAR_25 & VAR_7)) {
    VAR_19 = VAR_18->ha;
    VAR_20 = VAR_15;
   } else
    goto out;
  } else {
   if (VAR_19 == VAR_18->ha && VAR_20 == VAR_15 &&
       !(VAR_21 & VAR_3))
    VAR_20 = VAR_25;
  }
 }





 if (VAR_20 != VAR_25 || VAR_19 != VAR_18->ha)
  VAR_18->updated = VAR_17;

 if (VAR_20 != VAR_25) {
  FUNC_10(VAR_18);
  if (VAR_20 & VAR_13)
   FUNC_4(&VAR_18->probes, 0);
  if (VAR_20 & VAR_10)
   FUNC_8(VAR_18, (VAR_17 +
      ((VAR_20 & VAR_14) ?
       VAR_18->parms->reachable_time :
       0)));
  VAR_18->nud_state = VAR_20;
  VAR_27 = 1;
 }

 if (VAR_19 != VAR_18->ha) {
  FUNC_26(&VAR_18->ha_lock);
  FUNC_7(&VAR_18->ha, VAR_19, VAR_28->addr_len);
  FUNC_27(&VAR_18->ha_lock);
  FUNC_16(VAR_18);
  if (!(VAR_20 & VAR_7))
   VAR_18->confirmed = VAR_17 -
          (FUNC_0(VAR_18->parms, VAR_0) << 1);
  VAR_27 = 1;
 }
 if (VAR_20 == VAR_25)
  goto out;
 if (VAR_20 & VAR_7)
  FUNC_9(VAR_18);
 else
  FUNC_13(VAR_18);
 if (!(VAR_25 & VAR_16)) {
  struct sk_buff *VAR_30;



  while (VAR_18->nud_state & VAR_16 &&
         (VAR_30 = FUNC_2(&VAR_18->arp_queue)) != ((void*)0)) {
   struct dst_entry *VAR_31 = FUNC_21(VAR_30);
   struct neighbour *VAR_32, *VAR_33 = VAR_18;
   FUNC_28(&VAR_18->lock);

   FUNC_19();
   VAR_32 = ((void*)0);
   if (VAR_31) {
    VAR_32 = FUNC_5(VAR_31, VAR_30);
    if (VAR_32)
     VAR_33 = VAR_32;
   }
   VAR_33->output(VAR_33, VAR_30);
   if (VAR_32)
    FUNC_12(VAR_32);
   FUNC_20();

   FUNC_25(&VAR_18->lock);
  }
  FUNC_3(&VAR_18->arp_queue);
  VAR_18->arp_queue_len_bytes = 0;
 }
out:
 if (VAR_29)
  FUNC_17(VAR_18, VAR_21, &VAR_27);
 FUNC_28(&VAR_18->lock);

 if (((VAR_20 ^ VAR_25) & VAR_12) || VAR_24)
  FUNC_15(VAR_18);

 if (VAR_27)
  FUNC_18(VAR_18, VAR_22);

 FUNC_24(VAR_18, VAR_26);

 return VAR_26;
}
