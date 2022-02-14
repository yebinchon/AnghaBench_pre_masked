
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct snd_azf3328_codec_data* private_data; int hw; } ;
struct snd_azf3328_codec_data {struct snd_pcm_substream* substream; } ;
struct snd_azf3328 {struct snd_azf3328_codec_data* codecs; } ;
typedef enum snd_azf3328_codec_type { ____Placeholder_snd_azf3328_codec_type } snd_azf3328_codec_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ,int ,int *) ;
 struct snd_azf3328* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int
FUNC_2(struct snd_pcm_substream *VAR_3,
       enum snd_azf3328_codec_type VAR_4
)
{
 struct snd_azf3328 *VAR_5 = FUNC_1(VAR_3);
 struct snd_pcm_runtime *VAR_6 = VAR_3->runtime;
 struct snd_azf3328_codec_data *VAR_7 = &VAR_5->codecs[VAR_4];

 VAR_7->substream = VAR_3;


 VAR_6->hw = VAR_1;

 FUNC_0(VAR_6, 0, VAR_0,
       &VAR_2);
 VAR_6->private_data = VAR_7;
 return 0;
}
