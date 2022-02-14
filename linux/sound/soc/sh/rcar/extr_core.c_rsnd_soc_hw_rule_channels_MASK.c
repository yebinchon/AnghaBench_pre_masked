
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_rule {struct rsnd_dai_stream* private; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_interval {int max; int min; } ;
struct rsnd_dai_stream {int dummy; } ;
struct rsnd_dai {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct snd_interval* FUNC_1 (struct snd_pcm_hw_params*,int ) ;
 struct rsnd_dai* FUNC_2 (struct rsnd_dai_stream*) ;
 int FUNC_3 (struct rsnd_dai_stream*,struct snd_pcm_hw_params*) ;
 int VAR_2 ;
 int FUNC_4 (struct rsnd_dai*,int ,int ,struct snd_interval*,struct snd_interval*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_hw_params *VAR_3,
         struct snd_pcm_hw_rule *VAR_4)
{
 struct snd_interval *VAR_5 = FUNC_1(VAR_3, VAR_0);
 struct snd_interval *VAR_6 = FUNC_1(VAR_3, VAR_1);
 struct snd_interval VAR_7;
 struct rsnd_dai_stream *VAR_8 = VAR_4->private;
 struct rsnd_dai *VAR_9 = FUNC_2(VAR_8);






 VAR_7 = *VAR_5;
 VAR_7.min =
 VAR_7.max = FUNC_3(VAR_8, VAR_3);

 return FUNC_4(VAR_9, VAR_2,
    FUNC_0(VAR_2),
    VAR_6, &VAR_7);
}
