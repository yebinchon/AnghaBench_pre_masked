
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_2__* ops; TYPE_1__* runtime; } ;
struct TYPE_4__ {int (* trigger ) (struct snd_pcm_substream*,int ) ;} ;
struct TYPE_3__ {struct snd_pcm_substream* trigger_master; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pcm_substream*,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_1, int VAR_2)
{
 if (VAR_1->runtime->trigger_master != VAR_1)
  return 0;
 return VAR_1->ops->trigger(VAR_1, VAR_0);
}
