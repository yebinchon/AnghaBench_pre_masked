
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_byt_priv_data {int restore_stream; struct sst_byt* byt; struct sst_byt_pcm_data* pcm; } ;
struct sst_byt_pcm_data {int stream; int work; int hw_ptr; } ;
struct sst_byt {int dummy; } ;
struct snd_soc_pcm_runtime {int dev; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {size_t stream; struct snd_soc_pcm_runtime* private_data; } ;


 int VAR_0 ;






 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 struct sst_byt_priv_data* FUNC_2 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_3 (struct snd_soc_pcm_runtime*,int ) ;
 int FUNC_4 (struct sst_byt*,int ) ;
 int FUNC_5 (struct sst_byt*,int ) ;
 int FUNC_6 (struct sst_byt*,int ,int ) ;
 int FUNC_7 (struct sst_byt*,int ) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_1, int VAR_2)
{
 struct snd_soc_pcm_runtime *VAR_3 = VAR_1->private_data;
 struct snd_soc_component *VAR_4 = FUNC_3(VAR_3, VAR_0);
 struct sst_byt_priv_data *VAR_5 = FUNC_2(VAR_4);
 struct sst_byt_pcm_data *VAR_6 = &VAR_5->pcm[VAR_1->stream];
 struct sst_byt *VAR_7 = VAR_5->byt;

 FUNC_0(VAR_3->dev, "PCM: trigger %d\n", VAR_2);

 switch (VAR_2) {
 case 130:
  VAR_6->hw_ptr = 0;
  FUNC_6(VAR_7, VAR_6->stream, 0);
  break;
 case 131:
  if (VAR_5->restore_stream)
   FUNC_1(&VAR_6->work);
  else
   FUNC_5(VAR_7, VAR_6->stream);
  break;
 case 132:
  FUNC_5(VAR_7, VAR_6->stream);
  break;
 case 129:
  FUNC_7(VAR_7, VAR_6->stream);
  break;
 case 128:
  VAR_5->restore_stream = 0;

 case 133:
  FUNC_4(VAR_7, VAR_6->stream);
  break;
 default:
  break;
 }

 return 0;
}
