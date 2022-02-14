
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_2__* pcm; } ;
struct snd_pcm_substream {struct snd_pcm_substream* next; } ;
struct rsnd_priv {int dummy; } ;
struct rsnd_dai_stream {struct device* dmac_dev; } ;
struct device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* streams; } ;
struct TYPE_3__ {struct snd_pcm_substream* substream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct rsnd_priv* FUNC_0 (struct rsnd_dai_stream*) ;
 struct device* FUNC_1 (struct rsnd_priv*) ;
 int FUNC_2 (struct snd_pcm_substream*,int ,struct device*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_pcm_runtime *VAR_3,
      struct rsnd_dai_stream *VAR_4,
      int VAR_5)
{
 struct rsnd_priv *VAR_6 = FUNC_0(VAR_4);
 struct device *VAR_7 = FUNC_1(VAR_6);
 struct snd_pcm_substream *VAR_8;






 if (VAR_4->dmac_dev)
  VAR_7 = VAR_4->dmac_dev;

 for (VAR_8 = VAR_3->pcm->streams[VAR_5].substream;
      VAR_8;
      VAR_8 = VAR_8->next) {
  FUNC_2(VAR_8,
           VAR_2,
           VAR_7,
           VAR_0, VAR_1);
 }

 return 0;
}
