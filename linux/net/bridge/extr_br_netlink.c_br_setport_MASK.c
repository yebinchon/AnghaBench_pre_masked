
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct nlattr {int dummy; } ;
struct net_device {int dummy; } ;
struct net_bridge_port {unsigned long flags; int group_fwd_mask; int dev; int br; } ;


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
 size_t VAR_17 ;
 int VAR_18 ;
 size_t VAR_19 ;
 int VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 size_t VAR_29 ;
 int VAR_30 ;
 size_t VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 size_t VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 struct net_device* FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,struct net_bridge_port*,int ,int ) ;
 int FUNC_2 (struct net_bridge_port*,int ) ;
 int FUNC_3 (struct net_bridge_port*,unsigned long) ;
 int FUNC_4 (struct net_bridge_port*,struct nlattr**,int ,int) ;
 int FUNC_5 (struct net_bridge_port*,int ) ;
 int FUNC_6 (struct net_bridge_port*,scalar_t__) ;
 int FUNC_7 (struct net_bridge_port*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct net_bridge_port*,struct net_device*) ;
 int FUNC_10 (struct net_bridge_port*) ;
 int FUNC_11 (struct nlattr*) ;
 scalar_t__ FUNC_12 (struct nlattr*) ;
 int FUNC_13 (struct nlattr*) ;

__attribute__((used)) static int FUNC_14(struct net_bridge_port *VAR_38, struct nlattr *VAR_39[])
{
 unsigned long VAR_40 = VAR_38->flags;
 bool VAR_41 = 0;
 int VAR_42;

 VAR_42 = FUNC_4(VAR_38, VAR_39, VAR_28, VAR_4);
 if (VAR_42)
  return VAR_42;

 VAR_42 = FUNC_4(VAR_38, VAR_39, VAR_23, VAR_1);
 if (VAR_42)
  return VAR_42;

 VAR_42 = FUNC_4(VAR_38, VAR_39, VAR_20, VAR_8);
 if (VAR_42)
  return VAR_42;

 VAR_42 = FUNC_4(VAR_38, VAR_39, VAR_32, VAR_13);
 if (VAR_42)
  return VAR_42;

 VAR_42 = FUNC_4(VAR_38, VAR_39, VAR_25, VAR_6);
 if (VAR_42)
  return VAR_42;

 VAR_42 = FUNC_4(VAR_38, VAR_39, VAR_36, VAR_2);
 if (VAR_42)
  return VAR_42;

 VAR_42 = FUNC_4(VAR_38, VAR_39, VAR_26, VAR_7);
 if (VAR_42)
  return VAR_42;

 VAR_42 = FUNC_4(VAR_38, VAR_39, VAR_27, VAR_9);
 if (VAR_42)
  return VAR_42;

 VAR_42 = FUNC_4(VAR_38, VAR_39, VAR_18, VAR_0);
 if (VAR_42)
  return VAR_42;

 VAR_42 = FUNC_4(VAR_38, VAR_39, VAR_33, VAR_11);
 if (VAR_42)
  return VAR_42;

 VAR_42 = FUNC_4(VAR_38, VAR_39, VAR_34, VAR_12);
 if (VAR_42)
  return VAR_42;

 VAR_41 = (VAR_38->flags & VAR_14) ? 1 : 0;
 VAR_42 = FUNC_4(VAR_38, VAR_39, VAR_37, VAR_14);
 if (VAR_42)
  return VAR_42;

 if (VAR_41 && !(VAR_38->flags & VAR_14))
  FUNC_10(VAR_38);

 if (VAR_39[VAR_19]) {
  VAR_42 = FUNC_6(VAR_38, FUNC_12(VAR_39[VAR_19]));
  if (VAR_42)
   return VAR_42;
 }

 if (VAR_39[VAR_31]) {
  VAR_42 = FUNC_7(VAR_38, FUNC_11(VAR_39[VAR_31]));
  if (VAR_42)
   return VAR_42;
 }

 if (VAR_39[VAR_35]) {
  VAR_42 = FUNC_5(VAR_38, FUNC_13(VAR_39[VAR_35]));
  if (VAR_42)
   return VAR_42;
 }

 if (VAR_39[VAR_21])
  FUNC_1(VAR_38->br, VAR_38, 0, 0);
 if (VAR_39[VAR_22]) {
  u16 VAR_43 = FUNC_11(VAR_39[VAR_22]);

  if (VAR_43 & VAR_3)
   return -VAR_15;
  VAR_38->group_fwd_mask = VAR_43;
 }

 VAR_42 = FUNC_4(VAR_38, VAR_39, VAR_30,
          VAR_10);
 if (VAR_42)
  return VAR_42;

 VAR_42 = FUNC_4(VAR_38, VAR_39, VAR_24, VAR_5);
 if (VAR_42)
  return VAR_42;

 if (VAR_39[VAR_17]) {
  struct net_device *VAR_44 = ((void*)0);
  u32 VAR_45;

  VAR_45 = FUNC_12(VAR_39[VAR_17]);
  if (VAR_45) {
   VAR_44 = FUNC_0(FUNC_8(VAR_38->dev),
       VAR_45);
   if (!VAR_44)
    return -VAR_16;
  }

  VAR_42 = FUNC_9(VAR_38, VAR_44);
  if (VAR_42)
   return VAR_42;
 }

 FUNC_3(VAR_38, VAR_40 ^ VAR_38->flags);
 return 0;
}
