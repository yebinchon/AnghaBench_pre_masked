
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_2__* runtime; } ;
struct atiixp {int max_channels; int open_mutex; int * dmas; } ;
struct TYPE_3__ {int channels_max; } ;
struct TYPE_4__ {TYPE_1__ hw; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_pcm_substream*,int *,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int ,int) ;
 struct atiixp* FUNC_4 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_2)
{
 struct atiixp *VAR_3 = FUNC_4(VAR_2);
 int VAR_4;

 FUNC_0(&VAR_3->open_mutex);
 VAR_4 = FUNC_2(VAR_2, &VAR_3->dmas[VAR_0], 0);
 FUNC_1(&VAR_3->open_mutex);
 if (VAR_4 < 0)
  return VAR_4;
 VAR_2->runtime->hw.channels_max = VAR_3->max_channels;
 if (VAR_3->max_channels > 2)

  FUNC_3(VAR_2->runtime, 0,
        VAR_1, 2);
 return 0;
}
