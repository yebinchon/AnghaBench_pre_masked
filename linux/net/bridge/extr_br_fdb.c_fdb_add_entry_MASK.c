
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct net_bridge_port {scalar_t__ state; } ;
struct net_bridge_fdb_entry {int is_local; int is_static; scalar_t__ is_sticky; int added_by_user; void* updated; void* used; struct net_bridge_port* dst; } ;
struct net_bridge {TYPE_1__* dev; } ;
struct TYPE_2__ {int name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct net_bridge_fdb_entry* FUNC_0 (struct net_bridge*,scalar_t__ const*,int) ;
 int FUNC_1 (struct net_bridge*,scalar_t__ const*) ;
 struct net_bridge_fdb_entry* FUNC_2 (struct net_bridge*,struct net_bridge_port*,scalar_t__ const*,int,int ,int ) ;
 int FUNC_3 (struct net_bridge*,scalar_t__ const*) ;
 int FUNC_4 (struct net_bridge*,struct net_bridge_fdb_entry*,int ,int) ;
 int FUNC_5 (struct net_bridge*,struct net_bridge_fdb_entry*) ;
 void* VAR_13 ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static int FUNC_7(struct net_bridge *VAR_14, struct net_bridge_port *VAR_15,
    const u8 *VAR_16, u16 VAR_17, u16 VAR_18, u16 VAR_19,
    u8 VAR_20)
{
 u8 VAR_21 = !!(VAR_20 & VAR_9);
 struct net_bridge_fdb_entry *VAR_22;
 bool VAR_23 = 0;


 if (VAR_15 && !(VAR_17 & VAR_11) && !(VAR_17 & VAR_10) &&
     !(VAR_15->state == VAR_1 ||
       VAR_15->state == VAR_0))
  return -VAR_6;

 if (!VAR_15 && !(VAR_17 & VAR_11)) {
  FUNC_6("bridge: RTM_NEWNEIGH %s without NUD_PERMANENT\n",
   VAR_14->dev->name);
  return -VAR_3;
 }

 if (VAR_21 && (VAR_17 & VAR_11))
  return -VAR_3;

 VAR_22 = FUNC_0(VAR_14, VAR_16, VAR_19);
 if (VAR_22 == ((void*)0)) {
  if (!(VAR_18 & VAR_7))
   return -VAR_4;

  VAR_22 = FUNC_2(VAR_14, VAR_15, VAR_16, VAR_19, 0, 0);
  if (!VAR_22)
   return -VAR_5;

  VAR_23 = 1;
 } else {
  if (VAR_18 & VAR_8)
   return -VAR_2;

  if (VAR_22->dst != VAR_15) {
   VAR_22->dst = VAR_15;
   VAR_23 = 1;
  }
 }

 if (FUNC_5(VAR_14, VAR_22) != VAR_17) {
  if (VAR_17 & VAR_11) {
   VAR_22->is_local = 1;
   if (!VAR_22->is_static) {
    VAR_22->is_static = 1;
    FUNC_1(VAR_14, VAR_16);
   }
  } else if (VAR_17 & VAR_10) {
   VAR_22->is_local = 0;
   if (!VAR_22->is_static) {
    VAR_22->is_static = 1;
    FUNC_1(VAR_14, VAR_16);
   }
  } else {
   VAR_22->is_local = 0;
   if (VAR_22->is_static) {
    VAR_22->is_static = 0;
    FUNC_3(VAR_14, VAR_16);
   }
  }

  VAR_23 = 1;
 }

 if (VAR_21 != VAR_22->is_sticky) {
  VAR_22->is_sticky = VAR_21;
  VAR_23 = 1;
 }

 VAR_22->added_by_user = 1;

 VAR_22->used = VAR_13;
 if (VAR_23) {
  VAR_22->updated = VAR_13;
  FUNC_4(VAR_14, VAR_22, VAR_12, 1);
 }

 return 0;
}
