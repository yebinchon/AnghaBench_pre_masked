
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct audio_client {int stream_id; } ;
struct asm_stream_cmd_open_read_v3 {int mode_flags; int enc_cfg_id; int bits_per_sample; int preprocopo_id; int src_endpointype; } ;
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
 int FUNC_0 (struct apr_pkt*) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct audio_client*,struct apr_pkt*) ;
 int FUNC_4 (struct audio_client*,TYPE_1__*,int,int,int ) ;

__attribute__((used)) static int FUNC_5(struct audio_client *VAR_9,
  uint32_t VAR_10, uint16_t VAR_11)
{
 struct asm_stream_cmd_open_read_v3 *VAR_12;
 struct apr_pkt *VAR_13;
 int VAR_14, VAR_15;
 void *VAR_16;

 VAR_14 = VAR_0 + sizeof(*VAR_12);
 VAR_16 = FUNC_1(VAR_14, VAR_8);
 if (!VAR_16)
  return -VAR_7;

 VAR_13 = VAR_16;
 VAR_12 = VAR_16 + VAR_0;

 FUNC_4(VAR_9, &VAR_13->hdr, VAR_14, 1, VAR_9->stream_id);
 VAR_13->hdr.opcode = VAR_5;

 VAR_12->src_endpointype = VAR_1;

 VAR_12->preprocopo_id = VAR_6;
 VAR_12->bits_per_sample = VAR_11;
 VAR_12->mode_flags = 0x0;

 VAR_12->mode_flags |= VAR_2 <<
    VAR_4;

 switch (VAR_10) {
 case 128:
  VAR_12->mode_flags |= 0x00;
  VAR_12->enc_cfg_id = VAR_3;
  break;
 default:
  FUNC_2("Invalid format[%d]\n", VAR_10);
 }

 VAR_15 = FUNC_3(VAR_9, VAR_13);

 FUNC_0(VAR_13);
 return VAR_15;
}
