
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_es1688 {scalar_t__ hardware; scalar_t__ irq; scalar_t__ dma8; int res_port; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,void*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct snd_es1688*,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_es1688 *VAR_1)
{
 if (VAR_1->hardware != VAR_0)
  FUNC_4(VAR_1, 0);
 FUNC_3(VAR_1->res_port);
 if (VAR_1->irq >= 0)
  FUNC_2(VAR_1->irq, (void *) VAR_1);
 if (VAR_1->dma8 >= 0) {
  FUNC_0(VAR_1->dma8);
  FUNC_1(VAR_1->dma8);
 }
 return 0;
}
