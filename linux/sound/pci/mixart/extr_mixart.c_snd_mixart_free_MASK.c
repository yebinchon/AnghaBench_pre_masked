
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * area; } ;
struct mixart_mgr {unsigned int num_cards; scalar_t__ irq; TYPE_4__* pci; TYPE_3__ bufferinfo; TYPE_3__ flowinfo; TYPE_2__* mem; scalar_t__ dsp_loaded; TYPE_1__** chip; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_7__ {int virt; } ;
struct TYPE_6__ {int card; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (scalar_t__,struct mixart_mgr*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mixart_mgr*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (struct mixart_mgr*) ;
 int FUNC_9 (struct mixart_mgr*) ;

__attribute__((used)) static int FUNC_10(struct mixart_mgr *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_cards; VAR_1++) {
  if (VAR_0->chip[VAR_1])
   FUNC_6(VAR_0->chip[VAR_1]->card);
 }


 FUNC_8(VAR_0);


 if (VAR_0->irq >= 0)
  FUNC_1(VAR_0->irq, VAR_0);


 if(VAR_0->dsp_loaded) {
  FUNC_9(VAR_0);
  FUNC_0(&VAR_0->pci->dev, "reset miXart !\n");
 }


 for (VAR_1 = 0; VAR_1 < 2; ++VAR_1)
  FUNC_2(VAR_0->mem[VAR_1].virt);

 FUNC_5(VAR_0->pci);


 if(VAR_0->flowinfo.area) {
  FUNC_7(&VAR_0->flowinfo);
  VAR_0->flowinfo.area = ((void*)0);
 }

 if(VAR_0->bufferinfo.area) {
  FUNC_7(&VAR_0->bufferinfo);
  VAR_0->bufferinfo.area = ((void*)0);
 }

 FUNC_4(VAR_0->pci);
 FUNC_3(VAR_0);
 return 0;
}
