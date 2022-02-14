
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_component {TYPE_1__* card; } ;
struct snd_kcontrol_new {int name; } ;
struct snd_ctl_elem_id {int dummy; } ;
struct snd_kcontrol {struct snd_ctl_elem_id id; } ;
struct ak4118_priv {struct snd_soc_component* component; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int snd_card; } ;


 unsigned int FUNC_0 (struct snd_kcontrol_new*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct snd_kcontrol_new* VAR_3 ;
 int FUNC_1 (int ,int ,struct snd_ctl_elem_id*) ;
 struct snd_kcontrol* FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 struct ak4118_priv *VAR_6 = VAR_5;
 struct snd_soc_component *VAR_7 = VAR_6->component;
 struct snd_kcontrol_new *VAR_8;
 struct snd_kcontrol *VAR_9;
 struct snd_ctl_elem_id *VAR_10;
 unsigned int VAR_11;

 if (!VAR_7)
  return VAR_1;

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_3); VAR_11++) {
  VAR_8 = &VAR_3[VAR_11];
  VAR_9 = FUNC_2(VAR_7->card,
       VAR_8->name);
  if (!VAR_9)
   continue;
  VAR_10 = &VAR_9->id;
  FUNC_1(VAR_7->card->snd_card,
          VAR_2, VAR_10);
 }

 return VAR_0;
}
