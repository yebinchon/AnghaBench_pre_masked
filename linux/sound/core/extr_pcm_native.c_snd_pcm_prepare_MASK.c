
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {int f_flags; TYPE_2__* runtime; } ;
struct file {int f_flags; } ;
struct TYPE_4__ {TYPE_1__* status; } ;
struct TYPE_3__ {int state; } ;



 int VAR_0 ;

 int FUNC_0 (int *,struct snd_pcm_substream*,int) ;
 int VAR_1 ;
 int FUNC_1 (struct snd_pcm_substream*,int ) ;
 int FUNC_2 (struct snd_pcm_substream*,int ) ;
 int FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_2,
      struct file *VAR_3)
{
 int VAR_4;

 if (VAR_3)
  VAR_4 = VAR_3->f_flags;
 else
  VAR_4 = VAR_2->f_flags;

 FUNC_3(VAR_2);
 switch (VAR_2->runtime->status->state) {
 case 129:
  FUNC_1(VAR_2, 0);

 case 128:
  FUNC_2(VAR_2, VAR_0);
  break;
 }
 FUNC_4(VAR_2);

 return FUNC_0(&VAR_1,
     VAR_2, VAR_4);
}
