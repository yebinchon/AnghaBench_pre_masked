
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slim_stream_config {int dummy; } ;
struct wcd_slim_codec_dai_data {int sruntime; struct slim_stream_config sconfig; } ;
struct wcd9335_codec {struct wcd_slim_codec_dai_data* dai; } ;
struct snd_soc_dai {size_t id; int component; } ;
struct snd_pcm_substream {int dummy; } ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct slim_stream_config*) ;
 int FUNC_3 (int ) ;
 struct wcd9335_codec* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_0, int VAR_1,
      struct snd_soc_dai *VAR_2)
{
 struct wcd_slim_codec_dai_data *VAR_3;
 struct wcd9335_codec *VAR_4;
 struct slim_stream_config *VAR_5;

 VAR_4 = FUNC_4(VAR_2->component);

 VAR_3 = &VAR_4->dai[VAR_2->id];

 switch (VAR_1) {
 case 130:
 case 131:
 case 132:
  VAR_5 = &VAR_3->sconfig;
  FUNC_2(VAR_3->sruntime, VAR_5);
  FUNC_1(VAR_3->sruntime);
  break;
 case 129:
 case 128:
 case 133:
  FUNC_3(VAR_3->sruntime);
  FUNC_0(VAR_3->sruntime);
  break;
 default:
  break;
 }

 return 0;
}
