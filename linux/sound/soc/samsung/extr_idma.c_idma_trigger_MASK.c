
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct idma_ctrl {int lock; int state; } ;
struct TYPE_2__ {struct idma_ctrl* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_4, int VAR_5)
{
 struct idma_ctrl *VAR_6 = VAR_4->runtime->private_data;
 int VAR_7 = 0;

 FUNC_1(&VAR_6->lock);

 switch (VAR_5) {
 case 131:
 case 130:
 case 132:
  VAR_6->state |= VAR_3;
  FUNC_0(VAR_1);
  break;

 case 128:
 case 129:
 case 133:
  VAR_6->state &= ~VAR_3;
  FUNC_0(VAR_2);
  break;

 default:
  VAR_7 = -VAR_0;
  break;
 }

 FUNC_2(&VAR_6->lock);

 return VAR_7;
}
