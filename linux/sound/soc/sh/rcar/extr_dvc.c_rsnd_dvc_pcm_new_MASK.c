
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int dummy; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dvc {int rdown; int rup; int ren; int mute; int volume; } ;
struct rsnd_dai_stream {int dummy; } ;
struct rsnd_dai {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rsnd_dai_stream*) ;
 struct rsnd_dai* FUNC_1 (struct rsnd_dai_stream*) ;
 int VAR_2 ;
 int FUNC_2 (struct rsnd_mod*,struct rsnd_dai_stream*,struct snd_soc_pcm_runtime*,char*,int ,int ,int *,int ,int ) ;
 int FUNC_3 (struct rsnd_mod*,struct rsnd_dai_stream*,struct snd_soc_pcm_runtime*,char*,int ,int ,int *,int,int) ;
 int FUNC_4 (struct rsnd_mod*,struct rsnd_dai_stream*,struct snd_soc_pcm_runtime*,char*,int ,int ,int *,int) ;
 struct rsnd_dvc* FUNC_5 (struct rsnd_mod*) ;
 int FUNC_6 (struct rsnd_dai*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_7(struct rsnd_mod *VAR_4,
       struct rsnd_dai_stream *VAR_5,
       struct snd_soc_pcm_runtime *VAR_6)
{
 struct rsnd_dvc *VAR_7 = FUNC_5(VAR_4);
 struct rsnd_dai *VAR_8 = FUNC_1(VAR_5);
 int VAR_9 = FUNC_0(VAR_5);
 int VAR_10 = FUNC_6(VAR_8);
 int VAR_11;


 VAR_11 = FUNC_3(VAR_4, VAR_5, VAR_6,
   VAR_9 ?
   "DVC Out Playback Volume" : "DVC In Capture Volume",
   VAR_2,
   VAR_1,
   &VAR_7->volume, VAR_10,
   0x00800000 - 1);
 if (VAR_11 < 0)
  return VAR_11;


 VAR_11 = FUNC_3(VAR_4, VAR_5, VAR_6,
   VAR_9 ?
   "DVC Out Mute Switch" : "DVC In Mute Switch",
   VAR_2,
   VAR_1,
   &VAR_7->mute, VAR_10,
   1);
 if (VAR_11 < 0)
  return VAR_11;


 VAR_11 = FUNC_4(VAR_4, VAR_5, VAR_6,
   VAR_9 ?
   "DVC Out Ramp Switch" : "DVC In Ramp Switch",
   VAR_2,
   VAR_1,
   &VAR_7->ren, 1);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_2(VAR_4, VAR_5, VAR_6,
   VAR_9 ?
   "DVC Out Ramp Up Rate" : "DVC In Ramp Up Rate",
   VAR_2,
   VAR_1,
   &VAR_7->rup,
   VAR_3,
   VAR_0);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_2(VAR_4, VAR_5, VAR_6,
   VAR_9 ?
   "DVC Out Ramp Down Rate" : "DVC In Ramp Down Rate",
   VAR_2,
   VAR_1,
   &VAR_7->rdown,
   VAR_3,
   VAR_0);

 if (VAR_11 < 0)
  return VAR_11;

 return 0;
}
