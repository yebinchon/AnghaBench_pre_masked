
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct audio_port_data {size_t dsp_buf; size_t num_periods; int mem_map_handle; struct audio_buffer* buf; } ;
struct audio_client {int adev; int lock; int stream_id; struct audio_port_data* port; } ;
struct audio_buffer {int size; int phys; } ;
struct asm_data_cmd_read_v2 {size_t seq_id; int buf_size; int mem_map_handle; int buf_addr_msw; int buf_addr_lsw; } ;
struct TYPE_2__ {size_t token; int opcode; } ;
struct apr_pkt {TYPE_1__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int ,struct apr_pkt*) ;
 int FUNC_1 (struct apr_pkt*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (struct audio_client*,TYPE_1__*,int,int,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int ) ;

int FUNC_9(struct audio_client *VAR_5)
{
 struct asm_data_cmd_read_v2 *VAR_6;
 struct audio_port_data *VAR_7;
 struct audio_buffer *VAR_8;
 struct apr_pkt *VAR_9;
 unsigned long VAR_10;
 int VAR_11;
 int VAR_12 = 0;
 void *VAR_13;

 VAR_11 = VAR_0 + sizeof(*VAR_6);
 VAR_13 = FUNC_2(VAR_11, VAR_3);
 if (!VAR_13)
  return -VAR_2;

 VAR_9 = VAR_13;
 VAR_6 = VAR_13 + VAR_0;

 FUNC_6(&VAR_5->lock, VAR_10);
 VAR_7 = &VAR_5->port[VAR_4];
 FUNC_5(VAR_5, &VAR_9->hdr, VAR_11, 0, VAR_5->stream_id);
 VAR_8 = &VAR_7->buf[VAR_7->dsp_buf];
 VAR_9->hdr.opcode = VAR_1;
 VAR_6->buf_addr_lsw = FUNC_3(VAR_8->phys);
 VAR_6->buf_addr_msw = FUNC_8(VAR_8->phys);
 VAR_6->mem_map_handle = VAR_7->mem_map_handle;

 VAR_6->buf_size = VAR_8->size;
 VAR_6->seq_id = VAR_7->dsp_buf;
 VAR_9->hdr.token = VAR_7->dsp_buf;

 VAR_7->dsp_buf++;

 if (VAR_7->dsp_buf >= VAR_7->num_periods)
  VAR_7->dsp_buf = 0;

 FUNC_7(&VAR_5->lock, VAR_10);
 VAR_12 = FUNC_0(VAR_5->adev, VAR_9);
 if (VAR_12 == VAR_11)
  VAR_12 = 0;
 else
  FUNC_4("read op[0x%x]rc[%d]\n", VAR_9->hdr.opcode, VAR_12);

 FUNC_1(VAR_9);
 return VAR_12;
}
