
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct rsnd_priv {int lock; } ;
struct rsnd_dai_stream {int dummy; } ;
struct rsnd_dai {int dummy; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct rsnd_dai_stream*,struct rsnd_priv*,...) ;
 struct rsnd_priv* FUNC_1 (struct snd_soc_dai*) ;
 struct rsnd_dai* FUNC_2 (struct snd_soc_dai*) ;
 struct rsnd_dai_stream* FUNC_3 (struct rsnd_dai*,struct snd_pcm_substream*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_6, int VAR_7,
       struct snd_soc_dai *VAR_8)
{
 struct rsnd_priv *VAR_9 = FUNC_1(VAR_8);
 struct rsnd_dai *VAR_10 = FUNC_2(VAR_8);
 struct rsnd_dai_stream *VAR_11 = FUNC_3(VAR_10, VAR_6);
 int VAR_12;
 unsigned long VAR_13;

 FUNC_4(&VAR_9->lock, VAR_13);

 switch (VAR_7) {
 case 130:
 case 131:
  VAR_12 = FUNC_0(VAR_1, VAR_11, VAR_9);
  if (VAR_12 < 0)
   goto dai_trigger_end;

  VAR_12 = FUNC_0(VAR_4, VAR_11, VAR_9);
  if (VAR_12 < 0)
   goto dai_trigger_end;

  VAR_12 = FUNC_0(VAR_2, VAR_11, VAR_9, 1);
  if (VAR_12 < 0)
   goto dai_trigger_end;

  break;
 case 129:
 case 128:
  VAR_12 = FUNC_0(VAR_2, VAR_11, VAR_9, 0);

  VAR_12 |= FUNC_0(VAR_5, VAR_11, VAR_9);

  VAR_12 |= FUNC_0(VAR_3, VAR_11, VAR_9);

  break;
 default:
  VAR_12 = -VAR_0;
 }

dai_trigger_end:
 FUNC_5(&VAR_9->lock, VAR_13);

 return VAR_12;
}
