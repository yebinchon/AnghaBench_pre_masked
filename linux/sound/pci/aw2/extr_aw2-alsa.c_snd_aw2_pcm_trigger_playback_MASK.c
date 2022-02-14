
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct aw2_pcm_device {int stream_number; struct aw2* chip; } ;
struct aw2 {int reg_lock; int saa7146; } ;


 int VAR_0 ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 struct aw2_pcm_device* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_1,
     int VAR_2)
{
 int VAR_3 = 0;
 struct aw2_pcm_device *VAR_4 = FUNC_2(VAR_1);
 struct aw2 *VAR_5 = VAR_4->chip;
 FUNC_3(&VAR_5->reg_lock);
 switch (VAR_2) {
 case 129:
  FUNC_0(&VAR_5->saa7146,
          VAR_4->
          stream_number);
  break;
 case 128:
  FUNC_1(&VAR_5->saa7146,
         VAR_4->
         stream_number);
  break;
 default:
  VAR_3 = -VAR_0;
 }
 FUNC_4(&VAR_5->reg_lock);
 return VAR_3;
}
