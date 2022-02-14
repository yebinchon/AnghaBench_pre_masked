
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_card {struct oxygen* private_data; } ;
struct TYPE_2__ {int (* cleanup ) (struct oxygen*) ;} ;
struct oxygen {scalar_t__ irq; int pci; int mutex; int model_data; TYPE_1__ model; int gpio_work; int spdif_input_bits_work; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,struct oxygen*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct oxygen*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct oxygen*) ;

__attribute__((used)) static void FUNC_8(struct snd_card *VAR_0)
{
 struct oxygen *VAR_1 = VAR_0->private_data;

 FUNC_4(VAR_1);
 if (VAR_1->irq >= 0)
  FUNC_1(VAR_1->irq, VAR_1);
 FUNC_0(&VAR_1->spdif_input_bits_work);
 FUNC_0(&VAR_1->gpio_work);
 VAR_1->model.cleanup(VAR_1);
 FUNC_2(VAR_1->model_data);
 FUNC_3(&VAR_1->mutex);
 FUNC_6(VAR_1->pci);
 FUNC_5(VAR_1->pci);
}
