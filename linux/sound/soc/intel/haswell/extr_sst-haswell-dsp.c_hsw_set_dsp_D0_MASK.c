
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ pci_cfg; } ;
struct sst_dsp {TYPE_1__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
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
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 int FUNC_1 (struct sst_dsp*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct sst_dsp*,int ,int,int) ;
 int FUNC_5 (struct sst_dsp*,int ,int,int) ;
 int FUNC_6 (struct sst_dsp*,int,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct sst_dsp *VAR_37)
{
 int VAR_38 = 10;
 u32 VAR_39, VAR_40;


 VAR_39 = FUNC_3(VAR_37->addr.pci_cfg + VAR_36);
 VAR_39 &= ~(VAR_33 | VAR_34);
 FUNC_8(VAR_39, VAR_37->addr.pci_cfg + VAR_36);


 VAR_39 = FUNC_3(VAR_37->addr.pci_cfg + VAR_35);
 VAR_39 |= VAR_28;
 FUNC_8(VAR_39, VAR_37->addr.pci_cfg + VAR_35);


 VAR_39 = FUNC_3(VAR_37->addr.pci_cfg + VAR_26);
 VAR_39 &= ~VAR_27;
 FUNC_8(VAR_39, VAR_37->addr.pci_cfg + VAR_26);


 while (VAR_38--) {
  VAR_39 = FUNC_3(VAR_37->addr.pci_cfg + VAR_26) & VAR_27;
  if (VAR_39 == 0)
   goto finish;

  FUNC_2(1);
 }

 return -VAR_0;

finish:

 FUNC_5(VAR_37, VAR_5,
  VAR_10 | VAR_11 | VAR_9, 0x0);


 FUNC_5(VAR_37,
  VAR_5, VAR_12 | VAR_8,
  VAR_12 | FUNC_0(4));


 FUNC_5(VAR_37, VAR_1,
  VAR_3 | VAR_2 | VAR_4,
  VAR_3 | VAR_2 | VAR_4);


 FUNC_1(VAR_37);


 VAR_39 = FUNC_3(VAR_37->addr.pci_cfg + VAR_36);
 VAR_39 |= VAR_33 | VAR_34;
 FUNC_8(VAR_39, VAR_37->addr.pci_cfg + VAR_36);

 FUNC_7(50);


 VAR_39 = FUNC_3(VAR_37->addr.pci_cfg + VAR_36);
 VAR_39 &= ~VAR_32;
 FUNC_8(VAR_39, VAR_37->addr.pci_cfg + VAR_36);



 VAR_39 = FUNC_3(VAR_37->addr.pci_cfg + VAR_35);
 VAR_39 |= VAR_29 | VAR_31;

 VAR_40 = 1 << VAR_30;
 FUNC_8(VAR_39 & ~VAR_40, VAR_37->addr.pci_cfg + VAR_35);



 FUNC_5(VAR_37, VAR_6, VAR_7,
  VAR_7);


 FUNC_4(VAR_37, VAR_13,
   VAR_14 | VAR_15,
   VAR_14 | VAR_15);


 FUNC_4(VAR_37, VAR_21, (VAR_22 | VAR_23),
     0x0);
 FUNC_4(VAR_37, VAR_16, (VAR_19 | VAR_17 |
    VAR_20 | VAR_18), 0x0);


 FUNC_6(VAR_37, VAR_25, 0x0);
 FUNC_6(VAR_37, VAR_24, 0x0);
 FUNC_6(VAR_37, 0x80, 0x6);
 FUNC_6(VAR_37, 0xe0, 0x300a);

 return 0;
}
