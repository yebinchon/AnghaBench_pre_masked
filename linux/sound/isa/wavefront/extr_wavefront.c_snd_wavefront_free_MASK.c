
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_card {scalar_t__ private_data; } ;
struct TYPE_3__ {scalar_t__ irq; int res_base; } ;
struct TYPE_4__ {TYPE_1__ wavefront; } ;
typedef TYPE_2__ snd_wavefront_card_t ;


 int FUNC_0 (scalar_t__,void*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct snd_card *VAR_0)
{
 snd_wavefront_card_t *VAR_1 = (snd_wavefront_card_t *)VAR_0->private_data;

 if (VAR_1) {
  FUNC_1(VAR_1->wavefront.res_base);
  if (VAR_1->wavefront.irq > 0)
   FUNC_0(VAR_1->wavefront.irq, (void *)VAR_1);
 }
}
