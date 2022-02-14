
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_jack {int status; } ;
struct nau8824 {scalar_t__ irq; struct snd_soc_jack* jack; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct nau8824 *VAR_1)
{
 struct snd_soc_jack *VAR_2 = VAR_1->jack;
 bool VAR_3 = 0;

 if (VAR_1->irq && VAR_2)
  VAR_3 = VAR_2->status & VAR_0;

 return VAR_3;
}
