
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_opti9xx {scalar_t__ irq; int res_mc_base; int res_mc_indir; } ;
struct snd_card {struct snd_opti9xx* private_data; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,struct snd_opti9xx*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct snd_card *VAR_0)
{
 struct snd_opti9xx *VAR_1 = VAR_0->private_data;

 if (VAR_1) {







  FUNC_2(VAR_1->res_mc_base);
 }
}
