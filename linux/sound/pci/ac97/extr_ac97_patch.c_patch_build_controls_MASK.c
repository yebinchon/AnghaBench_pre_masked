
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_kcontrol_new {int dummy; } ;
struct snd_ac97 {TYPE_1__* bus; } ;
struct TYPE_2__ {int card; } ;


 int FUNC_0 (struct snd_kcontrol_new const*,struct snd_ac97*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_ac97 * VAR_0, const struct snd_kcontrol_new *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  if ((VAR_4 = FUNC_1(VAR_0->bus->card, FUNC_0(&VAR_1[VAR_3], VAR_0))) < 0)
   return VAR_4;
 return 0;
}
