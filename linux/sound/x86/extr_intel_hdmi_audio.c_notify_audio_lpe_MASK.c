
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_intelhad_card {struct snd_intelhad* pcm_ctx; } ;
struct snd_intelhad {int port; int hdmi_audio_wq; } ;
struct platform_device {int dummy; } ;


 struct snd_intelhad_card* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_2(struct platform_device *VAR_1, int VAR_2)
{
 struct snd_intelhad_card *VAR_3 = FUNC_0(VAR_1);
 struct snd_intelhad *VAR_4;

 VAR_4 = &VAR_3->pcm_ctx[VAR_0 ? 0 : VAR_2];
 if (VAR_0)
  VAR_4->port = VAR_2;

 FUNC_1(&VAR_4->hdmi_audio_wq);
}
