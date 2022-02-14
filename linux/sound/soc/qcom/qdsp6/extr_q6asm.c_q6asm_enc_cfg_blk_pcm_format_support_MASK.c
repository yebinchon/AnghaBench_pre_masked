
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint32_t ;
typedef int uint16_t ;
typedef int u8 ;
typedef int u32 ;
struct audio_client {int stream_id; } ;
struct TYPE_5__ {int param_size; int param_id; } ;
struct TYPE_4__ {int enc_cfg_blk_size; int frames_per_buf; } ;
struct asm_multi_channel_pcm_enc_cfg_v2 {int is_signed; int * channel_mapping; void* sample_rate; int bits_per_sample; void* num_channels; TYPE_2__ encdec; TYPE_1__ encblk; } ;
struct asm_enc_cfg_blk_param_v2 {int dummy; } ;
struct TYPE_6__ {int opcode; } ;
struct apr_pkt {TYPE_3__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct apr_pkt*) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (struct audio_client*,struct apr_pkt*) ;
 int FUNC_3 (struct audio_client*,TYPE_3__*,int,int,int ) ;
 scalar_t__ FUNC_4 (int *,void*) ;

int FUNC_5(struct audio_client *VAR_6,
  uint32_t VAR_7, uint32_t VAR_8, uint16_t VAR_9)
{
 struct asm_multi_channel_pcm_enc_cfg_v2 *VAR_10;
 struct apr_pkt *VAR_11;
 u8 *VAR_12;
 u32 VAR_13 = 0;
 int VAR_14, VAR_15;
 void *VAR_16;

 VAR_14 = VAR_0 + sizeof(*VAR_10);
 VAR_16 = FUNC_1(VAR_14, VAR_5);
 if (!VAR_16)
  return -VAR_4;

 VAR_11 = VAR_16;
 VAR_10 = VAR_16 + VAR_0;
 FUNC_3(VAR_6, &VAR_11->hdr, VAR_14, 1, VAR_6->stream_id);

 VAR_11->hdr.opcode = VAR_2;
 VAR_10->encdec.param_id = VAR_1;
 VAR_10->encdec.param_size = sizeof(*VAR_10) - sizeof(VAR_10->encdec);
 VAR_10->encblk.frames_per_buf = VAR_13;
 VAR_10->encblk.enc_cfg_blk_size = VAR_10->encdec.param_size -
     sizeof(struct asm_enc_cfg_blk_param_v2);

 VAR_10->num_channels = VAR_8;
 VAR_10->bits_per_sample = VAR_9;
 VAR_10->sample_rate = VAR_7;
 VAR_10->is_signed = 1;
 VAR_12 = VAR_10->channel_mapping;

 if (FUNC_4(VAR_12, VAR_8)) {
  VAR_15 = -VAR_3;
  goto err;
 }

 VAR_15 = FUNC_2(VAR_6, VAR_11);
err:
 FUNC_0(VAR_11);
 return VAR_15;
}
