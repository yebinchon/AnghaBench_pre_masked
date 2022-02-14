
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct TYPE_2__ {int format; unsigned int channels; } ;







__attribute__((used)) static unsigned int FUNC_0(struct snd_pcm_substream *VAR_0)
{
 unsigned int VAR_1;

 switch (VAR_0->runtime->format) {
 case 130:
  VAR_1 = 0x00000000;
  break;
 case 129:
  VAR_1 = 0x00000200;
  break;
 case 128:
  VAR_1 = 0x00000300;
  break;
 case 131:
  VAR_1 = 0x00001300;
  break;
 default:
  return 0;
 }
 VAR_1 |= VAR_0->runtime->channels;
 return VAR_1;
}
