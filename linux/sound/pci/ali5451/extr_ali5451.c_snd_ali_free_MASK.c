
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ali {scalar_t__ irq; int pci_m7101; int pci_m1533; struct snd_ali* image; int pci; scalar_t__ port; scalar_t__ hw_initialized; } ;


 int FUNC_0 (scalar_t__,struct snd_ali*) ;
 int FUNC_1 (struct snd_ali*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct snd_ali*) ;

__attribute__((used)) static int FUNC_6(struct snd_ali * VAR_0)
{
 if (VAR_0->hw_initialized)
  FUNC_5(VAR_0);
 if (VAR_0->irq >= 0)
  FUNC_0(VAR_0->irq, VAR_0);
 if (VAR_0->port)
  FUNC_4(VAR_0->pci);
 FUNC_3(VAR_0->pci);



 FUNC_2(VAR_0->pci_m1533);
 FUNC_2(VAR_0->pci_m7101);
 FUNC_1(VAR_0);
 return 0;
}
