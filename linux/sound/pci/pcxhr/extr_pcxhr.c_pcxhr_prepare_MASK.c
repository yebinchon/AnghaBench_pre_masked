
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcxhr {TYPE_1__* card; struct pcxhr_mgr* mgr; } ;
struct snd_pcm_substream {TYPE_2__* runtime; } ;
struct pcxhr_mgr {scalar_t__ sample_rate; int setup_mutex; } ;
struct TYPE_4__ {scalar_t__ rate; int buffer_size; int periods; int period_size; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int ,char*,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pcxhr_mgr*,int) ;
 int FUNC_4 (struct pcxhr_mgr*,scalar_t__) ;
 struct snd_pcxhr* FUNC_5 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_0)
{
 struct snd_pcxhr *VAR_1 = FUNC_5(VAR_0);
 struct pcxhr_mgr *VAR_2 = VAR_1->mgr;
 int VAR_3 = 0;

 FUNC_0(VAR_1->card->dev,
  "pcxhr_prepare : period_size(%lx) periods(%x) buffer_size(%lx)\n",
      VAR_0->runtime->period_size, VAR_0->runtime->periods,
      VAR_0->runtime->buffer_size);

 FUNC_1(&VAR_2->setup_mutex);

 do {


  if (VAR_2->sample_rate != VAR_0->runtime->rate) {
   VAR_3 = FUNC_4(VAR_2, VAR_0->runtime->rate);
   if (VAR_3)
    break;
   if (VAR_2->sample_rate == 0)

    VAR_3 = FUNC_3(VAR_2, 1);
   VAR_2->sample_rate = VAR_0->runtime->rate;
  }
 } while(0);

 FUNC_2(&VAR_2->setup_mutex);

 return VAR_3;
}
