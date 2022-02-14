
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct q6afe_port {int id; int cfg_type; int token; int * scfg; int port_cfg; struct q6afe* afe; } ;
struct q6afe {int dev; } ;
struct TYPE_2__ {int pkt_size; int opcode; int token; scalar_t__ dest_port; scalar_t__ src_port; int hdr_field; } ;
struct apr_pkt {TYPE_1__ hdr; } ;
struct afe_port_cmd_device_start {int port_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct q6afe*,struct apr_pkt*,struct q6afe_port*) ;
 int FUNC_3 (int ,char*,int,int) ;
 int FUNC_4 (struct apr_pkt*) ;
 void* FUNC_5 (int,int ) ;
 int FUNC_6 (struct q6afe_port*,int *,int,int ,int) ;

int FUNC_7(struct q6afe_port *VAR_9)
{
 struct afe_port_cmd_device_start *VAR_10;
 struct q6afe *VAR_11 = VAR_9->afe;
 int VAR_12 = VAR_9->id;
 int VAR_13, VAR_14 = VAR_9->cfg_type;
 struct apr_pkt *VAR_15;
 int VAR_16;
 void *VAR_17;

 VAR_13 = FUNC_6(VAR_9, &VAR_9->port_cfg, VAR_14,
           VAR_0,
           sizeof(VAR_9->port_cfg));
 if (VAR_13) {
  FUNC_3(VAR_11->dev, "AFE enable for port 0x%x failed %d\n",
   VAR_12, VAR_13);
  return VAR_13;
 }

 if (VAR_9->scfg) {
  VAR_13 = FUNC_6(VAR_9, VAR_9->scfg,
     VAR_2,
     VAR_1, sizeof(*VAR_9->scfg));
  if (VAR_13) {
   FUNC_3(VAR_11->dev, "AFE enable for port 0x%x failed %d\n",
   VAR_12, VAR_13);
   return VAR_13;
  }
 }

 VAR_16 = VAR_4 + sizeof(*VAR_10);
 VAR_17 = FUNC_5(VAR_16, VAR_8);
 if (!VAR_17)
  return -VAR_7;

 VAR_15 = VAR_17;
 VAR_10 = VAR_17 + VAR_4;

 VAR_15->hdr.hdr_field = FUNC_0(VAR_5,
         FUNC_1(VAR_4),
         VAR_6);
 VAR_15->hdr.pkt_size = VAR_16;
 VAR_15->hdr.src_port = 0;
 VAR_15->hdr.dest_port = 0;
 VAR_15->hdr.token = VAR_9->token;
 VAR_15->hdr.opcode = VAR_3;

 VAR_10->port_id = VAR_12;

 VAR_13 = FUNC_2(VAR_11, VAR_15, VAR_9);
 if (VAR_13)
  FUNC_3(VAR_11->dev, "AFE enable for port 0x%x failed %d\n",
   VAR_12, VAR_13);

 FUNC_4(VAR_15);
 return VAR_13;
}
