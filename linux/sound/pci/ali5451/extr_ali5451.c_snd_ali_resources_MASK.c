
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_ali {TYPE_1__* card; TYPE_2__* pci; int irq; int port; } ;
struct TYPE_5__ {int irq; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int ,struct snd_ali*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct snd_ali *VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_4->card->dev, "resources allocation ...\n");
 VAR_5 = FUNC_2(VAR_4->pci, "ALI 5451");
 if (VAR_5 < 0)
  return VAR_5;
 VAR_4->port = FUNC_3(VAR_4->pci, 0);

 if (FUNC_4(VAR_4->pci->irq, VAR_3,
   VAR_1, VAR_2, VAR_4)) {
  FUNC_1(VAR_4->card->dev, "Unable to request irq.\n");
  return -VAR_0;
 }
 VAR_4->irq = VAR_4->pci->irq;
 FUNC_0(VAR_4->card->dev, "resources allocated.\n");
 return 0;
}
