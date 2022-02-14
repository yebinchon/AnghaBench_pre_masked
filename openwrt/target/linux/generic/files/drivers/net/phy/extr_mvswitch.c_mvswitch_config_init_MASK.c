
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct phy_device {int irq; void* advertising; void* supported; struct net_device* attached_dev; } ;
struct net_device {int features; int priv_flags; int eth_mangle_tx; int eth_mangle_rx; int name; int flags; struct mvswitch_priv* phy_ptr; } ;
struct mvswitch_priv {int* vlans; int orig_features; } ;


 void* VAR_0 ;
 int FUNC_0 (int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (int ,int) ;
 int VAR_17 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_6 (int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_7 (int) ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_8 (struct phy_device*,int ,int,int ) ;
 int FUNC_9 (char*,int ) ;
 struct mvswitch_priv* FUNC_10 (struct phy_device*) ;
 int FUNC_11 (struct phy_device*,int ,int) ;

__attribute__((used)) static int
FUNC_12(struct phy_device *VAR_27)
{
 struct mvswitch_priv *VAR_28 = FUNC_10(VAR_27);
 struct net_device *VAR_29 = VAR_27->attached_dev;
 u8 VAR_30 = 0;
 int VAR_31;

 if (!VAR_29)
  return -VAR_5;

 FUNC_9("%s: Marvell 88E6060 PHY driver attached.\n", VAR_29->name);
 VAR_27->supported = VAR_0;
 VAR_27->advertising = VAR_0;
 VAR_29->phy_ptr = VAR_28;
 VAR_27->irq = VAR_23;





 for (VAR_31 = 0; VAR_31 < VAR_17; VAR_31++)
  VAR_28->vlans[(VAR_31 == VAR_20 ? 2 : 1)] |= (1 << VAR_31);


 for (VAR_31 = 0; VAR_31 < VAR_17; VAR_31++)
  FUNC_11(VAR_27, FUNC_3(VAR_3, VAR_31), 0x00);

 FUNC_7(2);


 FUNC_11(VAR_27, FUNC_6(VAR_2), VAR_11);

 VAR_31 = FUNC_8(VAR_27, FUNC_6(VAR_2), VAR_11, 0);
 if (VAR_31 < 0) {
  FUNC_9("%s: Timeout waiting for the switch to reset.\n", VAR_29->name);
  return VAR_31;
 }


 FUNC_11(VAR_27, FUNC_6(VAR_2),
  VAR_10 |
  VAR_9 |
  FUNC_1(VAR_8)
 );


 FUNC_11(VAR_27, FUNC_3(VAR_3, VAR_12),



  VAR_15 |
  VAR_16 |

  VAR_13
 );

 FUNC_7(2);
 for (VAR_31 = 0; VAR_31 < VAR_17; VAR_31++) {
  u8 VAR_32 = 0;
  int VAR_33;

  VAR_30 = 0;


  for (VAR_33 = 0; VAR_33 < FUNC_0(VAR_28->vlans); VAR_33++) {
   if (VAR_28->vlans[VAR_33] & (1 << VAR_31)) {
    VAR_30 = VAR_28->vlans[VAR_33];
    VAR_32 = VAR_33;
   }
  }

  if (!VAR_30)
   continue;


  VAR_30 |= (1 << VAR_12);


  VAR_30 &= ~(1 << VAR_31);


  FUNC_11(VAR_27, FUNC_3(VAR_24, VAR_31),
   FUNC_5(VAR_30) |
   FUNC_4(VAR_31)
  );


  FUNC_11(VAR_27, FUNC_3(VAR_3, VAR_31),
   VAR_13
  );
 }

 FUNC_11(VAR_27, FUNC_3(VAR_24, VAR_12),
  FUNC_4(VAR_12)
 );


 for (VAR_31 = 0; VAR_31 <= VAR_17; VAR_31++) {
  FUNC_11(VAR_27, FUNC_3(VAR_1, VAR_31),
   FUNC_2(1 << VAR_31)
  );
 }


 FUNC_11(VAR_27, FUNC_6(VAR_4),
  VAR_19 |
  VAR_18
 );

 VAR_29->eth_mangle_rx = VAR_25;
 VAR_29->eth_mangle_tx = VAR_26;
 VAR_28->orig_features = VAR_29->features;





 VAR_29->features |= VAR_21;


 return 0;
}
