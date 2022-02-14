
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int dummy; } ;
struct rsnd_src {int sync; int sen; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;


 scalar_t__ FUNC_0 (struct rsnd_dai_stream*) ;
 scalar_t__ FUNC_1 (struct rsnd_dai_stream*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct rsnd_mod*,struct rsnd_dai_stream*,struct snd_soc_pcm_runtime*,char*,int ,int ,int *,int) ;
 struct rsnd_src* FUNC_3 (struct rsnd_mod*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct rsnd_mod *VAR_3,
       struct rsnd_dai_stream *VAR_4,
       struct snd_soc_pcm_runtime *VAR_5)
{
 struct rsnd_src *VAR_6 = FUNC_3(VAR_3);
 int VAR_7;
 if (FUNC_1(VAR_4) && !FUNC_0(VAR_4))
  return 0;




 VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_5,
          FUNC_0(VAR_4) ?
          "SRC Out Rate Switch" :
          "SRC In Rate Switch",
          VAR_0,
          VAR_2,
          &VAR_6->sen, 1);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_5,
          FUNC_0(VAR_4) ?
          "SRC Out Rate" :
          "SRC In Rate",
          VAR_1,
          VAR_2,
          &VAR_6->sync, 192000);

 return VAR_7;
}
