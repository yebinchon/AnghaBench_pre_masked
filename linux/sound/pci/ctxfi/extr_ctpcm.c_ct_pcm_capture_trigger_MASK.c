
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct ct_atc_pcm* private_data; } ;
struct ct_atc_pcm {int dummy; } ;
struct ct_atc {int (* pcm_capture_stop ) (struct ct_atc*,struct ct_atc_pcm*) ;int (* pcm_capture_start ) (struct ct_atc*,struct ct_atc_pcm*) ;} ;




 struct ct_atc* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct ct_atc*,struct ct_atc_pcm*) ;
 int FUNC_2 (struct ct_atc*,struct ct_atc_pcm*) ;
 int FUNC_3 (struct ct_atc*,struct ct_atc_pcm*) ;

__attribute__((used)) static int
FUNC_4(struct snd_pcm_substream *VAR_0, int VAR_1)
{
 struct ct_atc *VAR_2 = FUNC_0(VAR_0);
 struct snd_pcm_runtime *VAR_3 = VAR_0->runtime;
 struct ct_atc_pcm *VAR_4 = VAR_3->private_data;

 switch (VAR_1) {
 case 129:
  VAR_2->pcm_capture_start(VAR_2, VAR_4);
  break;
 case 128:
  VAR_2->pcm_capture_stop(VAR_2, VAR_4);
  break;
 default:
  VAR_2->pcm_capture_stop(VAR_2, VAR_4);
  break;
 }

 return 0;
}
