
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_interwave {scalar_t__ irq; int i2c_res; } ;
struct snd_card {struct snd_interwave* private_data; } ;


 int FUNC_0 (scalar_t__,void*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct snd_card *VAR_0)
{
 struct snd_interwave *VAR_1 = VAR_0->private_data;

 if (VAR_1 == ((void*)0))
  return;



 if (VAR_1->irq >= 0)
  FUNC_0(VAR_1->irq, (void *)VAR_1);
}
