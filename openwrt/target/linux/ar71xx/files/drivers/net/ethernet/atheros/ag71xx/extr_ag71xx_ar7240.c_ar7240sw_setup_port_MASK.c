
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mii_bus {int dummy; } ;
struct ar7240sw {int* vlan_id; size_t* pvid; int vlan_tagged; scalar_t__ vlan; struct mii_bus* mii_bus; } ;


 unsigned int VAR_0 ;
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
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (struct ar7240sw*,unsigned int) ;
 int FUNC_7 (struct ar7240sw*,unsigned int) ;
 int FUNC_8 (struct mii_bus*,int ) ;
 int FUNC_9 (struct mii_bus*,int ,int) ;
 scalar_t__ FUNC_10 (struct ar7240sw*) ;

__attribute__((used)) static void FUNC_11(struct ar7240sw *VAR_24, unsigned VAR_25, u8 VAR_26)
{
 struct mii_bus *VAR_27 = VAR_24->mii_bus;
 u32 VAR_28;
 u32 VAR_29, VAR_30;

 VAR_28 = VAR_5 | VAR_1 |
  VAR_4;

 if (VAR_25 == VAR_0) {
  FUNC_9(VAR_27, FUNC_1(VAR_25),
       VAR_14 |
       VAR_15 |
       VAR_12 |
       VAR_16 |
       VAR_13 |
       VAR_10);
 } else {
  FUNC_9(VAR_27, FUNC_1(VAR_25),
       VAR_11);
 }


 if (VAR_24->vlan) {
  VAR_29 = VAR_24->vlan_id[VAR_24->pvid[VAR_25]];
  VAR_30 = VAR_20;
 } else {
  VAR_29 = VAR_25;
  VAR_30 = VAR_18;
 }

 if (VAR_24->vlan) {
  if (VAR_24->vlan_tagged & FUNC_5(VAR_25))
   VAR_28 |= VAR_6 <<
    VAR_8;
  else
   VAR_28 |= VAR_9 <<
    VAR_8;
 } else {
  VAR_28 |= VAR_7 <<
   VAR_8;
 }

 if (!VAR_26) {
  if (VAR_25 == VAR_0)
   VAR_26 = FUNC_7(VAR_24, VAR_0);
  else
   VAR_26 = FUNC_6(VAR_24, VAR_0);
 }


 VAR_28 |= FUNC_8(VAR_27, FUNC_0(VAR_25)) &
  (VAR_2 | VAR_3);




 VAR_26 &= FUNC_7(VAR_24, VAR_25);

 FUNC_9(VAR_27, FUNC_0(VAR_25), VAR_28);
 if (FUNC_10(VAR_24)) {
  u32 VAR_31, VAR_32;

  VAR_31 = (VAR_29 << VAR_21);
  VAR_32 = (VAR_26 << VAR_23) |
   (VAR_30 << VAR_22);
  FUNC_9(VAR_27, FUNC_3(VAR_25), VAR_31);
  FUNC_9(VAR_27, FUNC_4(VAR_25), VAR_32);
 } else {
  u32 VAR_33;

  VAR_33 = VAR_29 | (VAR_30 << VAR_19) |
         (VAR_26 << VAR_17);

  FUNC_9(VAR_27, FUNC_2(VAR_25), VAR_33);
 }
}
