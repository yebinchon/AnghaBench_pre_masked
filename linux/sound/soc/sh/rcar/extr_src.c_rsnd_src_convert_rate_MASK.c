
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct snd_pcm_runtime {scalar_t__ rate; } ;
struct TYPE_2__ {scalar_t__ val; } ;
struct rsnd_src {TYPE_1__ sync; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;


 scalar_t__ FUNC_0 (struct rsnd_dai_stream*) ;
 struct snd_pcm_runtime* FUNC_1 (struct rsnd_dai_stream*) ;
 struct rsnd_src* FUNC_2 (struct rsnd_mod*) ;
 int FUNC_3 (struct rsnd_mod*) ;

__attribute__((used)) static u32 FUNC_4(struct rsnd_dai_stream *VAR_0,
     struct rsnd_mod *VAR_1)
{
 struct snd_pcm_runtime *VAR_2 = FUNC_1(VAR_0);
 struct rsnd_src *VAR_3 = FUNC_2(VAR_1);
 u32 VAR_4;

 if (!VAR_2)
  return 0;

 if (!FUNC_3(VAR_1))
  return FUNC_0(VAR_0);

 VAR_4 = VAR_3->sync.val;

 if (!VAR_4)
  VAR_4 = FUNC_0(VAR_0);

 if (!VAR_4)
  VAR_4 = VAR_2->rate;

 return VAR_4;
}
