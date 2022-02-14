
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct q6copp {int copp_idx; } ;
struct q6adm_cmd_device_open_v5 {int mode_of_operation; int endpoint_id_1; int topology_id; int dev_num_channel; int bit_width; int sample_rate; int * dev_channel_mapping; int flags; } ;
struct q6adm {int dummy; } ;
struct TYPE_2__ {int pkt_size; int src_port; int dest_port; int token; int opcode; int hdr_field; } ;
struct apr_pkt {TYPE_1__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct apr_pkt*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (struct q6adm*,struct q6copp*,struct apr_pkt*,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7(struct q6adm *VAR_8, struct q6copp *VAR_9,
        int VAR_10, int VAR_11, int VAR_12,
        int VAR_13, int VAR_14, int VAR_15)
{
 struct q6adm_cmd_device_open_v5 *VAR_16;
 int VAR_17 = FUNC_5(VAR_10);
 struct apr_pkt *VAR_18;
 void *VAR_19;
 int VAR_20, VAR_21;

 VAR_21 = VAR_3 + sizeof(*VAR_16);
 VAR_19 = FUNC_3(VAR_21, VAR_7);
 if (!VAR_19)
  return -VAR_6;

 VAR_18 = VAR_19;
 VAR_16 = VAR_19 + VAR_3;
 VAR_18->hdr.hdr_field = FUNC_0(VAR_4,
        FUNC_1(VAR_3),
        VAR_5);
 VAR_18->hdr.pkt_size = VAR_21;
 VAR_18->hdr.src_port = VAR_17;
 VAR_18->hdr.dest_port = VAR_17;
 VAR_18->hdr.token = VAR_10 << 16 | VAR_9->copp_idx;
 VAR_18->hdr.opcode = VAR_1;
 VAR_16->flags = VAR_2;
 VAR_16->mode_of_operation = VAR_11;
 VAR_16->endpoint_id_1 = VAR_17;
 VAR_16->topology_id = VAR_12;
 VAR_16->dev_num_channel = VAR_13 & 0x00FF;
 VAR_16->bit_width = VAR_14;
 VAR_16->sample_rate = VAR_15;

 VAR_20 = FUNC_6(&VAR_16->dev_channel_mapping[0],
     VAR_13);
 if (VAR_20)
  goto err;

 VAR_20 = FUNC_4(VAR_8, VAR_9, VAR_18,
          VAR_0);

err:
 FUNC_2(VAR_18);
 return VAR_20;
}
