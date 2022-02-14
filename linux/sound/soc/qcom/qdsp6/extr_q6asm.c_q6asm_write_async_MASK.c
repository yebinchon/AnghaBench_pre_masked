
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct audio_port_data {size_t dsp_buf; size_t num_periods; int mem_map_handle; struct audio_buffer* buf; } ;
struct audio_client {int adev; int lock; struct audio_port_data* port; int stream_id; } ;
struct audio_buffer {int phys; } ;
struct asm_data_cmd_write_v2 {int buf_size; size_t seq_id; int timestamp_lsw; int timestamp_msw; int flags; int mem_map_handle; int buf_addr_msw; int buf_addr_lsw; } ;
struct TYPE_2__ {size_t token; int opcode; } ;
struct apr_pkt {TYPE_1__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int ,struct apr_pkt*) ;
 int FUNC_1 (struct apr_pkt*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct audio_client*,TYPE_1__*,int,int,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ) ;

int FUNC_8(struct audio_client *VAR_6, uint32_t VAR_7, uint32_t VAR_8,
         uint32_t VAR_9, uint32_t VAR_10)
{
 struct asm_data_cmd_write_v2 *VAR_11;
 struct audio_port_data *VAR_12;
 struct audio_buffer *VAR_13;
 unsigned long VAR_14;
 struct apr_pkt *VAR_15;
 int VAR_16;
 int VAR_17 = 0;
 void *VAR_18;

 VAR_16 = VAR_0 + sizeof(*VAR_11);
 VAR_18 = FUNC_2(VAR_16, VAR_3);
 if (!VAR_18)
  return -VAR_2;

 VAR_15 = VAR_18;
 VAR_11 = VAR_18 + VAR_0;

 FUNC_5(&VAR_6->lock, VAR_14);
 VAR_12 = &VAR_6->port[VAR_5];
 FUNC_4(VAR_6, &VAR_15->hdr, VAR_16, 0, VAR_6->stream_id);

 VAR_13 = &VAR_12->buf[VAR_12->dsp_buf];
 VAR_15->hdr.token = VAR_12->dsp_buf;
 VAR_15->hdr.opcode = VAR_1;
 VAR_11->buf_addr_lsw = FUNC_3(VAR_13->phys);
 VAR_11->buf_addr_msw = FUNC_7(VAR_13->phys);
 VAR_11->buf_size = VAR_7;
 VAR_11->seq_id = VAR_12->dsp_buf;
 VAR_11->timestamp_lsw = VAR_9;
 VAR_11->timestamp_msw = VAR_8;
 VAR_11->mem_map_handle =
     VAR_6->port[VAR_5].mem_map_handle;

 if (VAR_10 == VAR_4)
  VAR_11->flags = (VAR_10 & 0x800000FF);
 else
  VAR_11->flags = (0x80000000 | VAR_10);

 VAR_12->dsp_buf++;

 if (VAR_12->dsp_buf >= VAR_12->num_periods)
  VAR_12->dsp_buf = 0;

 FUNC_6(&VAR_6->lock, VAR_14);
 VAR_17 = FUNC_0(VAR_6->adev, VAR_15);
 if (VAR_17 == VAR_16)
  VAR_17 = 0;

 FUNC_1(VAR_15);
 return VAR_17;
}
