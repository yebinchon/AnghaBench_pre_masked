
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_tscm {int mutex; int substreams_counter; } ;
struct snd_pcm_substream {TYPE_2__* runtime; struct snd_tscm* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_4__ {TYPE_1__* status; } ;
struct TYPE_3__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 unsigned int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_substream*,int ) ;
 int FUNC_5 (struct snd_tscm*,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_1,
    struct snd_pcm_hw_params *VAR_2)
{
 struct snd_tscm *VAR_3 = VAR_1->private_data;
 int VAR_4;

 VAR_4 = FUNC_4(VAR_1,
            FUNC_2(VAR_2));
 if (VAR_4 < 0)
  return VAR_4;

 if (VAR_1->runtime->status->state == VAR_0) {
  unsigned int VAR_5 = FUNC_3(VAR_2);

  FUNC_0(&VAR_3->mutex);
  VAR_4 = FUNC_5(VAR_3, VAR_5);
  if (VAR_4 >= 0)
   ++VAR_3->substreams_counter;
  FUNC_1(&VAR_3->mutex);
 }

 return VAR_4;
}
