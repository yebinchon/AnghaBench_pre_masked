
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_dbri {size_t dbri_irqp; TYPE_1__* dma; } ;
typedef scalar_t__ s32 ;
struct TYPE_2__ {scalar_t__* intr; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct snd_dbri*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct snd_dbri *VAR_1)
{
 s32 VAR_2;

 while ((VAR_2 = VAR_1->dma->intr[VAR_1->dbri_irqp]) != 0) {
  VAR_1->dma->intr[VAR_1->dbri_irqp] = 0;
  VAR_1->dbri_irqp++;
  if (VAR_1->dbri_irqp == VAR_0)
   VAR_1->dbri_irqp = 1;

  FUNC_0(VAR_1, VAR_2);
 }
}
