
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int str_id; } ;
struct sst_runtime_stream {TYPE_6__* ops; TYPE_5__ stream_info; } ;
struct sst_data {int dummy; } ;
struct TYPE_9__ {int member_0; } ;
struct TYPE_8__ {TYPE_2__ member_0; } ;
struct snd_sst_stream_params {TYPE_1__ member_0; } ;
struct snd_sst_alloc_params_ext {int member_0; } ;
struct snd_sst_params {int stream_id; int codec; struct snd_sst_alloc_params_ext aparams; struct snd_sst_stream_params sparams; int member_0; } ;
struct snd_soc_dai {int dummy; } ;
struct TYPE_11__ {int area; } ;
struct snd_pcm_substream {TYPE_4__ dma_buffer; TYPE_3__* runtime; } ;
struct TYPE_14__ {int dev; } ;
struct TYPE_13__ {int (* open ) (int ,struct snd_sst_params*) ;} ;
struct TYPE_10__ {int dma_area; struct sst_runtime_stream* private_data; } ;


 int VAR_0 ;
 struct sst_data* FUNC_0 (struct snd_soc_dai*) ;
 TYPE_7__* VAR_1 ;
 int FUNC_1 (struct snd_pcm_substream*,struct snd_sst_alloc_params_ext*) ;
 int FUNC_2 (struct snd_pcm_substream*,struct snd_sst_stream_params*) ;
 int FUNC_3 (struct snd_pcm_substream*,struct sst_data*,struct snd_sst_params*,int) ;
 int FUNC_4 (int ,struct snd_sst_params*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_2,
  struct snd_soc_dai *VAR_3)
{
 struct sst_runtime_stream *VAR_4 =
   VAR_2->runtime->private_data;
 struct snd_sst_stream_params VAR_5 = {{{0,},},};
 struct snd_sst_params VAR_6 = {0};
 struct snd_sst_alloc_params_ext VAR_7 = {0};
 int VAR_8 = 0;
 struct sst_data *VAR_9 = FUNC_0(VAR_3);


 FUNC_2(VAR_2, &VAR_5);
 FUNC_1(VAR_2, &VAR_7);
 VAR_2->runtime->dma_area = VAR_2->dma_buffer.area;
 VAR_6.sparams = VAR_5;
 VAR_6.aparams = VAR_7;
 VAR_6.codec = VAR_0;


 VAR_8 = FUNC_3(VAR_2, VAR_9, &VAR_6, 0);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_4->stream_info.str_id = VAR_6.stream_id;

 VAR_8 = VAR_4->ops->open(VAR_1->dev, &VAR_6);
 if (VAR_8 <= 0)
  return VAR_8;


 return VAR_8;
}
