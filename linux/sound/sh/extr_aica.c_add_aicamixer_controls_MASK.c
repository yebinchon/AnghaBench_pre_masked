
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card_aica {int card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,struct snd_card_aica*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct snd_card_aica *VAR_2)
{
 int VAR_3;
 VAR_3 = FUNC_0
     (VAR_2->card,
      FUNC_1(&VAR_1, VAR_2));
 if (FUNC_2(VAR_3 < 0))
  return VAR_3;
 VAR_3 = FUNC_0
     (VAR_2->card,
      FUNC_1(&VAR_0, VAR_2));
 if (FUNC_2(VAR_3 < 0))
  return VAR_3;
 return 0;
}
