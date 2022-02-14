
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_usX2Y_substream {int state; TYPE_2__* usX2Y; } ;
struct snd_pcm_substream {TYPE_3__* runtime; } ;
struct TYPE_6__ {struct snd_usX2Y_substream* private_data; } ;
struct TYPE_5__ {TYPE_1__** subs; } ;
struct TYPE_4__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_5, int VAR_6)
{
 struct snd_usX2Y_substream *VAR_7 = VAR_5->runtime->private_data;

 switch (VAR_6) {
 case 129:
  FUNC_2("snd_usX2Y_pcm_trigger(START)\n");
  if (FUNC_0(&VAR_7->state) == VAR_3 &&
      FUNC_0(&VAR_7->usX2Y->subs[VAR_2]->state) >= VAR_3) {
   FUNC_1(&VAR_7->state, VAR_4);
  } else {
   FUNC_2("\n");
   return -VAR_1;
  }
  break;
 case 128:
  FUNC_2("snd_usX2Y_pcm_trigger(STOP)\n");
  if (FUNC_0(&VAR_7->state) >= VAR_4)
   FUNC_1(&VAR_7->state, VAR_3);
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
