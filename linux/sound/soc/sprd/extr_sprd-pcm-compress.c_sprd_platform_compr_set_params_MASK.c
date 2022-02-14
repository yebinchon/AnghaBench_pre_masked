
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sprd_compr_stream {TYPE_3__* dma; TYPE_2__* compr_ops; int info_size; int info_phys; int num_channels; } ;
struct sprd_compr_params {int format; int rate; int info_size; int info_phys; int channels; int sample_rate; int direction; } ;
struct snd_soc_pcm_runtime {int dummy; } ;
struct snd_soc_component {struct device* dev; } ;
struct snd_compr_stream {int direction; struct snd_soc_pcm_runtime* private_data; struct snd_compr_runtime* runtime; } ;
struct snd_compr_runtime {struct sprd_compr_stream* private_data; } ;
struct TYPE_4__ {int id; int bit_rate; int sample_rate; } ;
struct snd_compr_params {TYPE_1__ codec; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int chan; } ;
struct TYPE_5__ {int (* set_params ) (int ,struct sprd_compr_params*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (int ) ;
 struct snd_soc_component* FUNC_2 (struct snd_soc_pcm_runtime*,int ) ;
 int FUNC_3 (struct snd_compr_stream*,struct snd_compr_params*,int) ;
 int FUNC_4 (int ,struct sprd_compr_params*) ;

__attribute__((used)) static int FUNC_5(struct snd_compr_stream *VAR_1,
       struct snd_compr_params *VAR_2)
{
 struct snd_compr_runtime *VAR_3 = VAR_1->runtime;
 struct sprd_compr_stream *VAR_4 = VAR_3->private_data;
 struct snd_soc_pcm_runtime *VAR_5 = VAR_1->private_data;
 struct snd_soc_component *VAR_6 =
  FUNC_2(VAR_5, VAR_0);
 struct device *VAR_7 = VAR_6->dev;
 struct sprd_compr_params VAR_8 = { };
 int VAR_9;







 VAR_9 = FUNC_3(VAR_1, VAR_2, 1);
 if (VAR_9) {
  FUNC_0(VAR_7, "failed to config stage 1 DMA: %d\n", VAR_9);
  return VAR_9;
 }

 VAR_9 = FUNC_3(VAR_1, VAR_2, 0);
 if (VAR_9) {
  FUNC_0(VAR_7, "failed to config stage 0 DMA: %d\n", VAR_9);
  goto config_err;
 }

 VAR_8.direction = VAR_1->direction;
 VAR_8.sample_rate = VAR_2->codec.sample_rate;
 VAR_8.channels = VAR_4->num_channels;
 VAR_8.info_phys = VAR_4->info_phys;
 VAR_8.info_size = VAR_4->info_size;
 VAR_8.rate = VAR_2->codec.bit_rate;
 VAR_8.format = VAR_2->codec.id;

 VAR_9 = VAR_4->compr_ops->set_params(VAR_1->direction, &VAR_8);
 if (VAR_9) {
  FUNC_0(VAR_7, "failed to set parameters: %d\n", VAR_9);
  goto params_err;
 }

 return 0;

params_err:
 FUNC_1(VAR_4->dma[0].chan);
config_err:
 FUNC_1(VAR_4->dma[1].chan);
 return VAR_9;
}
