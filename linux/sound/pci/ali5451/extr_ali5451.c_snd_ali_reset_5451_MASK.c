
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ali {struct pci_dev* pci; struct pci_dev* pci_m1533; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct pci_dev*,int,unsigned int*) ;
 int FUNC_2 (struct pci_dev*,int,unsigned int) ;
 unsigned short FUNC_3 (struct snd_ali*,int ,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct snd_ali *VAR_1)
{
 struct pci_dev *VAR_2;
 unsigned short VAR_3, VAR_4;
 unsigned int VAR_5;

 VAR_2 = VAR_1->pci_m1533;
 if (VAR_2) {
  FUNC_1(VAR_2, 0x7c, &VAR_5);
  FUNC_2(VAR_2, 0x7c, VAR_5 | 0x08000000);
  FUNC_0(5);
  FUNC_1(VAR_2, 0x7c, &VAR_5);
  FUNC_2(VAR_2, 0x7c, VAR_5 & 0xf7ffffff);
  FUNC_0(5);
 }

 VAR_2 = VAR_1->pci;
 FUNC_1(VAR_2, 0x44, &VAR_5);
 FUNC_2(VAR_2, 0x44, VAR_5 | 0x000c0000);
 FUNC_4(500);
 FUNC_1(VAR_2, 0x44, &VAR_5);
 FUNC_2(VAR_2, 0x44, VAR_5 & 0xfffbffff);
 FUNC_0(5);

 VAR_3 = 200;
 while(VAR_3--) {
  VAR_4 = FUNC_3(VAR_1, 0, VAR_0);
  if ((VAR_4 & 0x000f) == 0x000f)
   return 0;
  FUNC_0(5);
 }



 return 0;
}
