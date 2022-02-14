
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint32_t ;
typedef int uint16_t ;
typedef int u8 ;
struct audio_client {int dev; int stream_id; } ;
struct TYPE_3__ {int fmt_blk_size; } ;
struct asm_multi_channel_pcm_fmt_blk_v2 {int is_signed; int * channel_mapping; void* sample_rate; int bits_per_sample; void* num_channels; TYPE_1__ fmt_blk; } ;
struct TYPE_4__ {int opcode; } ;
struct apr_pkt {TYPE_2__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,void*) ;
 int FUNC_1 (struct apr_pkt*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (struct audio_client*,struct apr_pkt*) ;
 int FUNC_5 (struct audio_client*,TYPE_2__*,int,int,int ) ;
 scalar_t__ FUNC_6 (int *,void*) ;

int FUNC_7(struct audio_client *VAR_6,
       uint32_t VAR_7, uint32_t VAR_8,
       u8 VAR_9[VAR_5],
       uint16_t VAR_10)
{
 struct asm_multi_channel_pcm_fmt_blk_v2 *VAR_11;
 struct apr_pkt *VAR_12;
 u8 *VAR_13;
 void *VAR_14;
 int VAR_15, VAR_16;

 VAR_16 = VAR_0 + sizeof(*VAR_11);
 VAR_14 = FUNC_2(VAR_16, VAR_4);
 if (!VAR_14)
  return -VAR_3;

 VAR_12 = VAR_14;
 VAR_11 = VAR_14 + VAR_0;

 FUNC_5(VAR_6, &VAR_12->hdr, VAR_16, 1, VAR_6->stream_id);

 VAR_12->hdr.opcode = VAR_1;
 VAR_11->fmt_blk.fmt_blk_size = sizeof(*VAR_11) - sizeof(VAR_11->fmt_blk);
 VAR_11->num_channels = VAR_8;
 VAR_11->bits_per_sample = VAR_10;
 VAR_11->sample_rate = VAR_7;
 VAR_11->is_signed = 1;

 VAR_13 = VAR_11->channel_mapping;

 if (VAR_9) {
  FUNC_3(VAR_13, VAR_9, VAR_5);
 } else {
  if (FUNC_6(VAR_13, VAR_8)) {
   FUNC_0(VAR_6->dev, " map channels failed %d\n", VAR_8);
   VAR_15 = -VAR_2;
   goto err;
  }
 }

 VAR_15 = FUNC_4(VAR_6, VAR_12);

err:
 FUNC_1(VAR_12);
 return VAR_15;
}
