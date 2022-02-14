
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
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct sst_dsp*,int ,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct sst_dsp *VAR_13)
{
 u32 VAR_14;
 u32 VAR_15;


 VAR_15 = FUNC_0(VAR_13->addr.pci_cfg + VAR_12);
 VAR_15 &= ~(VAR_9 | VAR_10);
 FUNC_3(VAR_15, VAR_13->addr.pci_cfg + VAR_12);


 VAR_14 = FUNC_0(VAR_13->addr.pci_cfg + VAR_11);
 VAR_14 |= VAR_6 |
  VAR_7;
 VAR_14 &= ~(VAR_4 | VAR_5);
 FUNC_3(VAR_14, VAR_13->addr.pci_cfg + VAR_11);


 VAR_14 = FUNC_0(VAR_13->addr.pci_cfg + VAR_12);
 VAR_14 |= VAR_8;
 FUNC_3(VAR_14, VAR_13->addr.pci_cfg + VAR_12);


 FUNC_1(VAR_13, VAR_0,
  VAR_1, 0);


 VAR_14 = FUNC_0(VAR_13->addr.pci_cfg + VAR_2);
 VAR_14 |= VAR_3;
 FUNC_3(VAR_14, VAR_13->addr.pci_cfg + VAR_2);
 FUNC_2(50);


 VAR_15 = FUNC_0(VAR_13->addr.pci_cfg + VAR_12);
 VAR_15 |= VAR_9 | VAR_10;
 FUNC_3(VAR_15, VAR_13->addr.pci_cfg + VAR_12);

 FUNC_2(50);

}
