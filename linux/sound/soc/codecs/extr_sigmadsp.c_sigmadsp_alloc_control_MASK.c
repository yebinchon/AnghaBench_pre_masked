
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int template ;
struct snd_kcontrol_new {unsigned long private_value; int access; int put; int get; int info; int name; int iface; } ;
struct snd_kcontrol {int private_free; } ;
struct sigmadsp_control {struct snd_kcontrol* kcontrol; int samplerates; int name; } ;
struct sigmadsp {TYPE_2__* component; } ;
struct TYPE_4__ {TYPE_1__* card; } ;
struct TYPE_3__ {int snd_card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_kcontrol_new*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int ,struct snd_kcontrol*) ;
 struct snd_kcontrol* FUNC_3 (struct snd_kcontrol_new*,struct sigmadsp*) ;

__attribute__((used)) static int FUNC_4(struct sigmadsp *VAR_8,
 struct sigmadsp_control *VAR_9, unsigned int VAR_10)
{
 struct snd_kcontrol_new VAR_11;
 struct snd_kcontrol *VAR_12;

 FUNC_0(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.iface = VAR_3;
 VAR_11.name = VAR_9->name;
 VAR_11.info = VAR_6;
 VAR_11.get = VAR_5;
 VAR_11.put = VAR_7;
 VAR_11.private_value = (unsigned long)VAR_9;
 VAR_11.access = VAR_2;
 if (!FUNC_1(VAR_9->samplerates, VAR_10))
  VAR_11.access |= VAR_1;

 VAR_12 = FUNC_3(&VAR_11, VAR_8);
 if (!VAR_12)
  return -VAR_0;

 VAR_12->private_free = VAR_4;
 VAR_9->kcontrol = VAR_12;

 return FUNC_2(VAR_8->component->card->snd_card, VAR_12);
}
