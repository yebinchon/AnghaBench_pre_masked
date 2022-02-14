
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct via82xx {scalar_t__ chip_type; int ac97_secondary; int port; int * playback_volume_c; int ** playback_volume; struct pci_dev* pci; TYPE_1__* card; } ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct via82xx*,int ) ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_1 (int ,char*,unsigned int) ;
 unsigned long VAR_18 ;
 unsigned long FUNC_2 (int) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct pci_dev*) ;
 struct pci_dev* FUNC_6 (int,int,int *) ;
 int FUNC_7 (struct pci_dev*,int,unsigned char*) ;
 int FUNC_8 (struct pci_dev*,int,unsigned char) ;
 int FUNC_9 (int) ;
 unsigned int FUNC_10 (struct via82xx*) ;
 int FUNC_11 (struct via82xx*,unsigned int) ;
 scalar_t__ FUNC_12 (unsigned long,unsigned long) ;
 int FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct via82xx *VAR_19)
{
 unsigned int VAR_20;
 unsigned long VAR_21;
 unsigned char VAR_22;






 FUNC_7(VAR_19->pci, VAR_9, &VAR_22);
 if (! (VAR_22 & VAR_3)) {

  FUNC_8(VAR_19->pci, VAR_4,
          VAR_5 |
          VAR_7 |
          VAR_8);
  FUNC_13(100);

  FUNC_8(VAR_19->pci, VAR_4, 0x00);
  FUNC_13(100);
  FUNC_8(VAR_19->pci, VAR_4, VAR_6);
  FUNC_13(100);
 }



 FUNC_7(VAR_19->pci, VAR_4, &VAR_22);
 if ((VAR_22 & VAR_6) != VAR_6) {


  FUNC_8(VAR_19->pci, VAR_4, VAR_6);
  FUNC_13(100);
 }


 VAR_21 = VAR_18 + FUNC_2(750);
 do {
  FUNC_7(VAR_19->pci, VAR_9, &VAR_22);
  if (VAR_22 & VAR_3)
   break;
  FUNC_9(1);
 } while (FUNC_12(VAR_18, VAR_21));

 if ((VAR_20 = FUNC_10(VAR_19)) & VAR_12)
  FUNC_1(VAR_19->card->dev,
   "AC'97 codec is not ready [0x%x]\n", VAR_20);
 if (VAR_19->chip_type == VAR_1) {

  FUNC_8(VAR_19->pci, VAR_10, 0);

  FUNC_4(0, FUNC_0(VAR_19, VAR_0));
 }

 if (VAR_19->chip_type != VAR_1) {



  struct pci_dev *VAR_23;
  VAR_23 = FUNC_6(0x1106, 0x3068, ((void*)0));
  if (VAR_23) {
   unsigned char VAR_24;
   FUNC_7(VAR_23, 0x44, &VAR_24);
   FUNC_8(VAR_23, 0x44, VAR_24 | 0x40);
   FUNC_5(VAR_23);
  }
 }

 if (VAR_19->chip_type != VAR_2) {
  int VAR_25, VAR_26;
  for (VAR_26 = 0; VAR_26 < 4; VAR_26++) {
   unsigned long VAR_27 = VAR_19->port + 0x10 * VAR_26;
   for (VAR_25 = 0; VAR_25 < 2; VAR_25++) {
    VAR_19->playback_volume[VAR_26][VAR_25]=VAR_19->playback_volume_c[VAR_25];
    FUNC_3(VAR_19->playback_volume_c[VAR_25],
         VAR_27 + VAR_17 + VAR_25);
   }
  }
 }

 return 0;
}
