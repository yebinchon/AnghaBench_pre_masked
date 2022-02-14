
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct switch_dev {int dummy; } ;
struct psb6970_priv {int* vlan_table; int* vlan_id; int vlan_tagged; size_t* pvid; int reg_mutex; int phy; int (* write ) (int ,int ,int) ;scalar_t__ vlan; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int) ;
 int VAR_8 ;
 int FUNC_5 (int) ;
 int VAR_9 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (int ,int ,int) ;
 int FUNC_13 (int ,int ,int) ;
 struct psb6970_priv* FUNC_14 (struct switch_dev*) ;

__attribute__((used)) static int FUNC_15(struct switch_dev *VAR_10)
{
 struct psb6970_priv *VAR_11 = FUNC_14(VAR_10);
 int VAR_12, VAR_13;

 FUNC_6(&VAR_11->reg_mutex);

 if (VAR_11->vlan) {

  for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
   u8 VAR_14 = VAR_11->vlan_table[VAR_13];

   if (VAR_14) {
    VAR_11->write(VAR_11->phy, FUNC_5(VAR_13),
         VAR_9 | VAR_11->vlan_id[VAR_13]);
    VAR_11->write(VAR_11->phy, FUNC_4(VAR_13),
         ((VAR_14 & VAR_11->
           vlan_tagged) <<
          VAR_8) | VAR_14);
   } else
    VAR_11->write(VAR_11->phy, FUNC_5(VAR_13), 0);

  }
 }


 for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
  int VAR_15 = 1, VAR_16 = 0x7f | VAR_7, VAR_17 = 0;

  if (VAR_11->vlan) {
   VAR_17 = VAR_0;
   VAR_15 = VAR_11->vlan_id[VAR_11->pvid[VAR_12]];
   VAR_16 |= VAR_4 | VAR_6;

   if ((VAR_12 << 1) & VAR_11->vlan_tagged)
    VAR_16 |= VAR_3 | VAR_5;
  }

  VAR_11->write(VAR_11->phy, FUNC_3(VAR_12), VAR_16);

  if (!FUNC_2(VAR_12)) {
   VAR_11->write(VAR_11->phy, FUNC_1(VAR_12), VAR_17);
   VAR_11->write(VAR_11->phy, FUNC_0(VAR_12), VAR_15);
  }
 }

 FUNC_7(&VAR_11->reg_mutex);
 return 0;
}
