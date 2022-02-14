
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spdif_mixer_control {int ready_buf; int ctl_lock; int * qsub; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int * data; } ;
struct TYPE_4__ {TYPE_1__ bytes; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct fsl_spdif_priv {struct spdif_mixer_control fsl_spdif_control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int) ;
 struct snd_soc_dai* FUNC_1 (struct snd_kcontrol*) ;
 struct fsl_spdif_priv* FUNC_2 (struct snd_soc_dai*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_2,
    struct snd_ctl_elem_value *VAR_3)
{
 struct snd_soc_dai *VAR_4 = FUNC_1(VAR_2);
 struct fsl_spdif_priv *VAR_5 = FUNC_2(VAR_4);
 struct spdif_mixer_control *VAR_6 = &VAR_5->fsl_spdif_control;
 unsigned long VAR_7;
 int VAR_8 = -VAR_0;

 FUNC_3(&VAR_6->ctl_lock, VAR_7);
 if (VAR_6->ready_buf) {
  int VAR_9 = (VAR_6->ready_buf - 1) * VAR_1;
  FUNC_0(&VAR_3->value.bytes.data[0],
    &VAR_6->qsub[VAR_9], VAR_1);
  VAR_8 = 0;
 }
 FUNC_4(&VAR_6->ctl_lock, VAR_7);

 return VAR_8;
}
