
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_byt_priv_data {struct sst_byt* byt; struct sst_byt_pcm_data* pcm; } ;
struct sst_byt_pcm_data {int hw_ptr; int stream; } ;
struct sst_byt {int dummy; } ;
struct snd_soc_pcm_runtime {int dev; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {size_t stream; struct snd_soc_pcm_runtime* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,int) ;
 struct sst_byt_priv_data* FUNC_2 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_3 (struct snd_soc_pcm_runtime*,int ) ;
 int FUNC_4 (struct sst_byt*,int ) ;
 int FUNC_5 (struct sst_byt*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_1)
{
 struct snd_soc_pcm_runtime *VAR_2 = VAR_1->private_data;
 struct snd_soc_component *VAR_3 = FUNC_3(VAR_2, VAR_0);
 struct sst_byt_priv_data *VAR_4 = FUNC_2(VAR_3);
 struct sst_byt_pcm_data *VAR_5 = &VAR_4->pcm[VAR_1->stream];
 struct sst_byt *VAR_6 = VAR_4->byt;
 int VAR_7;


 VAR_7 = FUNC_4(VAR_6, VAR_5->stream);
 if (VAR_7 < 0) {
  FUNC_1(VAR_2->dev, "PCM: failed stream commit %d\n", VAR_7);
  return VAR_7;
 }

 FUNC_5(VAR_6, VAR_5->stream, VAR_5->hw_ptr);

 FUNC_0(VAR_2->dev, "stream context restored at offset %d\n",
  VAR_5->hw_ptr);

 return 0;
}
