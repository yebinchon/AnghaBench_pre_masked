
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_byt_priv_data {struct sst_byt* byt; struct sst_byt_pcm_data* pcm; } ;
struct sst_byt_pcm_data {int mutex; int * stream; int work; } ;
struct sst_byt {int dummy; } ;
struct snd_soc_pcm_runtime {int dev; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {size_t stream; struct snd_soc_pcm_runtime* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct sst_byt_priv_data* FUNC_4 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_5 (struct snd_soc_pcm_runtime*,int ) ;
 int FUNC_6 (struct sst_byt*,int *) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_1)
{
 struct snd_soc_pcm_runtime *VAR_2 = VAR_1->private_data;
 struct snd_soc_component *VAR_3 = FUNC_5(VAR_2, VAR_0);
 struct sst_byt_priv_data *VAR_4 = FUNC_4(VAR_3);
 struct sst_byt_pcm_data *VAR_5 = &VAR_4->pcm[VAR_1->stream];
 struct sst_byt *VAR_6 = VAR_4->byt;
 int VAR_7;

 FUNC_1(VAR_2->dev, "PCM: close\n");

 FUNC_0(&VAR_5->work);
 FUNC_2(&VAR_5->mutex);
 VAR_7 = FUNC_6(VAR_6, VAR_5->stream);
 if (VAR_7 < 0) {
  FUNC_1(VAR_2->dev, "Free stream fail\n");
  goto out;
 }
 VAR_5->stream = ((void*)0);

out:
 FUNC_3(&VAR_5->mutex);
 return VAR_7;
}
