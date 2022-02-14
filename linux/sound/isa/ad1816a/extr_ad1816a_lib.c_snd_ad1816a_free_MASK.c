
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ad1816a {scalar_t__ irq; scalar_t__ dma1; scalar_t__ dma2; int res_port; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,void*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct snd_ad1816a *VAR_0)
{
 FUNC_2(VAR_0->res_port);
 if (VAR_0->irq >= 0)
  FUNC_1(VAR_0->irq, (void *) VAR_0);
 if (VAR_0->dma1 >= 0) {
  FUNC_3(VAR_0->dma1);
  FUNC_0(VAR_0->dma1);
 }
 if (VAR_0->dma2 >= 0) {
  FUNC_3(VAR_0->dma2);
  FUNC_0(VAR_0->dma2);
 }
 return 0;
}
