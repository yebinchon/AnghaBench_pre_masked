
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_jack {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct nau8824 {int irq; int dev; int jdet_work; struct snd_soc_jack* jack; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (int ,int ,int *,int ,int,char*,struct nau8824*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct nau8824* FUNC_3 (struct snd_soc_component*) ;

int FUNC_4(struct snd_soc_component *VAR_4,
 struct snd_soc_jack *VAR_5)
{
 struct nau8824 *VAR_6 = FUNC_3(VAR_4);
 int VAR_7;

 VAR_6->jack = VAR_5;

 FUNC_0(&VAR_6->jdet_work, VAR_3);
 VAR_7 = FUNC_2(VAR_6->dev, VAR_6->irq, ((void*)0),
  VAR_2, VAR_1 | VAR_0,
  "nau8824", VAR_6);
 if (VAR_7) {
  FUNC_1(VAR_6->dev, "Cannot request irq %d (%d)\n",
   VAR_6->irq, VAR_7);
 }

 return VAR_7;
}
