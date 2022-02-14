
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_hw_params {int dummy; } ;
struct uniphier_aio_sub {int setting; int vol; struct snd_pcm_hw_params params; } ;
struct uniphier_aio {TYPE_2__* chip; struct uniphier_aio_sub* sub; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {size_t stream; } ;
struct device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct uniphier_aio_sub*) ;
 int FUNC_1 (struct uniphier_aio_sub*,int ) ;
 int FUNC_2 (struct uniphier_aio_sub*) ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (struct snd_soc_dai*,int ,int,int ) ;
 struct uniphier_aio* FUNC_6 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_3,
      struct snd_pcm_hw_params *VAR_4,
      struct snd_soc_dai *VAR_5)
{
 struct uniphier_aio *VAR_6 = FUNC_6(VAR_5);
 struct uniphier_aio_sub *VAR_7 = &VAR_6->sub[VAR_3->stream];
 struct device *VAR_8 = &VAR_6->chip->pdev->dev;
 int VAR_9, VAR_10;

 switch (FUNC_4(VAR_4)) {
 case 48000:
 case 32000:
 case 24000:
  VAR_9 = 12288000;
  break;
 case 44100:
 case 22050:
  VAR_9 = 11289600;
  break;
 default:
  FUNC_3(VAR_8, "Rate is not supported(%d)\n",
   FUNC_4(VAR_4));
  return -VAR_1;
 }
 VAR_10 = FUNC_5(VAR_5, VAR_0,
         VAR_9, VAR_2);
 if (VAR_10)
  return VAR_10;

 VAR_7->params = *VAR_4;
 VAR_7->setting = 1;

 FUNC_0(VAR_7);
 FUNC_1(VAR_7, VAR_7->vol);
 FUNC_2(VAR_7);

 return 0;
}
