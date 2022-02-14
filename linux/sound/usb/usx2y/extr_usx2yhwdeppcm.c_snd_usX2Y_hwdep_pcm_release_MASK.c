
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_hwdep {struct snd_card* card; } ;
struct snd_card {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int pcm_mutex; int chip_status; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (struct snd_card*) ;
 int FUNC_3 (struct snd_card*) ;

__attribute__((used)) static int FUNC_4(struct snd_hwdep *VAR_1, struct file *VAR_2)
{
 struct snd_card *VAR_3 = VAR_1->card;
 int VAR_4;

 FUNC_0(&FUNC_2(VAR_3)->pcm_mutex);
 VAR_4 = FUNC_3(VAR_3);
 if (!VAR_4)
  FUNC_2(VAR_1->card)->chip_status &= ~VAR_0;
 FUNC_1(&FUNC_2(VAR_3)->pcm_mutex);
 return VAR_4;
}
