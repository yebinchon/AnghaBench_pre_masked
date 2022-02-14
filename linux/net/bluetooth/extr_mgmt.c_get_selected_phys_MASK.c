
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hci_dev {int pkt_type; int le_tx_def_phys; int le_rx_def_phys; } ;


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
 scalar_t__ FUNC_0 (struct hci_dev*) ;
 scalar_t__ FUNC_1 (struct hci_dev*) ;
 scalar_t__ FUNC_2 (struct hci_dev*) ;
 scalar_t__ FUNC_3 (struct hci_dev*) ;
 scalar_t__ FUNC_4 (struct hci_dev*) ;
 scalar_t__ FUNC_5 (struct hci_dev*) ;

__attribute__((used)) static u32 FUNC_6(struct hci_dev *VAR_28)
{
 u32 VAR_29 = 0;

 if (FUNC_0(VAR_28)) {
  VAR_29 |= VAR_13;

  if (VAR_28->pkt_type & (VAR_8 | VAR_6))
   VAR_29 |= VAR_14;

  if (VAR_28->pkt_type & (VAR_9 | VAR_7))
   VAR_29 |= VAR_15;

  if (FUNC_1(VAR_28)) {
   if (!(VAR_28->pkt_type & VAR_0))
    VAR_29 |= VAR_16;

   if (FUNC_3(VAR_28) &&
       !(VAR_28->pkt_type & VAR_1))
    VAR_29 |= VAR_17;

   if (FUNC_4(VAR_28) &&
       !(VAR_28->pkt_type & VAR_2))
    VAR_29 |= VAR_18;

   if (FUNC_2(VAR_28)) {
    if (!(VAR_28->pkt_type & VAR_3))
     VAR_29 |= VAR_19;

    if (FUNC_3(VAR_28) &&
        !(VAR_28->pkt_type & VAR_4))
     VAR_29 |= VAR_20;

    if (FUNC_4(VAR_28) &&
        !(VAR_28->pkt_type & VAR_5))
     VAR_29 |= VAR_21;
   }
  }
 }

 if (FUNC_5(VAR_28)) {
  if (VAR_28->le_tx_def_phys & VAR_10)
   VAR_29 |= VAR_23;

  if (VAR_28->le_rx_def_phys & VAR_10)
   VAR_29 |= VAR_22;

  if (VAR_28->le_tx_def_phys & VAR_11)
   VAR_29 |= VAR_25;

  if (VAR_28->le_rx_def_phys & VAR_11)
   VAR_29 |= VAR_24;

  if (VAR_28->le_tx_def_phys & VAR_12)
   VAR_29 |= VAR_27;

  if (VAR_28->le_rx_def_phys & VAR_12)
   VAR_29 |= VAR_26;
 }

 return VAR_29;
}
