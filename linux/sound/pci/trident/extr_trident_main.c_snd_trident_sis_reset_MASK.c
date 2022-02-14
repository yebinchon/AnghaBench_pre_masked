
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_trident {TYPE_1__* card; int pci; scalar_t__ in_suspend; } ;
struct TYPE_2__ {int dev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct snd_trident*,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct snd_trident*) ;
 int FUNC_3 (int ) ;
 int VAR_13 ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (unsigned int,int ) ;
 int FUNC_6 (int ,int,int) ;
 scalar_t__ FUNC_7 (unsigned long,int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct snd_trident *VAR_14)
{
 unsigned long VAR_15;
 unsigned int VAR_16;
 int VAR_17;

 VAR_17 = VAR_14->in_suspend ? 0 : 2;
      __si7018_retry:
 FUNC_6(VAR_14->pci, 0x46, 0x04);
 FUNC_8(100);
 FUNC_6(VAR_14->pci, 0x46, 0x00);
 FUNC_8(100);

 FUNC_4(0x00, FUNC_0(VAR_14, VAR_7));

 VAR_16 = VAR_5|VAR_11|VAR_1|VAR_4|VAR_6|VAR_2;
 FUNC_5(VAR_16, FUNC_0(VAR_14, VAR_10));
 FUNC_8(1000);

 VAR_16 &= ~VAR_2;
 FUNC_5(VAR_16, FUNC_0(VAR_14, VAR_10));
 FUNC_8(2000);

 VAR_15 = (VAR_13 + (VAR_3 * 3) / 4) + 1;
 do {
  if ((FUNC_3(FUNC_0(VAR_14, VAR_10)) & VAR_8) != 0)
   goto __si7018_ok;
  FUNC_2(VAR_14);
 } while (FUNC_7(VAR_15, VAR_13));
 FUNC_1(VAR_14->card->dev, "AC'97 codec ready error [0x%x]\n",
  FUNC_3(FUNC_0(VAR_14, VAR_10)));
 if (VAR_17-- > 0) {
  VAR_15 = VAR_13 + VAR_3;
  do {
   FUNC_2(VAR_14);
  } while (FUNC_7(VAR_15, VAR_13));
  goto __si7018_retry;
 }
      __si7018_ok:

 do {
  if ((FUNC_3(FUNC_0(VAR_14, VAR_10)) & VAR_9) != 0)
   break;
  FUNC_2(VAR_14);
 } while (FUNC_7(VAR_15, VAR_13));

 FUNC_5(VAR_0, FUNC_0(VAR_14, VAR_12));
 return 0;
}
