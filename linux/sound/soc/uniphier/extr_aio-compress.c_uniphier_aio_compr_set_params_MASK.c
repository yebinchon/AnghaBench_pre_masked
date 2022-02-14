
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int profile; int id; } ;
struct snd_compr_params {TYPE_3__ codec; } ;
struct uniphier_aio_sub {int setting; struct snd_compr_params cparams; int iec_pc; } ;
struct uniphier_aio {TYPE_2__* chip; struct uniphier_aio_sub* sub; } ;
struct snd_soc_pcm_runtime {int cpu_dai; } ;
struct snd_compr_stream {size_t direction; struct snd_soc_pcm_runtime* private_data; } ;
struct device {int dummy; } ;
struct TYPE_5__ {TYPE_1__* pdev; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct uniphier_aio_sub*) ;
 int FUNC_1 (struct uniphier_aio_sub*) ;
 int FUNC_2 (struct device*,char*,int ) ;
 int FUNC_3 (struct snd_compr_stream*) ;
 struct uniphier_aio* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct snd_compr_stream *VAR_4,
      struct snd_compr_params *VAR_5)
{
 struct snd_soc_pcm_runtime *VAR_6 = VAR_4->private_data;
 struct uniphier_aio *VAR_7 = FUNC_4(VAR_6->cpu_dai);
 struct uniphier_aio_sub *VAR_8 = &VAR_7->sub[VAR_4->direction];
 struct device *VAR_9 = &VAR_7->chip->pdev->dev;
 int VAR_10;

 if (VAR_5->codec.id != VAR_2) {
  FUNC_2(VAR_9, "Codec ID is not supported(%d)\n",
   VAR_5->codec.id);
  return -VAR_0;
 }
 if (VAR_5->codec.profile != VAR_3) {
  FUNC_2(VAR_9, "Codec profile is not supported(%d)\n",
   VAR_5->codec.profile);
  return -VAR_0;
 }


 VAR_8->iec_pc = VAR_1;

 VAR_8->cparams = *VAR_5;
 VAR_8->setting = 1;

 FUNC_0(VAR_8);
 FUNC_1(VAR_8);

 VAR_10 = FUNC_3(VAR_4);
 if (VAR_10)
  return VAR_10;

 return 0;
}
