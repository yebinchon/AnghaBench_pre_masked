
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_substream {scalar_t__ stream; int number; TYPE_2__* runtime; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_mixart {int chip_idx; TYPE_3__* card; struct mixart_mgr* mgr; } ;
struct mixart_stream {int pcm_number; int channels; } ;
struct TYPE_4__ {scalar_t__ area; } ;
struct mixart_mgr {int setup_mutex; TYPE_1__ bufferinfo; } ;
struct mixart_bufferinfo {int available_length; int buffer_address; } ;
typedef int snd_pcm_format_t ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int dma_bytes; int dma_addr; struct mixart_stream* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*,int,int ,int ,int ) ;
 int FUNC_1 (struct mixart_stream*,int ) ;
 int FUNC_2 (struct snd_mixart*,int) ;
 int FUNC_3 (struct snd_mixart*,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct snd_pcm_hw_params*) ;
 int FUNC_7 (struct snd_pcm_hw_params*) ;
 int FUNC_8 (struct snd_pcm_hw_params*) ;
 int FUNC_9 (struct snd_pcm_substream*,int ) ;
 struct snd_mixart* FUNC_10 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_11(struct snd_pcm_substream *VAR_7,
                                struct snd_pcm_hw_params *VAR_8)
{
 struct snd_mixart *VAR_9 = FUNC_10(VAR_7);
 struct mixart_mgr *VAR_10 = VAR_9->mgr;
 struct mixart_stream *VAR_11 = VAR_7->runtime->private_data;
 snd_pcm_format_t VAR_12;
 int VAR_13;
 int VAR_14;


 VAR_14 = FUNC_7(VAR_8);


 VAR_12 = FUNC_8(VAR_8);

 FUNC_4(&VAR_10->setup_mutex);


 if( VAR_11->pcm_number <= VAR_3 ) {
  int VAR_15 = VAR_11->pcm_number > VAR_2;
  if( VAR_7->stream == VAR_6 )
   FUNC_3(VAR_9, VAR_15, VAR_7->number);
  else
   FUNC_2( VAR_9, VAR_15);
 }

 VAR_11->channels = VAR_14;


 VAR_13 = FUNC_1(VAR_11, VAR_12);
 if(VAR_13 < 0) {
  FUNC_5(&VAR_10->setup_mutex);
  return VAR_13;
 }


 VAR_13 = FUNC_9(VAR_7, FUNC_6(VAR_8));

 if (VAR_13 > 0) {
  struct mixart_bufferinfo *VAR_16;
  int VAR_17 = (VAR_9->chip_idx * VAR_1) + (VAR_11->pcm_number * (VAR_4+VAR_0)) + VAR_7->number;
  if( VAR_7->stream == VAR_5 ) {
   VAR_17 += VAR_4;
  }

  VAR_16 = (struct mixart_bufferinfo *)VAR_9->mgr->bufferinfo.area;
  VAR_16[VAR_17].buffer_address = VAR_7->runtime->dma_addr;
  VAR_16[VAR_17].available_length = VAR_7->runtime->dma_bytes;


  FUNC_0(VAR_9->card->dev,
   "snd_mixart_hw_params(pcm %d) : dma_addr(%x) dma_bytes(%x) subs-number(%d)\n",
   VAR_17, VAR_16[VAR_17].buffer_address,
    VAR_16[VAR_17].available_length,
    VAR_7->number);
 }
 FUNC_5(&VAR_10->setup_mutex);

 return VAR_13;
}
