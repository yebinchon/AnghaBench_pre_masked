
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ capture; scalar_t__ playback; } ;
struct snd_sof_pcm {int list; TYPE_2__* stream; TYPE_1__ pcm; } ;
struct snd_soc_dobj {struct snd_sof_pcm* private; } ;
struct snd_soc_component {int dummy; } ;
struct TYPE_4__ {int page_table; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct snd_sof_pcm*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_2,
     struct snd_soc_dobj *VAR_3)
{
 struct snd_sof_pcm *VAR_4 = VAR_3->private;


 if (VAR_4->pcm.playback)
  FUNC_2(&VAR_4->stream[VAR_1].page_table);

 if (VAR_4->pcm.capture)
  FUNC_2(&VAR_4->stream[VAR_0].page_table);


 FUNC_1(&VAR_4->list);
 FUNC_0(VAR_4);

 return 0;
}
