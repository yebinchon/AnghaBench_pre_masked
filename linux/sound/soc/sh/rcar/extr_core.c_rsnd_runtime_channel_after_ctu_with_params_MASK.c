
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_pcm_hw_params {int dummy; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct rsnd_dai_stream*) ;
 struct rsnd_mod* FUNC_2 (struct rsnd_dai_stream*) ;
 int FUNC_3 (struct rsnd_dai_stream*) ;
 struct device* FUNC_4 (int ) ;
 int FUNC_5 (struct rsnd_dai_stream*,struct snd_pcm_hw_params*) ;
 scalar_t__ FUNC_6 (struct rsnd_dai_stream*) ;

int FUNC_7(struct rsnd_dai_stream *VAR_0,
            struct snd_pcm_hw_params *VAR_1)
{
 int VAR_2 = FUNC_5(VAR_0, VAR_1);
 struct rsnd_mod *VAR_3 = FUNC_2(VAR_0);

 if (VAR_3) {
  u32 VAR_4 = FUNC_1(VAR_0);
  if (FUNC_6(VAR_0)) {
   struct device *VAR_5 = FUNC_4(FUNC_3(VAR_0));

   FUNC_0(VAR_5, "CTU and TDM Split should be used\n");
  }

  if (VAR_4)
   return VAR_4;
 }

 return VAR_2;
}
