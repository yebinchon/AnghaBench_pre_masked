
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct snd_pcm_runtime {unsigned int rate; } ;
struct rsnd_priv {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;


 int FUNC_0 (struct rsnd_priv*,struct rsnd_dai_stream*,unsigned int,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_1 (struct rsnd_dai_stream*) ;
 struct snd_pcm_runtime* FUNC_2 (struct rsnd_dai_stream*) ;

__attribute__((used)) static void FUNC_3(struct rsnd_priv *VAR_0,
           struct rsnd_dai_stream *VAR_1,
           unsigned int VAR_2,
           unsigned int VAR_3,
           u32 *VAR_4, u32 *VAR_5, u32 *VAR_6)
{
 struct snd_pcm_runtime *VAR_7 = FUNC_2(VAR_1);
 unsigned int VAR_8;
 u32 *VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 u32 VAR_12;


 VAR_10 =
 VAR_11 = FUNC_1(VAR_1);

 VAR_8 = 0;
 VAR_9 = ((void*)0);
 VAR_12 = 0;
 if (VAR_7->rate != VAR_2) {
  VAR_8 = VAR_3;
  VAR_9 = &VAR_11;
 } else if (VAR_7->rate != VAR_3) {
  VAR_8 = VAR_2;
  VAR_9 = &VAR_10;
 }

 if (VAR_8)
  FUNC_0(VAR_0, VAR_1,
          VAR_8,
          VAR_9, &VAR_12);

 if (VAR_4)
  *VAR_4 = VAR_10;
 if (VAR_5)
  *VAR_5 = VAR_11;
 if (VAR_6)
  *VAR_6 = VAR_12;
}
