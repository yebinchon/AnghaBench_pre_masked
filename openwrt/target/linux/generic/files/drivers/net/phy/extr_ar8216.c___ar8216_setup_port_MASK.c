
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ar8xxx_priv {int* vlan_id; size_t* pvid; int vlan_tagged; scalar_t__ vlan; } ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ar8xxx_priv*,int ,int,int) ;

__attribute__((used)) static void
FUNC_3(struct ar8xxx_priv *VAR_20, int VAR_21, u32 VAR_22,
      bool VAR_23)
{
 u32 VAR_24;
 u32 VAR_25, VAR_26;
 u32 VAR_27;

 if (VAR_20->vlan) {
  VAR_27 = VAR_20->vlan_id[VAR_20->pvid[VAR_21]];
  if (VAR_20->vlan_tagged & (1 << VAR_21))
   VAR_25 = VAR_2;
  else
   VAR_25 = VAR_4;
  VAR_26 = VAR_1;
 } else {
  VAR_27 = VAR_21;
  VAR_25 = VAR_3;
  VAR_26 = VAR_0;
 }

 VAR_24 = VAR_23 ? VAR_5 : 0;

 FUNC_2(VAR_20, FUNC_0(VAR_21),
     VAR_6 | VAR_11 |
     VAR_8 | VAR_9 |
     VAR_5 | VAR_7,
     VAR_6 | VAR_24 |
     (VAR_25 << VAR_12) |
     (VAR_13 << VAR_10));

 FUNC_2(VAR_20, FUNC_1(VAR_21),
     VAR_16 | VAR_18 |
     VAR_14,
     (VAR_22 << VAR_17) |
     (VAR_26 << VAR_19) |
     (VAR_27 << VAR_15));
}
