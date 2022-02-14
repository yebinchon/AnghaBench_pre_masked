
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int num_ch; int packet_mode; int left_align; int val_bit; int dp_modei; int set; int layout; } ;
union aud_cfg {int regval; TYPE_3__ regx; } ;
struct TYPE_4__ {scalar_t__ aud_delay; int dma_fifo_watermark; int audio_fifo_watermark; } ;
union aud_buf_config {int regval; TYPE_1__ regx; } ;
typedef int u8 ;
struct snd_pcm_substream {TYPE_2__* runtime; } ;
struct snd_intelhad {union aud_cfg aud_config; scalar_t__ dp_output; } ;
struct TYPE_5__ {int channels; scalar_t__ format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct snd_pcm_substream*,struct snd_intelhad*) ;
 int FUNC_1 (struct snd_intelhad*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_8,
          struct snd_intelhad *VAR_9)
{
 union aud_cfg VAR_10 = {.regval = 0};
 union aud_buf_config VAR_11 = {.regval = 0};
 u8 VAR_12;

 FUNC_0(VAR_8, VAR_9);

 VAR_11.regx.audio_fifo_watermark = VAR_3;
 VAR_11.regx.dma_fifo_watermark = VAR_2;
 VAR_11.regx.aud_delay = 0;
 FUNC_1(VAR_9, VAR_0, VAR_11.regval);

 VAR_12 = VAR_8->runtime->channels;
 VAR_10.regx.num_ch = VAR_12 - 2;
 if (VAR_12 <= 2)
  VAR_10.regx.layout = VAR_4;
 else
  VAR_10.regx.layout = VAR_5;

 if (VAR_8->runtime->format == VAR_6)
  VAR_10.regx.packet_mode = 1;

 if (VAR_8->runtime->format == VAR_7)
  VAR_10.regx.left_align = 1;

 VAR_10.regx.val_bit = 1;


 if (VAR_9->dp_output) {
  VAR_10.regx.dp_modei = 1;
  VAR_10.regx.set = 1;
 }

 FUNC_1(VAR_9, VAR_1, VAR_10.regval);
 VAR_9->aud_config = VAR_10;
 return 0;
}
