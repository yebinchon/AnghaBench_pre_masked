
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct pci_dev*,int,int*) ;
 int FUNC_3 (struct pci_dev*,int,int) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_0)
{
 int VAR_1;
 u8 VAR_2;







 if (!(VAR_1 = FUNC_2(VAR_0, 0x42, &VAR_2))
   && ((VAR_2 & 0x10)
    || !(VAR_1 = FUNC_3(VAR_0, 0x42, VAR_2 | 0x10)))) {
  FUNC_0(&VAR_0->dev, "bridge config is 0x%x\n", VAR_2 | 0x10);
 } else {
  FUNC_1(&VAR_0->dev,
    "could not set vortex latency: pci error 0x%x\n", VAR_1);
 }
}
