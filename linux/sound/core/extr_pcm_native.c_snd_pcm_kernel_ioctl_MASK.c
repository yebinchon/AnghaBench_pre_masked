
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int stream; } ;
typedef int snd_pcm_uframes_t ;
typedef int snd_pcm_sframes_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_pcm_substream*,int *) ;
 int FUNC_1 (struct snd_pcm_substream*,int *) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (struct snd_pcm_substream*,int ) ;
 int FUNC_4 (struct snd_pcm_substream*,void*) ;
 int FUNC_5 (struct snd_pcm_substream*,int *) ;
 int FUNC_6 (struct snd_pcm_substream*) ;
 int FUNC_7 (struct snd_pcm_substream*,void*) ;

int FUNC_8(struct snd_pcm_substream *VAR_2,
    unsigned int VAR_3, void *VAR_4)
{
 snd_pcm_uframes_t *VAR_5 = VAR_4;
 snd_pcm_sframes_t VAR_6;

 switch (VAR_3) {
 case 132:
 {

  if (VAR_2->stream != VAR_1)
   return -VAR_0;
  VAR_6 = FUNC_3(VAR_2, *VAR_5);
  return VAR_6 < 0 ? VAR_6 : 0;
 }
 case 131:
  return FUNC_4(VAR_2, VAR_4);
 case 128:
  return FUNC_7(VAR_2, VAR_4);
 case 130:
  return FUNC_5(VAR_2, ((void*)0));
 case 129:
  return FUNC_6(VAR_2);
 case 134:
  return FUNC_1(VAR_2, ((void*)0));
 case 133:
  return FUNC_2(VAR_2);
 case 135:
  return FUNC_0(VAR_2, VAR_5);
 default:
  return -VAR_0;
 }
}
