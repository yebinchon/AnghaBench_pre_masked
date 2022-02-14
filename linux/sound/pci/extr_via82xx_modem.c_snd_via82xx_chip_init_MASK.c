
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct via82xx_modem {int ac97_secondary; TYPE_1__* card; int pci; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct via82xx_modem*,int ) ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned char VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 int FUNC_1 (int ,char*,unsigned int) ;
 unsigned long VAR_15 ;
 unsigned long FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int,unsigned char*) ;
 int FUNC_5 (int ,int,unsigned char) ;
 int FUNC_6 (int) ;
 unsigned int FUNC_7 (struct via82xx_modem*) ;
 int FUNC_8 (struct via82xx_modem*,unsigned int) ;
 scalar_t__ FUNC_9 (unsigned long,unsigned long) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct via82xx_modem *VAR_16)
{
 unsigned int VAR_17;
 unsigned long VAR_18;
 unsigned char VAR_19;

 FUNC_4(VAR_16->pci, VAR_8, &VAR_19);
 if((VAR_19 & VAR_9) != VAR_9) {
  FUNC_5(VAR_16->pci, 0x44, VAR_19|VAR_9);
  FUNC_10(100);
 }

 FUNC_4(VAR_16->pci, VAR_7, &VAR_19);
 if (! (VAR_19 & VAR_1)) {

  FUNC_5(VAR_16->pci, VAR_2,
          VAR_3 |
          VAR_5 |
          VAR_6);
  FUNC_10(100);

  FUNC_5(VAR_16->pci, VAR_2, 0x00);
  FUNC_10(100);







  FUNC_5(VAR_16->pci, VAR_2, VAR_4);
  FUNC_10(100);
 }

 FUNC_4(VAR_16->pci, VAR_2, &VAR_19);
 if ((VAR_19 & VAR_4) != VAR_4) {

  FUNC_5(VAR_16->pci, VAR_2, VAR_4);
  FUNC_10(100);
 }


 VAR_18 = VAR_15 + FUNC_2(750);
 do {
  FUNC_4(VAR_16->pci, VAR_7, &VAR_19);
  if (VAR_19 & VAR_1)
   break;
  FUNC_6(1);
 } while (FUNC_9(VAR_15, VAR_18));

 if ((VAR_17 = FUNC_7(VAR_16)) & VAR_10)
  FUNC_1(VAR_16->card->dev,
   "AC'97 codec is not ready [0x%x]\n", VAR_17);

 FUNC_8(VAR_16, VAR_13 |
     VAR_14 |
     (VAR_11 << VAR_12));
 VAR_18 = VAR_15 + FUNC_2(750);
 FUNC_8(VAR_16, VAR_13 |
     VAR_14 |
     (VAR_11 << VAR_12));
 do {
  if ((VAR_17 = FUNC_7(VAR_16)) & VAR_14) {
   VAR_16->ac97_secondary = 1;
   goto __ac97_ok2;
  }
  FUNC_6(1);
 } while (FUNC_9(VAR_15, VAR_18));


      __ac97_ok2:




 FUNC_3(0, FUNC_0(VAR_16, VAR_0));

 return 0;
}
