
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sock {int dummy; } ;
struct mgmt_pending_cmd {int dummy; } ;
struct mgmt_cp_set_phy_confguration {int selected_phys; } ;
struct hci_request {int dummy; } ;
struct hci_dev {int pkt_type; int id; int name; } ;
struct hci_cp_le_set_default_phy {int all_phys; int rx_phys; int tx_phys; } ;
typedef int cp_phy ;


 int FUNC_0 (char*,struct sock*,int ) ;
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
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (struct hci_request*,int ,int,struct hci_cp_le_set_default_phy*) ;
 int FUNC_8 (struct hci_request*,struct hci_dev*) ;
 int FUNC_9 (struct hci_request*,int ) ;
 int FUNC_10 (struct hci_dev*) ;
 int FUNC_11 (struct hci_cp_le_set_default_phy*,int ,int) ;
 int FUNC_12 (struct sock*,int ,int ,int ,int *,int ) ;
 int FUNC_13 (struct sock*,int ,int ,int ) ;
 struct mgmt_pending_cmd* FUNC_14 (struct sock*,int ,struct hci_dev*,void*,int) ;
 int FUNC_15 (struct mgmt_pending_cmd*) ;
 int FUNC_16 (struct hci_dev*,struct sock*) ;
 scalar_t__ FUNC_17 (int ,struct hci_dev*) ;
 int VAR_38 ;

__attribute__((used)) static int FUNC_18(struct sock *VAR_39, struct hci_dev *VAR_40,
     void *VAR_41, u16 VAR_42)
{
 struct mgmt_cp_set_phy_confguration *VAR_43 = VAR_41;
 struct hci_cp_le_set_default_phy VAR_44;
 struct mgmt_pending_cmd *VAR_45;
 struct hci_request VAR_46;
 u32 VAR_47, VAR_48, VAR_49, VAR_50;
 u16 VAR_51 = (VAR_7 | VAR_10);
 bool VAR_52 = 0;
 int VAR_53;

 FUNC_0("sock %p %s", VAR_39, VAR_40->name);

 VAR_48 = FUNC_2(VAR_40);
 VAR_49 = FUNC_4(VAR_40);
 VAR_47 = FUNC_1(VAR_43->selected_phys);

 if (VAR_47 & ~VAR_49)
  return FUNC_13(VAR_39, VAR_40->id,
           VAR_17,
           VAR_36);

 VAR_50 = VAR_49 & ~VAR_48;

 if ((VAR_47 & VAR_50) != VAR_50)
  return FUNC_13(VAR_39, VAR_40->id,
           VAR_17,
           VAR_36);

 if (VAR_47 == FUNC_3(VAR_40))
  return FUNC_12(VAR_39, VAR_40->id,
      VAR_17,
      0, ((void*)0), 0);

 FUNC_5(VAR_40);

 if (!FUNC_10(VAR_40)) {
  VAR_53 = FUNC_13(VAR_39, VAR_40->id,
          VAR_17,
          VAR_37);
  goto unlock;
 }

 if (FUNC_17(VAR_17, VAR_40)) {
  VAR_53 = FUNC_13(VAR_39, VAR_40->id,
          VAR_17,
          VAR_35);
  goto unlock;
 }

 if (VAR_47 & VAR_18)
  VAR_51 |= (VAR_8 | VAR_11);
 else
  VAR_51 &= ~(VAR_8 | VAR_11);

 if (VAR_47 & VAR_19)
  VAR_51 |= (VAR_9 | VAR_12);
 else
  VAR_51 &= ~(VAR_9 | VAR_12);

 if (VAR_47 & VAR_20)
  VAR_51 &= ~VAR_1;
 else
  VAR_51 |= VAR_1;

 if (VAR_47 & VAR_21)
  VAR_51 &= ~VAR_2;
 else
  VAR_51 |= VAR_2;

 if (VAR_47 & VAR_22)
  VAR_51 &= ~VAR_3;
 else
  VAR_51 |= VAR_3;

 if (VAR_47 & VAR_23)
  VAR_51 &= ~VAR_4;
 else
  VAR_51 |= VAR_4;

 if (VAR_47 & VAR_24)
  VAR_51 &= ~VAR_5;
 else
  VAR_51 |= VAR_5;

 if (VAR_47 & VAR_25)
  VAR_51 &= ~VAR_6;
 else
  VAR_51 |= VAR_6;

 if (VAR_51 != VAR_40->pkt_type) {
  VAR_40->pkt_type = VAR_51;
  VAR_52 = 1;
 }

 if ((VAR_47 & VAR_32) ==
     (FUNC_3(VAR_40) & VAR_32)) {
  if (VAR_52)
   FUNC_16(VAR_40, VAR_39);

  VAR_53 = FUNC_12(VAR_39, VAR_40->id,
     VAR_17,
     0, ((void*)0), 0);

  goto unlock;
 }

 VAR_45 = FUNC_14(VAR_39, VAR_17, VAR_40, VAR_41,
          VAR_42);
 if (!VAR_45) {
  VAR_53 = -VAR_0;
  goto unlock;
 }

 FUNC_8(&VAR_46, VAR_40);

 FUNC_11(&VAR_44, 0, sizeof(VAR_44));

 if (!(VAR_47 & VAR_34))
  VAR_44.all_phys |= 0x01;

 if (!(VAR_47 & VAR_33))
  VAR_44.all_phys |= 0x02;

 if (VAR_47 & VAR_27)
  VAR_44.tx_phys |= VAR_13;

 if (VAR_47 & VAR_29)
  VAR_44.tx_phys |= VAR_14;

 if (VAR_47 & VAR_31)
  VAR_44.tx_phys |= VAR_15;

 if (VAR_47 & VAR_26)
  VAR_44.rx_phys |= VAR_13;

 if (VAR_47 & VAR_28)
  VAR_44.rx_phys |= VAR_14;

 if (VAR_47 & VAR_30)
  VAR_44.rx_phys |= VAR_15;

 FUNC_7(&VAR_46, VAR_16, sizeof(VAR_44), &VAR_44);

 VAR_53 = FUNC_9(&VAR_46, VAR_38);
 if (VAR_53 < 0)
  FUNC_15(VAR_45);

unlock:
 FUNC_6(VAR_40);

 return VAR_53;
}
