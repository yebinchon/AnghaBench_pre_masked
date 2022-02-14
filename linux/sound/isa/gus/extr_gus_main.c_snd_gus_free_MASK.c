
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ irq; scalar_t__ dma1; scalar_t__ dma2; int * res_port2; int * res_port1; } ;
struct snd_gus_card {TYPE_1__ gf1; int equal_dma; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,void*) ;
 int FUNC_3 (struct snd_gus_card*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct snd_gus_card*) ;
 int FUNC_6 (struct snd_gus_card*,int ) ;

__attribute__((used)) static int FUNC_7(struct snd_gus_card *VAR_0)
{
 if (VAR_0->gf1.res_port2 == ((void*)0))
  goto __hw_end;
 FUNC_5(VAR_0);
 FUNC_6(VAR_0, 0);
      __hw_end:
 FUNC_4(VAR_0->gf1.res_port1);
 FUNC_4(VAR_0->gf1.res_port2);
 if (VAR_0->gf1.irq >= 0)
  FUNC_2(VAR_0->gf1.irq, (void *) VAR_0);
 if (VAR_0->gf1.dma1 >= 0) {
  FUNC_0(VAR_0->gf1.dma1);
  FUNC_1(VAR_0->gf1.dma1);
 }
 if (!VAR_0->equal_dma && VAR_0->gf1.dma2 >= 0) {
  FUNC_0(VAR_0->gf1.dma2);
  FUNC_1(VAR_0->gf1.dma2);
 }
 FUNC_3(VAR_0);
 return 0;
}
