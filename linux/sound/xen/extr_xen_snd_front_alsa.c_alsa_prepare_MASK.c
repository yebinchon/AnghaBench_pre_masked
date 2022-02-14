
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct xen_snd_front_pcm_stream_info {int is_open; int shbuf; TYPE_3__* evt_pair; TYPE_2__* front_info; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int rate; int channels; int format; } ;
struct TYPE_6__ {int req; } ;
struct TYPE_5__ {TYPE_1__* xb_dev; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 struct xen_snd_front_pcm_stream_info* FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int *,int,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_0)
{
 struct xen_snd_front_pcm_stream_info *VAR_1 = FUNC_3(VAR_0);

 if (!VAR_1->is_open) {
  struct snd_pcm_runtime *VAR_2 = VAR_0->runtime;
  u8 VAR_3;
  int VAR_4;

  VAR_4 = FUNC_4(VAR_2->format);
  if (VAR_4 < 0) {
   FUNC_0(&VAR_1->front_info->xb_dev->dev,
    "Unsupported sample format: %d\n",
    VAR_2->format);
   return VAR_4;
  }
  VAR_3 = VAR_4;

  VAR_4 = FUNC_5(&VAR_1->evt_pair->req,
         &VAR_1->shbuf,
         VAR_3,
         VAR_2->channels,
         VAR_2->rate,
         FUNC_1(VAR_0),
         FUNC_2(VAR_0));
  if (VAR_4 < 0)
   return VAR_4;

  VAR_1->is_open = 1;
 }

 return 0;
}
