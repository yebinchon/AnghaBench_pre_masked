
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int dummy; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;
struct rsnd_ctu {int reset; int * sv; int pass; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct rsnd_ctu*,int ) ;
 int FUNC_1 (struct rsnd_ctu*,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct rsnd_mod*,struct rsnd_dai_stream*,struct snd_soc_pcm_runtime*,char*,int ,int *,int *,int ,int) ;
 int FUNC_3 (struct rsnd_mod*,struct rsnd_dai_stream*,struct snd_soc_pcm_runtime*,char*,int ,int ,int *,int) ;
 struct rsnd_ctu* FUNC_4 (struct rsnd_mod*) ;

__attribute__((used)) static int FUNC_5(struct rsnd_mod *VAR_4,
       struct rsnd_dai_stream *VAR_5,
       struct snd_soc_pcm_runtime *VAR_6)
{
 struct rsnd_ctu *VAR_7 = FUNC_4(VAR_4);
 int VAR_8;

 if (FUNC_0(VAR_7, VAR_0))
  return 0;


 VAR_8 = FUNC_2(VAR_4, VAR_5, VAR_6, "CTU Pass",
          VAR_3,
          ((void*)0),
          &VAR_7->pass, VAR_1,
          0xC);


 VAR_8 = FUNC_2(VAR_4, VAR_5, VAR_6, "CTU SV0",
          VAR_3,
          ((void*)0),
          &VAR_7->sv[0], VAR_1,
          0x00FFFFFF);
 if (VAR_8 < 0)
  return VAR_8;


 VAR_8 = FUNC_2(VAR_4, VAR_5, VAR_6, "CTU SV1",
          VAR_3,
          ((void*)0),
          &VAR_7->sv[1], VAR_1,
          0x00FFFFFF);
 if (VAR_8 < 0)
  return VAR_8;


 VAR_8 = FUNC_2(VAR_4, VAR_5, VAR_6, "CTU SV2",
          VAR_3,
          ((void*)0),
          &VAR_7->sv[2], VAR_1,
          0x00FFFFFF);
 if (VAR_8 < 0)
  return VAR_8;


 VAR_8 = FUNC_2(VAR_4, VAR_5, VAR_6, "CTU SV3",
          VAR_3,
          ((void*)0),
          &VAR_7->sv[3], VAR_1,
          0x00FFFFFF);
 if (VAR_8 < 0)
  return VAR_8;


 VAR_8 = FUNC_3(VAR_4, VAR_5, VAR_6, "CTU Reset",
          VAR_3,
          VAR_2,
          &VAR_7->reset, 1);

 FUNC_1(VAR_7, VAR_0);

 return VAR_8;
}
