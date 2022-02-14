
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_sb {int reg_lock; int mode; } ;
struct snd_pcm_substream {int dummy; } ;
struct TYPE_2__ {int dma_off; int dma_on; } ;


 int VAR_0 ;
 int VAR_1 ;




 TYPE_1__ FUNC_0 (struct snd_sb*) ;
 struct snd_sb* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_sb*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_2, int VAR_3)
{
 struct snd_sb *VAR_4 = FUNC_1(VAR_2);
 int VAR_5 = 0;

 FUNC_3(&VAR_4->reg_lock);
 switch (VAR_3) {
 case 130:
 case 131:
  VAR_4->mode |= VAR_1;
  FUNC_2(VAR_4, FUNC_0(VAR_4).dma_on);
  break;
 case 129:
 case 128:
  FUNC_2(VAR_4, FUNC_0(VAR_4).dma_off);
  VAR_4->mode &= ~VAR_1;
  break;
 default:
  VAR_5 = -VAR_0;
  break;
 }
 FUNC_4(&VAR_4->reg_lock);
 return VAR_5;
}
