
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {int number; TYPE_1__* runtime; } ;
struct snd_mixart {int chip_idx; TYPE_2__* card; struct mixart_mgr* mgr; } ;
struct mixart_stream {int * substream; int status; int * pipe; int pcm_number; } ;
struct mixart_mgr {scalar_t__ ref_count_rate; int setup_mutex; scalar_t__ sample_rate; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {struct mixart_stream* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ,int ) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct mixart_mgr*,int *,int ) ;
 struct snd_mixart* FUNC_5 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_1)
{
 struct snd_mixart *VAR_2 = FUNC_5(VAR_1);
 struct mixart_mgr *VAR_3 = VAR_2->mgr;
 struct mixart_stream *VAR_4 = VAR_1->runtime->private_data;

 FUNC_2(&VAR_3->setup_mutex);

 FUNC_0(VAR_2->card->dev, "snd_mixart_close C%d/P%d/Sub%d\n",
  VAR_2->chip_idx, VAR_4->pcm_number, VAR_1->number);


 if(--VAR_3->ref_count_rate == 0) {
  VAR_3->sample_rate = 0;
 }


 if (FUNC_4(VAR_3, VAR_4->pipe, 0 ) < 0) {

  FUNC_1(VAR_2->card->dev,
   "error snd_mixart_kill_ref_pipe C%dP%d\n",
   VAR_2->chip_idx, VAR_4->pcm_number);
 }

 VAR_4->pipe = ((void*)0);
 VAR_4->status = VAR_0;
 VAR_4->substream = ((void*)0);

 FUNC_3(&VAR_3->setup_mutex);
 return 0;
}
