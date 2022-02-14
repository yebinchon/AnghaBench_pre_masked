
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * area; } ;
struct pcxhr_mgr {unsigned int num_cards; scalar_t__ irq; TYPE_3__* pci; struct pcxhr_mgr* prmh; TYPE_2__ hostport; scalar_t__ dsp_loaded; TYPE_1__** chip; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_5__ {int card; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (scalar_t__,struct pcxhr_mgr*) ;
 int FUNC_2 (struct pcxhr_mgr*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (struct pcxhr_mgr*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_8(struct pcxhr_mgr *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_cards; VAR_1++) {
  if (VAR_0->chip[VAR_1])
   FUNC_6(VAR_0->chip[VAR_1]->card);
 }


 if(VAR_0->dsp_loaded) {
  FUNC_5(VAR_0);
  FUNC_0(&VAR_0->pci->dev, "reset pcxhr !\n");
 }


 if (VAR_0->irq >= 0)
  FUNC_1(VAR_0->irq, VAR_0);

 FUNC_4(VAR_0->pci);


 if (VAR_0->hostport.area) {
  FUNC_7(&VAR_0->hostport);
  VAR_0->hostport.area = ((void*)0);
 }

 FUNC_2(VAR_0->prmh);

 FUNC_3(VAR_0->pci);
 FUNC_2(VAR_0);
 return 0;
}
