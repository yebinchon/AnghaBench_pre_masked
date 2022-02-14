
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct xonar_pcm179x {unsigned int dacs; int ** pcm1796_regs; } ;
struct snd_kcontrol {struct oxygen* private_data; } ;
struct TYPE_3__ {int * value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct oxygen {int mutex; struct xonar_pcm179x* model_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct oxygen*,unsigned int,int,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_2,
         struct snd_ctl_elem_value *VAR_3)
{
 struct oxygen *VAR_4 = VAR_2->private_data;
 struct xonar_pcm179x *VAR_5 = VAR_4->model_data;
 unsigned int VAR_6;
 int VAR_7;
 u8 VAR_8;

 FUNC_0(&VAR_4->mutex);
 VAR_8 = VAR_5->pcm1796_regs[0][18 - VAR_1];
 if (!VAR_3->value.integer.value[0])
  VAR_8 &= ~VAR_0;
 else
  VAR_8 |= VAR_0;
 VAR_7 = VAR_8 != VAR_5->pcm1796_regs[0][18 - VAR_1];
 if (VAR_7) {
  for (VAR_6 = 0; VAR_6 < VAR_5->dacs; ++VAR_6)
   FUNC_2(VAR_4, VAR_6, 18, VAR_8);
 }
 FUNC_1(&VAR_4->mutex);
 return VAR_7;
}
