
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sst_pdata {int dsp; struct device* dma_dev; } ;
struct snd_soc_component {int card; struct device* dev; } ;
struct hsw_priv_data {int ** dmab; TYPE_1__** pcm; int soc_card; int pm_state; struct device* dev; int hsw; } ;
struct device {int dummy; } ;
struct TYPE_8__ {scalar_t__ channels_min; } ;
struct TYPE_7__ {scalar_t__ channels_min; } ;
struct TYPE_9__ {TYPE_3__ capture; TYPE_2__ playback; } ;
struct TYPE_6__ {int mutex; } ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 struct sst_pdata* FUNC_1 (struct device*) ;
 TYPE_4__* VAR_7 ;
 int FUNC_2 (struct hsw_priv_data*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*,int ) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (int ,struct device*,int ,int *) ;
 int FUNC_9 (int *) ;
 struct hsw_priv_data* FUNC_10 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_11(struct snd_soc_component *VAR_8)
{
 struct hsw_priv_data *VAR_9 = FUNC_10(VAR_8);
 struct sst_pdata *VAR_10 = FUNC_1(VAR_8->dev);
 struct device *VAR_11, *VAR_12;
 int VAR_13, VAR_14 = 0;

 if (!VAR_10)
  return -VAR_0;

 VAR_12 = VAR_8->dev;
 VAR_11 = VAR_10->dma_dev;

 VAR_9->hsw = VAR_10->dsp;
 VAR_9->dev = VAR_12;
 VAR_9->pm_state = VAR_1;
 VAR_9->soc_card = VAR_8->card;


 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_7); VAR_13++) {


  if (VAR_7[VAR_13].playback.channels_min) {
   FUNC_3(&VAR_9->pcm[VAR_13][VAR_5].mutex);
   VAR_14 = FUNC_8(VAR_3, VAR_11,
    VAR_2, &VAR_9->dmab[VAR_13][0]);
   if (VAR_14 < 0)
    goto err;
  }


  if (VAR_7[VAR_13].capture.channels_min) {
   FUNC_3(&VAR_9->pcm[VAR_13][VAR_4].mutex);
   VAR_14 = FUNC_8(VAR_3, VAR_11,
    VAR_2, &VAR_9->dmab[VAR_13][1]);
   if (VAR_14 < 0)
    goto err;
  }
 }


 VAR_14 = FUNC_2(VAR_9);
 if (VAR_14 < 0)
  goto err;


 FUNC_6(VAR_12, VAR_6);
 FUNC_7(VAR_12);
 FUNC_4(VAR_12);
 FUNC_5(VAR_12);

 return 0;

err:
 for (--VAR_13; VAR_13 >= 0; VAR_13--) {
  if (VAR_7[VAR_13].playback.channels_min)
   FUNC_9(&VAR_9->dmab[VAR_13][0]);
  if (VAR_7[VAR_13].capture.channels_min)
   FUNC_9(&VAR_9->dmab[VAR_13][1]);
 }
 return VAR_14;
}
