
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct q6asm {int dummy; } ;
struct avs_cmd_shared_mem_unmap_regions {scalar_t__ mem_map_handle; } ;
struct audio_client {int session; TYPE_2__* port; TYPE_3__* dev; } ;
struct TYPE_4__ {int pkt_size; int token; int opcode; scalar_t__ dest_port; scalar_t__ src_port; int hdr_field; } ;
struct apr_pkt {TYPE_1__ hdr; } ;
typedef int phys_addr_t ;
struct TYPE_6__ {int parent; } ;
struct TYPE_5__ {scalar_t__ mem_map_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*,char*) ;
 struct q6asm* FUNC_1 (int ) ;
 int FUNC_2 (struct apr_pkt*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (struct q6asm*,struct audio_client*,struct apr_pkt*,int ) ;

__attribute__((used)) static int FUNC_5(struct audio_client *VAR_6,
    phys_addr_t VAR_7, int VAR_8)
{
 struct avs_cmd_shared_mem_unmap_regions *VAR_9;
 struct q6asm *VAR_10 = FUNC_1(VAR_6->dev->parent);
 struct apr_pkt *VAR_11;
 int VAR_12, VAR_13;
 void *VAR_14;

 if (VAR_6->port[VAR_8].mem_map_handle == 0) {
  FUNC_0(VAR_6->dev, "invalid mem handle\n");
  return -VAR_3;
 }

 VAR_13 = VAR_0 + sizeof(*VAR_9);
 VAR_14 = FUNC_3(VAR_13, VAR_5);
 if (!VAR_14)
  return -VAR_4;

 VAR_11 = VAR_14;
 VAR_9 = VAR_14 + VAR_0;

 VAR_11->hdr.hdr_field = VAR_1;
 VAR_11->hdr.src_port = 0;
 VAR_11->hdr.dest_port = 0;
 VAR_11->hdr.pkt_size = VAR_13;
 VAR_11->hdr.token = ((VAR_6->session << 8) | VAR_8);

 VAR_11->hdr.opcode = VAR_2;
 VAR_9->mem_map_handle = VAR_6->port[VAR_8].mem_map_handle;

 VAR_12 = FUNC_4(VAR_10, VAR_6, VAR_11, 0);
 if (VAR_12 < 0) {
  FUNC_2(VAR_11);
  return VAR_12;
 }

 VAR_6->port[VAR_8].mem_map_handle = 0;

 FUNC_2(VAR_11);
 return 0;
}
