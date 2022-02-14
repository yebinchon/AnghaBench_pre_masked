
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_bt87x {scalar_t__ irq; int pci; scalar_t__ mmio; } ;


 int FUNC_0 (scalar_t__,struct snd_bt87x*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct snd_bt87x*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct snd_bt87x*) ;

__attribute__((used)) static int FUNC_6(struct snd_bt87x *VAR_0)
{
 if (VAR_0->mmio)
  FUNC_5(VAR_0);
 if (VAR_0->irq >= 0)
  FUNC_0(VAR_0->irq, VAR_0);
 FUNC_1(VAR_0->mmio);
 FUNC_4(VAR_0->pci);
 FUNC_3(VAR_0->pci);
 FUNC_2(VAR_0);
 return 0;
}
