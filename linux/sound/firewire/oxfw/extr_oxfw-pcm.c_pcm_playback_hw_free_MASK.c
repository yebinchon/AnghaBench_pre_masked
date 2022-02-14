
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_2__* runtime; struct snd_oxfw* private_data; } ;
struct snd_oxfw {int mutex; int substreams_count; } ;
struct TYPE_4__ {TYPE_1__* status; } ;
struct TYPE_3__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_oxfw*) ;
 int FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_1)
{
 struct snd_oxfw *VAR_2 = VAR_1->private_data;

 FUNC_0(&VAR_2->mutex);

 if (VAR_1->runtime->status->state != VAR_0)
  --VAR_2->substreams_count;

 FUNC_2(VAR_2);

 FUNC_1(&VAR_2->mutex);

 return FUNC_3(VAR_1);
}
