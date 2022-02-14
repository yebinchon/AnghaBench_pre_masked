
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_tplg {int dev; } ;
struct snd_soc_tplg_stream {int dummy; } ;
struct snd_soc_tplg_pcm_v4 {int * caps; int * stream; int num_streams; int compress; int capture; int playback; int dai_id; int pcm_id; int * dai_name; int * pcm_name; } ;
struct snd_soc_tplg_pcm {int * caps; int * stream; int num_streams; int compress; int capture; int playback; int dai_id; int pcm_id; int * dai_name; int * pcm_name; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 struct snd_soc_tplg_pcm* FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static int FUNC_7(struct soc_tplg *VAR_4,
         struct snd_soc_tplg_pcm *VAR_5,
         struct snd_soc_tplg_pcm **VAR_6)
{
 struct snd_soc_tplg_pcm *VAR_7;
 struct snd_soc_tplg_pcm_v4 *VAR_8;
 int VAR_9;

 *VAR_6 = ((void*)0);

 if (FUNC_4(VAR_5->size) != sizeof(*VAR_8)) {
  FUNC_1(VAR_4->dev, "ASoC: invalid PCM size\n");
  return -VAR_0;
 }

 FUNC_2(VAR_4->dev, "ASoC: old version of PCM\n");
 VAR_8 = (struct snd_soc_tplg_pcm_v4 *)VAR_5;
 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->size = FUNC_0(sizeof(*VAR_7));
 FUNC_5(VAR_7->pcm_name, VAR_8->pcm_name, VAR_3);
 FUNC_5(VAR_7->dai_name, VAR_8->dai_name, VAR_3);
 VAR_7->pcm_id = VAR_8->pcm_id;
 VAR_7->dai_id = VAR_8->dai_id;
 VAR_7->playback = VAR_8->playback;
 VAR_7->capture = VAR_8->capture;
 VAR_7->compress = VAR_8->compress;
 VAR_7->num_streams = VAR_8->num_streams;
 for (VAR_9 = 0; VAR_9 < FUNC_4(VAR_7->num_streams); VAR_9++)
  FUNC_5(&VAR_7->stream[VAR_9], &VAR_8->stream[VAR_9],
         sizeof(struct snd_soc_tplg_stream));

 for (VAR_9 = 0; VAR_9 < 2; VAR_9++)
  FUNC_6(&VAR_7->caps[VAR_9], &VAR_8->caps[VAR_9]);

 *VAR_6 = VAR_7;
 return 0;
}
