
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via82xx_modem {scalar_t__ irq; unsigned int num_devs; int pci; int * devs; } ;


 int FUNC_0 (scalar_t__,struct via82xx_modem*) ;
 int FUNC_1 (struct via82xx_modem*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct via82xx_modem*,int *) ;

__attribute__((used)) static int FUNC_5(struct via82xx_modem *VAR_0)
{
 unsigned int VAR_1;

 if (VAR_0->irq < 0)
  goto __end_hw;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_devs; VAR_1++)
  FUNC_4(VAR_0, &VAR_0->devs[VAR_1]);

      __end_hw:
 if (VAR_0->irq >= 0)
  FUNC_0(VAR_0->irq, VAR_0);
 FUNC_3(VAR_0->pci);
 FUNC_2(VAR_0->pci);
 FUNC_1(VAR_0);
 return 0;
}
