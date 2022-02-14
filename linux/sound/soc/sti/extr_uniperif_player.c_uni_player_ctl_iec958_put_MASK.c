
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct snd_aes_iec958 {int * status; } ;
struct TYPE_7__ {struct snd_aes_iec958 iec958; } ;
struct uniperif {int irq_lock; TYPE_5__* substream; int ctrl_lock; TYPE_2__ stream_settings; } ;
struct TYPE_6__ {struct uniperif* uni; } ;
struct sti_uniperiph_data {TYPE_1__ dai_data; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_8__ {int * status; } ;
struct TYPE_9__ {TYPE_3__ iec958; } ;
struct snd_ctl_elem_value {TYPE_4__ value; } ;
struct TYPE_10__ {int * runtime; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct snd_soc_dai* FUNC_2 (struct snd_kcontrol*) ;
 struct sti_uniperiph_data* FUNC_3 (struct snd_soc_dai*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct uniperif*,int *) ;

__attribute__((used)) static int FUNC_7(struct snd_kcontrol *VAR_0,
         struct snd_ctl_elem_value *VAR_1)
{
 struct snd_soc_dai *VAR_2 = FUNC_2(VAR_0);
 struct sti_uniperiph_data *VAR_3 = FUNC_3(VAR_2);
 struct uniperif *VAR_4 = VAR_3->dai_data.uni;
 struct snd_aes_iec958 *VAR_5 = &VAR_4->stream_settings.iec958;
 unsigned long VAR_6;

 FUNC_0(&VAR_4->ctrl_lock);
 VAR_5->status[0] = VAR_1->value.iec958.status[0];
 VAR_5->status[1] = VAR_1->value.iec958.status[1];
 VAR_5->status[2] = VAR_1->value.iec958.status[2];
 VAR_5->status[3] = VAR_1->value.iec958.status[3];
 FUNC_1(&VAR_4->ctrl_lock);

 FUNC_4(&VAR_4->irq_lock, VAR_6);
 if (VAR_4->substream && VAR_4->substream->runtime)
  FUNC_6(VAR_4,
           VAR_4->substream->runtime);
 else
  FUNC_6(VAR_4, ((void*)0));

 FUNC_5(&VAR_4->irq_lock, VAR_6);
 return 0;
}
