
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ area; } ;
struct ensoniq {scalar_t__ irq; int pci; TYPE_1__ dma_bug; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ensoniq*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__,struct ensoniq*) ;
 int FUNC_2 (struct ensoniq*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (struct ensoniq*) ;
 int FUNC_9 (scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct ensoniq *VAR_4)
{
 FUNC_8(VAR_4);
 if (VAR_4->irq < 0)
  goto __hw_end;




 FUNC_3(0, FUNC_0(VAR_4, VAR_0));
 FUNC_3(0, FUNC_0(VAR_4, VAR_3));

 if (VAR_4->irq >= 0)
  FUNC_9(VAR_4->irq);
 FUNC_6(VAR_4->pci, VAR_2);
      __hw_end:




 if (VAR_4->irq >= 0)
  FUNC_1(VAR_4->irq, VAR_4);
 FUNC_5(VAR_4->pci);
 FUNC_4(VAR_4->pci);
 FUNC_2(VAR_4);
 return 0;
}
