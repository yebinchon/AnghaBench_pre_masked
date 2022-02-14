
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dmaengine_pcm_config {char** chan_names; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 struct snd_dmaengine_pcm_config* FUNC_0 (struct device*,int,int ) ;
 int FUNC_1 (struct device*,struct snd_dmaengine_pcm_config*,unsigned int) ;
 struct snd_dmaengine_pcm_config VAR_3 ;

int FUNC_2(struct device *VAR_4,
          char *VAR_5, char *VAR_6)
{
 struct snd_dmaengine_pcm_config *VAR_7;
 unsigned int VAR_8 = 0;


 if (!VAR_5 && !VAR_6)
  return FUNC_1(VAR_4,
      &VAR_3, 0);

 VAR_7 = FUNC_0(VAR_4, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 *VAR_7 = VAR_3;

 if (!VAR_5 || !VAR_6) {

  VAR_8 |= VAR_2;
  if (!VAR_5) {
   VAR_5 = VAR_6;
   VAR_6 = ((void*)0);
  }
 }

 VAR_7->chan_names[0] = VAR_5;
 VAR_7->chan_names[1] = VAR_6;

 return FUNC_1(VAR_4, VAR_7, VAR_8);
}
