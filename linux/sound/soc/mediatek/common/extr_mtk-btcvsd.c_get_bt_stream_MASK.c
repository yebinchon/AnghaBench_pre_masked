
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {scalar_t__ stream; } ;
struct mtk_btcvsd_snd_stream {int dummy; } ;
struct mtk_btcvsd_snd {struct mtk_btcvsd_snd_stream* rx; struct mtk_btcvsd_snd_stream* tx; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static struct mtk_btcvsd_snd_stream *FUNC_0
 (struct mtk_btcvsd_snd *VAR_1, struct snd_pcm_substream *VAR_2)
{
 if (VAR_2->stream == VAR_0)
  return VAR_1->tx;
 else
  return VAR_1->rx;
}
