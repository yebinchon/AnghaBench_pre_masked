
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {scalar_t__ irq; struct snd_ice1712* spec; int pci; scalar_t__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_ice1712*,int ) ;
 int FUNC_1 (struct snd_ice1712*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__,struct snd_ice1712*) ;
 int FUNC_3 (struct snd_ice1712*) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct snd_ice1712*) ;

__attribute__((used)) static int FUNC_8(struct snd_ice1712 *VAR_4)
{
 if (!VAR_4->port)
  goto __hw_end;

 FUNC_4(VAR_0 | VAR_1, FUNC_0(VAR_4, VAR_2));
 FUNC_4(0xff, FUNC_1(VAR_4, VAR_3));

__hw_end:
 if (VAR_4->irq >= 0)
  FUNC_2(VAR_4->irq, VAR_4);

 if (VAR_4->port)
  FUNC_6(VAR_4->pci);
 FUNC_7(VAR_4);
 FUNC_5(VAR_4->pci);
 FUNC_3(VAR_4->spec);
 FUNC_3(VAR_4);
 return 0;
}
