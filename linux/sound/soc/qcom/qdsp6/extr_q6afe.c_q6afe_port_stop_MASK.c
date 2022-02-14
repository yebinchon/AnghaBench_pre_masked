
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct q6afe_port {int id; int token; struct q6afe* afe; } ;
struct q6afe {int dev; } ;
struct TYPE_2__ {int pkt_size; int token; int opcode; scalar_t__ dest_port; scalar_t__ src_port; int hdr_field; } ;
struct apr_pkt {TYPE_1__ hdr; } ;
struct afe_port_cmd_device_stop {int port_id; scalar_t__ reserved; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct q6afe*,struct apr_pkt*,struct q6afe_port*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct apr_pkt*) ;
 void* FUNC_5 (int,int ) ;

int FUNC_6(struct q6afe_port *VAR_8)
{
 struct afe_port_cmd_device_stop *VAR_9;
 struct q6afe *VAR_10 = VAR_8->afe;
 struct apr_pkt *VAR_11;
 int VAR_12 = VAR_8->id;
 int VAR_13 = 0;
 int VAR_14, VAR_15;
 void *VAR_16;

 VAR_12 = VAR_8->id;
 VAR_14 = VAR_8->token;
 if (VAR_14 < 0 || VAR_14 >= VAR_1) {
  FUNC_3(VAR_10->dev, "AFE port index[%d] invalid!\n", VAR_14);
  return -VAR_5;
 }

 VAR_15 = VAR_2 + sizeof(*VAR_9);
 VAR_16 = FUNC_5(VAR_15, VAR_7);
 if (!VAR_16)
  return -VAR_6;

 VAR_11 = VAR_16;
 VAR_9 = VAR_16 + VAR_2;

 VAR_11->hdr.hdr_field = FUNC_0(VAR_3,
        FUNC_1(VAR_2),
        VAR_4);
 VAR_11->hdr.pkt_size = VAR_15;
 VAR_11->hdr.src_port = 0;
 VAR_11->hdr.dest_port = 0;
 VAR_11->hdr.token = VAR_14;
 VAR_11->hdr.opcode = VAR_0;
 VAR_9->port_id = VAR_12;
 VAR_9->reserved = 0;

 VAR_13 = FUNC_2(VAR_10, VAR_11, VAR_8);
 if (VAR_13)
  FUNC_3(VAR_10->dev, "AFE close failed %d\n", VAR_13);

 FUNC_4(VAR_11);
 return VAR_13;
}
