
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_es18xx {scalar_t__ irq; scalar_t__ dma1; scalar_t__ dma2; int res_mpu_port; int res_ctrl_port; int res_port; } ;
struct snd_card {struct snd_es18xx* private_data; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,void*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_card *VAR_0)
{
 struct snd_es18xx *VAR_1 = VAR_0->private_data;

 FUNC_3(VAR_1->res_port);
 FUNC_3(VAR_1->res_ctrl_port);
 FUNC_3(VAR_1->res_mpu_port);
 if (VAR_1->irq >= 0)
  FUNC_2(VAR_1->irq, (void *) VAR_0);
 if (VAR_1->dma1 >= 0) {
  FUNC_0(VAR_1->dma1);
  FUNC_1(VAR_1->dma1);
 }
 if (VAR_1->dma2 >= 0 && VAR_1->dma1 != VAR_1->dma2) {
  FUNC_0(VAR_1->dma2);
  FUNC_1(VAR_1->dma2);
 }
 return 0;
}
