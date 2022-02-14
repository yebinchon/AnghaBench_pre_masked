
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ac97 {TYPE_1__* bus; } ;
struct TYPE_2__ {int card; } ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,struct snd_ac97*) ;

__attribute__((used)) static int FUNC_3(struct snd_ac97 * VAR_1)
{
 int VAR_2, VAR_3;
 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  if ((VAR_3 = FUNC_1(VAR_1->bus->card, FUNC_2(&VAR_0[VAR_2], VAR_1))) < 0)
   return VAR_3;
 return 0;
}
