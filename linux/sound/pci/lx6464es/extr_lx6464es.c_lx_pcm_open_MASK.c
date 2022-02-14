
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct lx6464es* private_data; int hw; } ;
struct lx6464es {int board_sample_rate; TYPE_1__* card; int setup_mutex; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*) ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct snd_pcm_runtime*,int ) ;
 int FUNC_5 (struct snd_pcm_runtime*,int ,int ,int ) ;
 int FUNC_6 (struct snd_pcm_runtime*,int ,int) ;
 int FUNC_7 (struct snd_pcm_runtime*,int ,int ,int) ;
 int FUNC_8 (struct snd_pcm_substream*) ;
 struct lx6464es* FUNC_9 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_10(struct snd_pcm_substream *VAR_7)
{
 struct lx6464es *VAR_8 = FUNC_9(VAR_7);
 struct snd_pcm_runtime *VAR_9 = VAR_7->runtime;
 int VAR_10 = 0;
 int VAR_11;

 FUNC_0(VAR_8->card->dev, "->lx_pcm_open\n");
 FUNC_2(&VAR_8->setup_mutex);


 VAR_9->hw = VAR_6;
 VAR_11 = VAR_8->board_sample_rate;
 VAR_10 = FUNC_6(VAR_9, VAR_5,
        VAR_11);

 if (VAR_10 < 0) {
  FUNC_1(VAR_8->card->dev, "could not constrain periods\n");
  goto exit;
 }


 VAR_10 = FUNC_5(VAR_9,
        VAR_4,
        VAR_1,
        VAR_0);
 if (VAR_10 < 0) {
  FUNC_1(VAR_8->card->dev,
      "could not constrain period size\n");
  goto exit;
 }

 FUNC_7(VAR_9, 0,
       VAR_2, 32);

 FUNC_8(VAR_7);
 VAR_10 = 0;

exit:
 VAR_9->private_data = VAR_8;

 FUNC_3(&VAR_8->setup_mutex);
 FUNC_0(VAR_8->card->dev, "<-lx_pcm_open, %d\n", VAR_10);
 return VAR_10;
}
