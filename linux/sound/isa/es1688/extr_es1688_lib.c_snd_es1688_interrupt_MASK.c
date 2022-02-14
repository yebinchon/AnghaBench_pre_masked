
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_es1688 {int trigger_value; int capture_substream; int playback_substream; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct snd_es1688*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct snd_es1688 *VAR_4 = VAR_3;

 if (VAR_4->trigger_value == 0x05)
  FUNC_2(VAR_4->playback_substream);
 if (VAR_4->trigger_value == 0x0f)
  FUNC_2(VAR_4->capture_substream);

 FUNC_1(FUNC_0(VAR_4, VAR_0));
 return VAR_1;
}
