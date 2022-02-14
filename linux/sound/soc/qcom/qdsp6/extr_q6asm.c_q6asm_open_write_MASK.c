
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct audio_client {int io_mode; int dev; int stream_id; } ;
struct asm_stream_cmd_open_write_v3 {int mode_flags; int dec_fmt_id; int postprocopo_id; int bits_per_sample; int sink_endpointype; } ;
struct TYPE_2__ {int opcode; } ;
struct apr_pkt {TYPE_1__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

 int VAR_10 ;

 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct apr_pkt*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (struct audio_client*,struct apr_pkt*) ;
 int FUNC_4 (struct audio_client*,TYPE_1__*,int,int,int ) ;

int FUNC_5(struct audio_client *VAR_11, uint32_t VAR_12,
       uint16_t VAR_13)
{
 struct asm_stream_cmd_open_write_v3 *VAR_14;
 struct apr_pkt *VAR_15;
 void *VAR_16;
 int VAR_17, VAR_18;

 VAR_18 = VAR_0 + sizeof(*VAR_14);

 VAR_16 = FUNC_2(VAR_18, VAR_10);
 if (!VAR_16)
  return -VAR_9;

 VAR_15 = VAR_16;
 VAR_14 = VAR_16 + VAR_0;
 FUNC_4(VAR_11, &VAR_15->hdr, VAR_18, 1, VAR_11->stream_id);

 VAR_15->hdr.opcode = VAR_6;
 VAR_14->mode_flags = 0x00;
 VAR_14->mode_flags |= VAR_2;


 VAR_14->sink_endpointype = VAR_1;
 VAR_14->bits_per_sample = VAR_13;
 VAR_14->postprocopo_id = VAR_5;

 switch (VAR_12) {
 case 128:
  VAR_14->dec_fmt_id = VAR_3;
  break;
 case 129:
  VAR_14->dec_fmt_id = VAR_4;
  break;
 default:
  FUNC_0(VAR_11->dev, "Invalid format 0x%x\n", VAR_12);
  VAR_17 = -VAR_8;
  goto err;
 }

 VAR_17 = FUNC_3(VAR_11, VAR_15);
 if (VAR_17 < 0)
  goto err;

 VAR_11->io_mode |= VAR_7;

err:
 FUNC_1(VAR_15);
 return VAR_17;
}
