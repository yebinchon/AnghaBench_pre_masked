
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct pci_dev*,int,int) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_0)
{
 int VAR_1;
 if (!(VAR_1 = FUNC_2(VAR_0, 0x40, 0xff))) {
   FUNC_0(&VAR_0->dev, "vortex latency is 0xff\n");
 } else {
  FUNC_1(&VAR_0->dev,
    "could not set vortex latency: pci error 0x%x\n", VAR_1);
 }
}
