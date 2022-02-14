
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_byt_priv_data {struct sst_byt* byt; struct sst_byt_pcm_data* pcm; } ;
struct sst_byt_pcm_data {int mutex; int * stream; struct snd_pcm_substream* substream; } ;
struct sst_byt {int dummy; } ;
struct snd_soc_pcm_runtime {int dev; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {size_t stream; struct snd_soc_pcm_runtime* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct sst_byt_priv_data* FUNC_4 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_5 (struct snd_soc_pcm_runtime*,int ) ;
 int FUNC_6 (struct snd_pcm_substream*,int *) ;
 int VAR_3 ;
 int * FUNC_7 (struct sst_byt*,int,int ,struct sst_byt_pcm_data*) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_4)
{
 struct snd_soc_pcm_runtime *VAR_5 = VAR_4->private_data;
 struct snd_soc_component *VAR_6 = FUNC_5(VAR_5, VAR_0);
 struct sst_byt_priv_data *VAR_7 = FUNC_4(VAR_6);
 struct sst_byt_pcm_data *VAR_8 = &VAR_7->pcm[VAR_4->stream];
 struct sst_byt *VAR_9 = VAR_7->byt;

 FUNC_0(VAR_5->dev, "PCM: open\n");

 FUNC_2(&VAR_8->mutex);

 VAR_8->substream = VAR_4;

 FUNC_6(VAR_4, &VAR_3);

 VAR_8->stream = FUNC_7(VAR_9, VAR_4->stream + 1,
           VAR_2, VAR_8);
 if (VAR_8->stream == ((void*)0)) {
  FUNC_1(VAR_5->dev, "failed to create stream\n");
  FUNC_3(&VAR_8->mutex);
  return -VAR_1;
 }

 FUNC_3(&VAR_8->mutex);
 return 0;
}
