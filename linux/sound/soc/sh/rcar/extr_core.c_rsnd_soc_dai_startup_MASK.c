
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dummy; } ;
struct snd_pcm_hw_constraint_list {unsigned int* list; int count; scalar_t__ mask; } ;
struct rsnd_dai_stream {int dummy; } ;
struct rsnd_dai {int capture; int playback; struct snd_pcm_hw_constraint_list constraint; } ;


 int FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct rsnd_dai_stream*,struct snd_pcm_substream*) ;
 struct rsnd_dai* FUNC_2 (struct snd_soc_dai*) ;
 int VAR_4 ;
 unsigned int FUNC_3 (struct rsnd_dai*) ;
 scalar_t__ FUNC_4 (struct rsnd_dai*) ;
 struct rsnd_dai_stream* FUNC_5 (struct rsnd_dai*,struct snd_pcm_substream*) ;
 unsigned int* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (struct snd_pcm_runtime*,int ) ;
 int FUNC_7 (struct snd_pcm_runtime*,int ,int ,struct snd_pcm_hw_constraint_list*) ;
 int FUNC_8 (struct snd_pcm_runtime*,int ,int ,int ,int *,int ,int) ;
 int FUNC_9 (struct snd_pcm_substream*,int *) ;

__attribute__((used)) static int FUNC_10(struct snd_pcm_substream *VAR_8,
    struct snd_soc_dai *VAR_9)
{
 struct rsnd_dai *VAR_10 = FUNC_2(VAR_9);
 struct rsnd_dai_stream *VAR_11 = FUNC_5(VAR_10, VAR_8);
 struct snd_pcm_hw_constraint_list *VAR_12 = &VAR_10->constraint;
 struct snd_pcm_runtime *VAR_13 = VAR_8->runtime;
 unsigned int VAR_14 = FUNC_3(VAR_10);
 int VAR_15;

 FUNC_1(VAR_11, VAR_8);





 VAR_12->list = VAR_5;
 VAR_12->count = 0;
 VAR_12->mask = 0;

 for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_5); VAR_15++) {
  if (VAR_5[VAR_15] > VAR_14)
   break;
  VAR_12->count = VAR_15 + 1;
 }

 FUNC_9(VAR_8, &VAR_4);

 FUNC_7(VAR_13, 0,
       VAR_0, VAR_12);

 FUNC_6(VAR_13,
          VAR_1);





 if (FUNC_4(VAR_10)) {
  int VAR_16 = VAR_8->stream == VAR_3;

  FUNC_8(VAR_13, 0, VAR_2,
        VAR_7,
        VAR_16 ? &VAR_10->playback : &VAR_10->capture,
        VAR_0, -1);
  FUNC_8(VAR_13, 0, VAR_0,
        VAR_6,
        VAR_16 ? &VAR_10->playback : &VAR_10->capture,
        VAR_2, -1);
 }

 return 0;
}
