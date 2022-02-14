
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_trident {int ac97_ctrl; TYPE_1__* card; struct pci_dev* pci; } ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_trident*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct snd_trident*) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (struct pci_dev*,int,int) ;
 int FUNC_6 (struct pci_dev*,int,int ) ;
 int FUNC_7 (struct snd_trident*) ;
 scalar_t__ FUNC_8 (unsigned long,int) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct snd_trident *VAR_4)
{
 struct pci_dev *VAR_5 = VAR_4->pci;
 unsigned long VAR_6;


 FUNC_6(VAR_5, 0x40, 0);
 FUNC_5(VAR_5, 0x44, 0);
 FUNC_5(VAR_5, 0x45, 0);
 FUNC_5(VAR_5, 0x46, 4);
 FUNC_9(100);
 FUNC_5(VAR_5, 0x46, 0);
 FUNC_9(100);


 FUNC_4(0x00000001, FUNC_0(VAR_4, VAR_0));
 FUNC_9(100);
 FUNC_4(0x00000000, FUNC_0(VAR_4, VAR_0));

 VAR_4->ac97_ctrl = 0x0000004a;
 FUNC_4(VAR_4->ac97_ctrl, FUNC_0(VAR_4, VAR_0));

 VAR_6 = (VAR_3 + (VAR_2 * 3) / 4) + 1;
 do {
  if ((FUNC_3(FUNC_0(VAR_4, VAR_0)) & 0x0010) != 0)
   goto __dx_ok;
  FUNC_2(VAR_4);
 } while (FUNC_8(VAR_6, VAR_3));
 FUNC_1(VAR_4->card->dev, "AC'97 codec ready error\n");
 return -VAR_1;

 __dx_ok:
 FUNC_7(VAR_4);

 return 0;
}
