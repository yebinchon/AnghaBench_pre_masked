
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_riptide {TYPE_1__* rmidi; int handled_irqs; int riptide_tq; int received_irqs; struct cmdif* cif; } ;
struct cmdif {int hwport; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int private_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t
FUNC_7(int VAR_1, void *VAR_2)
{
 struct snd_riptide *VAR_3 = VAR_2;
 struct cmdif *VAR_4 = VAR_3->cif;

 if (VAR_4) {
  VAR_3->received_irqs++;
  if (FUNC_0(VAR_4->hwport) || FUNC_2(VAR_4->hwport) ||
      FUNC_1(VAR_4->hwport)) {
   VAR_3->handled_irqs++;
   FUNC_6(&VAR_3->riptide_tq);
  }
  if (VAR_3->rmidi && FUNC_3(VAR_4->hwport)) {
   VAR_3->handled_irqs++;
   FUNC_5(VAR_1,
        VAR_3->rmidi->private_data);
  }
  FUNC_4(VAR_4->hwport);
 }
 return VAR_0;
}
