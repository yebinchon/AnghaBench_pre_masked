
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct xonar_pcm179x {unsigned int dacs; int ** pcm1796_regs; } ;
struct snd_kcontrol {struct oxygen* private_data; } ;
struct TYPE_3__ {int * item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct oxygen {int mutex; struct xonar_pcm179x* model_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct oxygen*,unsigned int,int,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_4,
         struct snd_ctl_elem_value *VAR_5)
{
 struct oxygen *VAR_6 = VAR_4->private_data;
 struct xonar_pcm179x *VAR_7 = VAR_6->model_data;
 unsigned int VAR_8;
 int VAR_9;
 u8 VAR_10;

 FUNC_0(&VAR_6->mutex);
 VAR_10 = VAR_7->pcm1796_regs[0][19 - VAR_3];
 VAR_10 &= ~VAR_0;
 if (!VAR_5->value.enumerated.item[0])
  VAR_10 |= VAR_1;
 else
  VAR_10 |= VAR_2;
 VAR_9 = VAR_10 != VAR_7->pcm1796_regs[0][19 - VAR_3];
 if (VAR_9) {
  for (VAR_8 = 0; VAR_8 < VAR_7->dacs; ++VAR_8)
   FUNC_2(VAR_6, VAR_8, 19, VAR_10);
 }
 FUNC_1(&VAR_6->mutex);
 return VAR_9;
}
