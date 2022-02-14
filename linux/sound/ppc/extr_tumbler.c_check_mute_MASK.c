
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pmac {int card; } ;
struct snd_kcontrol {int id; } ;
struct pmac_gpio {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pmac_gpio*) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (struct pmac_gpio*,int) ;

__attribute__((used)) static void FUNC_3(struct snd_pmac *VAR_1, struct pmac_gpio *VAR_2, int VAR_3, int VAR_4,
         struct snd_kcontrol *VAR_5)
{
 if (FUNC_0(VAR_2) != VAR_3) {
  FUNC_2(VAR_2, VAR_3);
  if (VAR_4)
   FUNC_1(VAR_1->card, VAR_0,
           &VAR_5->id);
 }
}
