
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct gsw_mt753x {TYPE_2__* vlan_entries; TYPE_1__* port_entries; } ;
struct TYPE_4__ {int member; int etags; int vid; } ;
struct TYPE_3__ {int pvid; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct gsw_mt753x*,int ) ;
 int FUNC_5 (struct gsw_mt753x*,int ,int) ;
 int FUNC_6 (struct gsw_mt753x*,int,int,int,int) ;

void FUNC_7(struct gsw_mt753x *VAR_8)
{
 int VAR_9, VAR_10;
 u8 VAR_11;
 u8 VAR_12;


 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++)
  FUNC_5(VAR_8, FUNC_1(VAR_9),
     VAR_3 | VAR_4);


 VAR_11 = 0;
 VAR_12 = 0;

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  u8 VAR_13 = VAR_8->vlan_entries[VAR_9].member;
  u8 VAR_14 = VAR_8->vlan_entries[VAR_9].etags;

  if (!VAR_13)
   continue;

  for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
   if (!(VAR_13 & FUNC_0(VAR_10)))
    continue;

   if (VAR_14 & FUNC_0(VAR_10))
    VAR_11 |= 1u << VAR_10;
   else
    VAR_12 |= 1u << VAR_10;
  }
 }


 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  u32 VAR_15 = 0x8100 << VAR_5;

  if (VAR_12 & FUNC_0(VAR_9) && !(VAR_11 & FUNC_0(VAR_9)))
   VAR_15 = (0x8100 << VAR_5) |
    (VAR_6 << VAR_7);

  FUNC_5(VAR_8, FUNC_3(VAR_9), VAR_15);
 }


 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
  FUNC_6(VAR_8, VAR_9, VAR_9, 0, 0);




 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  u16 VAR_16 = VAR_8->vlan_entries[VAR_9].vid;
  u8 VAR_17 = VAR_8->vlan_entries[VAR_9].member;
  u8 VAR_18 = VAR_8->vlan_entries[VAR_9].etags;

  if (VAR_17)
   FUNC_6(VAR_8, VAR_9, VAR_16, VAR_17, VAR_18);
 }


 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  int VAR_19 = VAR_8->port_entries[VAR_9].pvid;
  u16 VAR_20 = 0;
  u32 VAR_21;

  if (VAR_19 < VAR_2 && VAR_8->vlan_entries[VAR_19].member)
   VAR_20 = VAR_8->vlan_entries[VAR_19].vid;

  VAR_21 = FUNC_4(VAR_8, FUNC_2(VAR_9));
  VAR_21 &= ~VAR_0;
  VAR_21 |= VAR_20;
  FUNC_5(VAR_8, FUNC_2(VAR_9), VAR_21);
 }
}
