
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct q6asm {int dummy; } ;
struct avs_shared_map_region_payload {int mem_size_bytes; int shm_addr_msw; int shm_addr_lsw; } ;
struct avs_cmd_shared_mem_map_regions {int num_regions; int property_flag; int mem_pool_id; } ;
struct audio_port_data {struct audio_buffer* buf; } ;
struct audio_client {int session; int lock; struct audio_port_data* port; TYPE_1__* dev; } ;
struct audio_buffer {int phys; } ;
struct TYPE_4__ {int pkt_size; int token; int opcode; scalar_t__ dest_port; scalar_t__ src_port; int hdr_field; } ;
struct apr_pkt {TYPE_2__ hdr; } ;
struct TYPE_3__ {int parent; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct q6asm* FUNC_1 (int ) ;
 int FUNC_2 (struct apr_pkt*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct q6asm*,struct audio_client*,struct apr_pkt*,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct audio_client *VAR_7, int VAR_8,
          size_t VAR_9, unsigned int VAR_10,
          bool VAR_11)
{
 struct avs_cmd_shared_mem_map_regions *VAR_12 = ((void*)0);
 struct avs_shared_map_region_payload *VAR_13 = ((void*)0);
 struct q6asm *VAR_14 = FUNC_1(VAR_7->dev->parent);
 struct audio_port_data *VAR_15 = ((void*)0);
 struct audio_buffer *VAR_16 = ((void*)0);
 struct apr_pkt *VAR_17;
 void *VAR_18;
 unsigned long VAR_19;
 uint32_t VAR_20, VAR_21;
 int VAR_22, VAR_23, VAR_24;

 if (VAR_11) {
  VAR_20 = 1;
  VAR_21 = VAR_9 * VAR_10;
 } else {
  VAR_21 = VAR_9;
  VAR_20 = VAR_10;
 }


 VAR_21 = FUNC_0(VAR_21, 4096);

 VAR_24 = VAR_1 + sizeof(*VAR_12) +
     (sizeof(*VAR_13) * VAR_20);

 VAR_18 = FUNC_3(VAR_24, VAR_6);
 if (!VAR_18)
  return -VAR_5;

 VAR_17 = VAR_18;
 VAR_12 = VAR_18 + VAR_1;
 VAR_13 = VAR_18 + VAR_1 + sizeof(*VAR_12);

 VAR_17->hdr.hdr_field = VAR_2;
 VAR_17->hdr.src_port = 0;
 VAR_17->hdr.dest_port = 0;
 VAR_17->hdr.pkt_size = VAR_24;
 VAR_17->hdr.token = ((VAR_7->session << 8) | VAR_8);
 VAR_17->hdr.opcode = VAR_4;

 VAR_12->mem_pool_id = VAR_0;
 VAR_12->num_regions = VAR_20;
 VAR_12->property_flag = 0x00;

 FUNC_6(&VAR_7->lock, VAR_19);
 VAR_15 = &VAR_7->port[VAR_8];

 for (VAR_23 = 0; VAR_23 < VAR_20; VAR_23++) {
  VAR_16 = &VAR_15->buf[VAR_23];
  VAR_13->shm_addr_lsw = FUNC_4(VAR_16->phys);
  VAR_13->shm_addr_msw = FUNC_8(VAR_16->phys);
  VAR_13->mem_size_bytes = VAR_21;
  ++VAR_13;
 }
 FUNC_7(&VAR_7->lock, VAR_19);

 VAR_22 = FUNC_5(VAR_14, VAR_7, VAR_17,
     VAR_3);

 FUNC_2(VAR_17);

 return VAR_22;
}
