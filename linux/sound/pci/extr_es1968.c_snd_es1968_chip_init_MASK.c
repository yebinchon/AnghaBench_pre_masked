
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct es1968 {unsigned long io_port; struct pci_dev* pci; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
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
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 int FUNC_0 (struct es1968*,int,int,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct es1968*,int) ;
 int FUNC_4 (struct es1968*,int,int) ;
 int FUNC_5 (int,unsigned long) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int,scalar_t__) ;
 int FUNC_8 (struct pci_dev*,int,int*) ;
 int FUNC_9 (struct pci_dev*,int,int) ;
 int FUNC_10 (struct es1968*) ;
 int FUNC_11 (struct es1968*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (struct es1968*,int ) ;
 int FUNC_14 (struct es1968*,int ,int) ;

__attribute__((used)) static void FUNC_15(struct es1968 *VAR_36)
{
 struct pci_dev *VAR_37 = VAR_36->pci;
 int VAR_38;
 unsigned long VAR_39 = VAR_36->io_port;
 u16 VAR_40;
 u32 VAR_41;
 FUNC_8(VAR_37, VAR_6, &VAR_40);

 VAR_40 &= ~VAR_5;
 VAR_40 &= ~(VAR_25 | VAR_26);
 VAR_40 &= ~VAR_29;
 VAR_40 |= VAR_27;
 VAR_40 |= VAR_24;

 VAR_40 &= ~VAR_32;


 VAR_40 &= ~VAR_31;

 FUNC_9(VAR_37, VAR_6, VAR_40);



 FUNC_8(VAR_37, VAR_7, &VAR_40);

 VAR_40 &= ~(1 << 15);

 VAR_40 &= ~(1 << 14);

 VAR_40 &= ~VAR_30;
 VAR_40 |= VAR_16;
 VAR_40 |= VAR_4;
 VAR_40 &= ~VAR_15;
 VAR_40 |= VAR_3;
 VAR_40 &= ~VAR_17;
 VAR_40 &= ~VAR_21;
 VAR_40 &= ~(1 << 1);
 VAR_40 &= ~VAR_20;

 FUNC_9(VAR_37, VAR_7, VAR_40);



 FUNC_8(VAR_37, VAR_8, &VAR_40);
 VAR_40 &= ~(1 << 0);
 FUNC_9(VAR_37, VAR_8, VAR_40);





 FUNC_8(VAR_37, VAR_9, &VAR_40);

 VAR_40 |= VAR_13;
 VAR_40 &= ~VAR_14;
 VAR_40 &= ~(0x1f);

 FUNC_9(VAR_37, VAR_9, VAR_40);


 FUNC_8(VAR_37, 0x58, &VAR_40);
 VAR_40|=1<<2;
 VAR_40|=1<<3;
 VAR_40&=~(1<<11);
 FUNC_9(VAR_37, 0x58, VAR_40);



 FUNC_11(VAR_36);






 FUNC_7(0xC090, VAR_39 + VAR_12);
 FUNC_12(20);
 FUNC_7(0x3000, VAR_39 + VAR_10);
 FUNC_12(20);





 FUNC_10(VAR_36);



 VAR_41 = FUNC_1(VAR_39 + VAR_11);
 VAR_41 &= ~VAR_28;

 FUNC_6(VAR_41, VAR_39 + VAR_11);



 FUNC_5(0x88, VAR_39+0x1c);
 FUNC_5(0x88, VAR_39+0x1d);
 FUNC_5(0x88, VAR_39+0x1e);
 FUNC_5(0x88, VAR_39+0x1f);




 FUNC_5(0, VAR_39 + VAR_1);
 FUNC_5(3, VAR_39 + VAR_0);
 FUNC_5(0, VAR_39 + VAR_2);




 for (VAR_38 = 0; VAR_38 < 16; VAR_38++) {

  FUNC_7(0x01E0 + VAR_38, VAR_39 + VAR_35);
  FUNC_7(0x0000, VAR_39 + VAR_34);



  FUNC_7(0x01D0 + VAR_38, VAR_39 + VAR_35);
  FUNC_7(0x0000, VAR_39 + VAR_34);
 }
 FUNC_14(VAR_36, VAR_19,
     (FUNC_13(VAR_36, VAR_19) & 0xFF00));
 FUNC_14(VAR_36, VAR_19,
     FUNC_13(VAR_36, VAR_19) | 0x100);
 FUNC_14(VAR_36, VAR_19,
     FUNC_13(VAR_36, VAR_19) & ~0x200);
 FUNC_14(VAR_36, VAR_19,
     FUNC_13(VAR_36, VAR_19) | ~0x400);


 FUNC_4(VAR_36, VAR_18, 0x0000);


 FUNC_4(VAR_36, 0x08, 0xB004);
 FUNC_4(VAR_36, 0x09, 0x001B);
 FUNC_4(VAR_36, 0x0A, 0x8000);
 FUNC_4(VAR_36, 0x0B, 0x3F37);
 FUNC_4(VAR_36, 0x0C, 0x0098);


 FUNC_4(VAR_36, 0x0C,
        (FUNC_3(VAR_36, 0x0C) & ~0xF000) | 0x8000);

 FUNC_4(VAR_36, 0x0C,
        (FUNC_3(VAR_36, 0x0C) & ~0x0F00) | 0x0500);

 FUNC_4(VAR_36, 0x0D, 0x7632);




 VAR_40 = FUNC_2(VAR_39 + VAR_33);

 VAR_40 &= ~0xFA00;
 VAR_40 |= 0xA000;
 VAR_40 &= ~0x0200;

 VAR_40 |= 0x0100;
 VAR_40 |= 0x0080;
 VAR_40 &= ~0x0060;
 VAR_40 |= 0x0020;

 VAR_40 &= ~0x000C;

 VAR_40 &= ~0x0001;

 FUNC_7(VAR_40, VAR_39 + VAR_33);


 for (VAR_38 = 0; VAR_38 < VAR_22; VAR_38++) {
  for (VAR_40 = 0; VAR_40 < VAR_23; VAR_40++)
   FUNC_0(VAR_36, VAR_38, VAR_40, 0);

 }
}
