
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_pcm_runtime {int periods; int format; scalar_t__ dma_area; } ;
struct rsnd_ssi {int byte_pos; int next_period_byte; int byte_per_period; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (struct rsnd_dai_stream*) ;
 struct snd_pcm_runtime* FUNC_2 (struct rsnd_dai_stream*) ;
 int FUNC_3 (struct rsnd_mod*,int ) ;
 struct rsnd_ssi* FUNC_4 (struct rsnd_mod*) ;
 int FUNC_5 (struct rsnd_mod*,int ,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static bool FUNC_7(struct rsnd_mod *VAR_2,
       struct rsnd_dai_stream *VAR_3)
{
 struct snd_pcm_runtime *VAR_4 = FUNC_2(VAR_3);
 struct rsnd_ssi *VAR_5 = FUNC_4(VAR_2);
 u32 *VAR_6 = (u32 *)(VAR_4->dma_area + VAR_5->byte_pos);
 int VAR_7 = 0;
 int VAR_8;
 bool VAR_9 = 0;

 if (FUNC_6(VAR_4->format) == 24)
  VAR_7 = 8;






 if (FUNC_1(VAR_3))
  FUNC_5(VAR_2, VAR_1, (*VAR_6) << VAR_7);
 else
  *VAR_6 = (FUNC_3(VAR_2, VAR_0) >> VAR_7);

 VAR_8 = VAR_5->byte_pos + sizeof(*VAR_6);

 if (VAR_8 >= VAR_5->next_period_byte) {
  int VAR_10 = VAR_8 / VAR_5->byte_per_period;

  if (VAR_10 >= VAR_4->periods) {
   VAR_8 = 0;
   VAR_10 = 0;
  }

  VAR_5->next_period_byte = (VAR_10 + 1) * VAR_5->byte_per_period;

  VAR_9 = 1;
 }

 FUNC_0(VAR_5->byte_pos, VAR_8);

 return VAR_9;
}
