
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcxhr {int card; int mgr; } ;
struct pcxhr_mgr {int num_cards; TYPE_1__* pci; struct snd_pcxhr** chip; } ;
struct firmware {int size; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;





 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct pcxhr_mgr*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct snd_pcxhr*) ;
 int FUNC_5 (struct pcxhr_mgr*) ;
 int FUNC_6 (struct pcxhr_mgr*,struct firmware const*) ;
 int FUNC_7 (struct pcxhr_mgr*,struct firmware const*) ;
 int FUNC_8 (struct pcxhr_mgr*,struct firmware const*) ;
 int FUNC_9 (struct pcxhr_mgr*,struct firmware const*,int) ;
 int FUNC_10 (struct pcxhr_mgr*) ;
 int FUNC_11 (struct pcxhr_mgr*) ;
 int FUNC_12 (struct pcxhr_mgr*) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(struct pcxhr_mgr *VAR_1, int VAR_2,
     const struct firmware *VAR_3)
{
 int VAR_4, VAR_5;

 FUNC_0(&VAR_1->pci->dev,
  "loading dsp [%d] size = %zd\n", VAR_2, VAR_3->size);

 switch (VAR_2) {
 case 128:
  FUNC_11(VAR_1);
  return FUNC_9(VAR_1, VAR_3, 0);

 case 129:
  FUNC_11(VAR_1);
  return FUNC_9(VAR_1, VAR_3, 1);

 case 131:
  FUNC_10(VAR_1);
  return FUNC_8(VAR_1, VAR_3);

 case 132:
  return FUNC_6(VAR_1, VAR_3);

 case 130:
  VAR_4 = FUNC_7(VAR_1, VAR_3);
  if (VAR_4)
   return VAR_4;
  break;
 default:
  FUNC_1(&VAR_1->pci->dev, "wrong file index\n");
  return -VAR_0;
 }


 VAR_4 = FUNC_5(VAR_1);
        if (VAR_4 < 0) {
  FUNC_1(&VAR_1->pci->dev, "pcxhr could not be set up\n");
  return VAR_4;
 }
 VAR_4 = FUNC_2(VAR_1);
        if (VAR_4 < 0) {
  FUNC_1(&VAR_1->pci->dev, "pcxhr pipes could not be set up\n");
  return VAR_4;
 }

        for (VAR_5 = 0; VAR_5 < VAR_1->num_cards; VAR_5++) {
  struct snd_pcxhr *VAR_6 = VAR_1->chip[VAR_5];

  if ((VAR_4 = FUNC_4(VAR_6)) < 0)
   return VAR_4;

  if (VAR_5 == 0) {
   if ((VAR_4 = FUNC_3(VAR_6->mgr)) < 0)
    return VAR_4;
  }
  if ((VAR_4 = FUNC_13(VAR_6->card)) < 0)
   return VAR_4;
 }
 VAR_4 = FUNC_12(VAR_1);
        if (VAR_4 < 0) {
  FUNC_1(&VAR_1->pci->dev, "pcxhr pipes could not be started\n");
  return VAR_4;
 }
 FUNC_0(&VAR_1->pci->dev,
  "pcxhr firmware downloaded and successfully set up\n");

 return 0;
}
