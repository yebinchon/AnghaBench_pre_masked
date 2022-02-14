
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lx6464es {scalar_t__ irq; int pci; int port_plx_remapped; int port_dsp_bar; TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__,struct lx6464es*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct lx6464es*) ;
 int FUNC_5 (struct lx6464es*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct lx6464es *VAR_0)
{
 FUNC_0(VAR_0->card->dev, "->snd_lx6464es_free\n");

 FUNC_5(VAR_0);

 if (VAR_0->irq >= 0)
  FUNC_1(VAR_0->irq, VAR_0);

 FUNC_3(VAR_0->port_dsp_bar);
 FUNC_2(VAR_0->port_plx_remapped);

 FUNC_7(VAR_0->pci);
 FUNC_6(VAR_0->pci);

 FUNC_4(VAR_0);

 return 0;
}
