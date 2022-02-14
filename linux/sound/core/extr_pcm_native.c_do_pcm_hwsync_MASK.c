
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {int stream; TYPE_2__* runtime; } ;
struct TYPE_4__ {TYPE_1__* status; } ;
struct TYPE_3__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int VAR_3 ;
 int FUNC_0 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_4)
{
 switch (VAR_4->runtime->status->state) {
 case 133:
  if (VAR_4->stream == VAR_3)
   return -VAR_0;

 case 130:
  return FUNC_0(VAR_4);
 case 131:
 case 132:
  return 0;
 case 129:
  return -VAR_2;
 case 128:
  return -VAR_1;
 default:
  return -VAR_0;
 }
}
