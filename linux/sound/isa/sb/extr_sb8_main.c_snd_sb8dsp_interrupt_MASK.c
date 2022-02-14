
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sb {int mode; int capture_format; struct snd_pcm_substream* capture_substream; int hardware; int playback_format; struct snd_pcm_substream* playback_substream; } ;
struct snd_pcm_substream {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pcm_substream*,int ) ;
 int FUNC_2 (struct snd_pcm_substream*,int ) ;
 int FUNC_3 (struct snd_sb*) ;

irqreturn_t FUNC_4(struct snd_sb *VAR_5)
{
 struct snd_pcm_substream *VAR_6;

 FUNC_3(VAR_5);
 switch (VAR_5->mode) {
 case 129:
  if (VAR_5->hardware != VAR_3)
   break;

 case 128:
  VAR_6 = VAR_5->playback_substream;
  if (VAR_5->playback_format == VAR_2)
       FUNC_2(VAR_6, VAR_4);
  FUNC_0(VAR_6);
  break;
 case 131:
  if (VAR_5->hardware != VAR_3)
   break;

 case 130:
  VAR_6 = VAR_5->capture_substream;
  if (VAR_5->capture_format == VAR_1)
       FUNC_1(VAR_6, VAR_4);
  FUNC_0(VAR_6);
  break;
 }
 return VAR_0;
}
