
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; TYPE_1__* runtime; struct snd_soc_pcm_runtime* private_data; } ;
struct mtk_btcvsd_snd_stream {int packet_r; int packet_w; int prev_packet_idx; int packet_size; int prev_frame; } ;
struct mtk_btcvsd_snd {struct mtk_btcvsd_snd_stream* rx; struct mtk_btcvsd_snd_stream* tx; int rx_lock; int tx_lock; } ;
typedef int spinlock_t ;
typedef int snd_pcm_uframes_t ;
struct TYPE_2__ {int buffer_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct snd_pcm_substream*,int) ;
 struct mtk_btcvsd_snd* FUNC_1 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_2 (struct snd_soc_pcm_runtime*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_5
 (struct snd_pcm_substream *VAR_4)
{
 struct snd_soc_pcm_runtime *VAR_5 = VAR_4->private_data;
 struct snd_soc_component *VAR_6 =
  FUNC_2(VAR_5, VAR_0);
 struct mtk_btcvsd_snd *VAR_7 = FUNC_1(VAR_6);
 struct mtk_btcvsd_snd_stream *VAR_8;
 snd_pcm_uframes_t VAR_9 = 0;
 int VAR_10 = 0;
 int VAR_11;
 int VAR_12;
 spinlock_t *VAR_13;
 unsigned long VAR_14;

 if (VAR_4->stream == VAR_3) {
  VAR_13 = &VAR_7->tx_lock;
  VAR_8 = VAR_7->tx;
 } else {
  VAR_13 = &VAR_7->rx_lock;
  VAR_8 = VAR_7->rx;
 }

 FUNC_3(VAR_13, VAR_14);
 VAR_11 = VAR_4->stream == VAR_3 ?
   VAR_7->tx->packet_r : VAR_7->rx->packet_w;


 if (VAR_11 >= VAR_8->prev_packet_idx) {
  VAR_12 = VAR_11 - VAR_8->prev_packet_idx;
 } else {

  VAR_12 = (VAR_1 - VAR_8->prev_packet_idx) +
         (VAR_11 - VAR_2) + 1;
 }
 VAR_8->prev_packet_idx = VAR_11;


 VAR_10 = VAR_12 * VAR_8->packet_size;

 VAR_9 = FUNC_0(VAR_4, VAR_10);
 VAR_9 += VAR_8->prev_frame;
 VAR_9 %= VAR_4->runtime->buffer_size;

 VAR_8->prev_frame = VAR_9;

 FUNC_4(VAR_13, VAR_14);

 return VAR_9;
}
