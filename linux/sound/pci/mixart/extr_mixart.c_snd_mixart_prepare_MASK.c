
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_mixart {TYPE_3__* mgr; TYPE_2__* card; } ;
struct mixart_stream {TYPE_5__* pipe; } ;
struct TYPE_9__ {int references; } ;
struct TYPE_8__ {int ref_count_rate; int sample_rate; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {int rate; struct mixart_stream* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,TYPE_5__*,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 struct snd_mixart* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_1)
{
 struct snd_mixart *VAR_2 = FUNC_3(VAR_1);
 struct mixart_stream *VAR_3 = VAR_1->runtime->private_data;



 FUNC_0(VAR_2->card->dev, "snd_mixart_prepare\n");

 FUNC_2(VAR_2->mgr);



 if(VAR_2->mgr->ref_count_rate == 1)
  VAR_2->mgr->sample_rate = VAR_1->runtime->rate;


 if(VAR_3->pipe->references == 1) {
  if( FUNC_1(VAR_2->mgr, VAR_3->pipe, VAR_1->runtime->rate) )
   return -VAR_0;
 }

 return 0;
}
