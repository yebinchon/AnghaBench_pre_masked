
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; } ;
struct snd_kcontrol {int private_value; TYPE_1__ id; } ;
struct snd_ac97 {TYPE_2__* bus; } ;
struct TYPE_4__ {int card; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int,int ) ;
 int VAR_1 ;
 struct snd_kcontrol* FUNC_1 (int *,struct snd_ac97*) ;
 int * VAR_2 ;
 int FUNC_2 (struct snd_ac97*,int ,int) ;
 int VAR_3 ;
 int FUNC_3 (int ,struct snd_kcontrol*) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct snd_ac97 *VAR_4)
{
 struct snd_kcontrol *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(&VAR_2[0], VAR_4);
 VAR_6 = FUNC_3(VAR_4->bus->card, VAR_5);
 if (VAR_6 < 0)
  return VAR_6;
 FUNC_4(VAR_5->id.name, "3D Control - Wide");
 VAR_5->private_value = FUNC_0(VAR_0, 9, 7, 0);
 FUNC_2(VAR_4, VAR_0, 0x0000);
 VAR_6 = FUNC_3(VAR_4->bus->card,
     FUNC_1(&VAR_3,
     VAR_4));
 if (VAR_6 < 0)
  return VAR_6;
 FUNC_2(VAR_4, VAR_1, 0x0c00);
 return 0;
}
