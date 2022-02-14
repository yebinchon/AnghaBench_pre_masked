
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; int index; } ;
struct snd_kcontrol {scalar_t__ private_value; TYPE_1__ id; } ;
struct snd_card {int dummy; } ;


 int FUNC_0 (struct snd_card*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char const*,int) ;
 struct snd_kcontrol* FUNC_2 (int *,int *) ;

struct snd_kcontrol *
FUNC_3(const char *VAR_1, struct snd_card *VAR_2)
{
 struct snd_kcontrol *VAR_3;

 VAR_3 = FUNC_2(&VAR_0, ((void*)0));
 if (!VAR_3)
  return ((void*)0);

 FUNC_1(VAR_3->id.name, VAR_1, sizeof(VAR_3->id.name));
 VAR_3->id.index = FUNC_0(VAR_2, VAR_3->id.name);
 VAR_3->private_value = 0;
 return VAR_3;
}
