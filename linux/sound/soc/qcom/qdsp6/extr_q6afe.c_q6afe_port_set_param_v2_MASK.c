
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct q6afe_port {int token; int id; struct q6afe* afe; } ;
struct q6afe {int dev; } ;
struct TYPE_2__ {int pkt_size; int opcode; int token; scalar_t__ dest_port; scalar_t__ src_port; int hdr_field; } ;
struct apr_pkt {TYPE_1__ hdr; } ;
struct afe_port_param_data_v2 {int module_id; int param_id; int param_size; } ;
struct afe_port_cmd_set_param_v2 {int payload_size; int payload_address_lsw; int payload_address_msw; int mem_map_handle; int port_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct q6afe*,struct apr_pkt*,struct q6afe_port*) ;
 int FUNC_3 (int ,char*,int ,int) ;
 int FUNC_4 (struct apr_pkt*) ;
 void* FUNC_5 (int,int ) ;
 int FUNC_6 (void*,void*,int) ;

__attribute__((used)) static int FUNC_7(struct q6afe_port *VAR_6, void *VAR_7,
       int VAR_8, int VAR_9, int VAR_10)
{
 struct afe_port_cmd_set_param_v2 *VAR_11;
 struct afe_port_param_data_v2 *VAR_12;
 struct q6afe *VAR_13 = VAR_6->afe;
 struct apr_pkt *VAR_14;
 u16 VAR_15 = VAR_6->id;
 int VAR_16, VAR_17;
 void *VAR_18, *VAR_19;

 VAR_17 = VAR_1 + sizeof(*VAR_11) + sizeof(*VAR_12) + VAR_10;
 VAR_18 = FUNC_5(VAR_17, VAR_5);
 if (!VAR_18)
  return -VAR_4;

 VAR_14 = VAR_18;
 VAR_11 = VAR_18 + VAR_1;
 VAR_12 = VAR_18 + VAR_1 + sizeof(*VAR_11);
 VAR_19 = VAR_18 + VAR_1 + sizeof(*VAR_11) + sizeof(*VAR_12);
 FUNC_6(VAR_19, VAR_7, VAR_10);

 VAR_14->hdr.hdr_field = FUNC_0(VAR_2,
        FUNC_1(VAR_1),
        VAR_3);
 VAR_14->hdr.pkt_size = VAR_17;
 VAR_14->hdr.src_port = 0;
 VAR_14->hdr.dest_port = 0;
 VAR_14->hdr.token = VAR_6->token;
 VAR_14->hdr.opcode = VAR_0;

 VAR_11->port_id = VAR_15;
 VAR_11->payload_size = sizeof(*VAR_12) + VAR_10;
 VAR_11->payload_address_lsw = 0x00;
 VAR_11->payload_address_msw = 0x00;
 VAR_11->mem_map_handle = 0x00;
 VAR_12->module_id = VAR_9;
 VAR_12->param_id = VAR_8;
 VAR_12->param_size = VAR_10;

 VAR_16 = FUNC_2(VAR_13, VAR_14, VAR_6);
 if (VAR_16)
  FUNC_3(VAR_13->dev, "AFE enable for port 0x%x failed %d\n",
         VAR_15, VAR_16);

 FUNC_4(VAR_14);
 return VAR_16;
}
