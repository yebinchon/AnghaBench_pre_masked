
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_emu10k1 {TYPE_2__* pci; TYPE_1__* card_capabilities; } ;
struct firmware {int dummy; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {size_t emu_model; } ;


 char*** VAR_0 ;
 int FUNC_0 (struct firmware const**,char const*,int *) ;
 int FUNC_1 (struct snd_emu10k1*,struct firmware const*) ;

__attribute__((used)) static int FUNC_2(struct snd_emu10k1 *VAR_1, int VAR_2,
         const struct firmware **VAR_3)
{
 const char *VAR_4;
 int VAR_5;

 if (!*VAR_3) {
  VAR_4 = VAR_0[VAR_1->card_capabilities->emu_model][VAR_2];
  if (!VAR_4)
   return 0;
  VAR_5 = FUNC_0(VAR_3, VAR_4, &VAR_1->pci->dev);
  if (VAR_5)
   return VAR_5;
 }

 return FUNC_1(VAR_1, *VAR_3);
}
