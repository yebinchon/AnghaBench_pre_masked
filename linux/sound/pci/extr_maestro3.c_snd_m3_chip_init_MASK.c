
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct snd_m3 {unsigned long iobase; int hv_config; scalar_t__ allegro_flag; struct pci_dev* pci; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
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
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (struct pci_dev*,int ,int*) ;
 int FUNC_3 (struct pci_dev*,int ,int*) ;
 int FUNC_4 (struct pci_dev*,int ,int) ;
 int FUNC_5 (struct pci_dev*,int ,int) ;
 int FUNC_6 (struct snd_m3*) ;

__attribute__((used)) static int
FUNC_7(struct snd_m3 *VAR_33)
{
 struct pci_dev *VAR_34 = VAR_33->pci;
 unsigned long VAR_35 = VAR_33->iobase;
 u32 VAR_36;
 u16 VAR_37;
 u8 VAR_38;

 FUNC_3(VAR_34, VAR_23, &VAR_37);
 VAR_37 &= ~(VAR_31|VAR_10|
        VAR_20|VAR_21|VAR_0|
        VAR_8);
 FUNC_5(VAR_34, VAR_23, VAR_37);

 FUNC_2(VAR_34, VAR_22, &VAR_36);
 VAR_36 &= ~(VAR_13 | VAR_26 | VAR_12);
 VAR_36 |= VAR_33->hv_config;

 VAR_36 |= VAR_26;
 VAR_36 |= VAR_25 | VAR_5 | VAR_32;
 FUNC_4(VAR_34, VAR_22, VAR_36);

 FUNC_1(VAR_27, VAR_33->iobase + VAR_4);
 FUNC_2(VAR_34, VAR_22, &VAR_36);
 VAR_36 &= ~VAR_17;
 if (!VAR_33->allegro_flag) {
  VAR_36 &= ~VAR_16;
  VAR_36 |= VAR_18;
 }
 VAR_36 &= ~( VAR_6 | VAR_7 );
 FUNC_4(VAR_34, VAR_22, VAR_36);

 if (VAR_33->allegro_flag) {
  FUNC_2(VAR_34, VAR_24, &VAR_36);
  VAR_36 |= VAR_19;
  FUNC_4(VAR_34, VAR_24, VAR_36);
 }

 VAR_38 = FUNC_0(VAR_33->iobase + VAR_3);
 VAR_38 &= ~( VAR_9 | VAR_2);
 VAR_38 |= VAR_2;
 VAR_38 |= VAR_1;
 FUNC_1(VAR_38, VAR_33->iobase + VAR_3);

 FUNC_6(VAR_33);
 FUNC_1(VAR_28, VAR_33->iobase + VAR_4);

 FUNC_1(0x00, VAR_35 + VAR_11);
 FUNC_1(0x88, VAR_35 + VAR_30);
 FUNC_1(0x88, VAR_35 + VAR_15);
 FUNC_1(0x88, VAR_35 + VAR_29);
 FUNC_1(0x88, VAR_35 + VAR_14);

 return 0;
}
