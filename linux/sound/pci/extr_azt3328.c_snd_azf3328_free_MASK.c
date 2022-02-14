
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_azf3328 {scalar_t__ irq; int pci; int timer; } ;


 int FUNC_0 (scalar_t__,struct snd_azf3328*) ;
 int FUNC_1 (struct snd_azf3328*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct snd_azf3328*) ;
 int FUNC_5 (struct snd_azf3328*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct snd_azf3328 *VAR_0)
{
 if (VAR_0->irq < 0)
  goto __end_hw;

 FUNC_5(VAR_0);

 FUNC_6(VAR_0->timer);
 FUNC_4(VAR_0);

__end_hw:
 if (VAR_0->irq >= 0)
  FUNC_0(VAR_0->irq, VAR_0);
 FUNC_3(VAR_0->pci);
 FUNC_2(VAR_0->pci);

 FUNC_1(VAR_0);
 return 0;
}
