
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct route_payload {int num_copps; int session_id; int* port_id; int* copp_idx; } ;
struct q6copp {int refcount; int id; } ;
struct q6adm_session_map_node_v5 {int session_id; int num_copps; } ;
struct q6adm_cmd_matrix_map_routings_v5 {int num_sessions; int matrix_id; } ;
struct TYPE_4__ {int status; scalar_t__ opcode; } ;
struct q6adm {int lock; TYPE_2__ result; int matrix_map_wait; int apr; } ;
struct device {int parent; } ;
struct TYPE_3__ {int pkt_size; scalar_t__ opcode; scalar_t__ token; int hdr_field; } ;
struct apr_pkt {TYPE_1__ hdr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,struct apr_pkt*) ;
 int FUNC_3 (struct device*,char*,int,...) ;
 struct q6adm* FUNC_4 (int ) ;
 int FUNC_5 (struct apr_pkt*) ;
 int FUNC_6 (int *,int ) ;
 void* FUNC_7 (int,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct q6copp* FUNC_11 (struct q6adm*,int,int) ;
 int VAR_11 ;
 int FUNC_12 (int ,int,int ) ;

int FUNC_13(struct device *VAR_12, int VAR_13,
       struct route_payload VAR_14, int VAR_15)
{
 struct q6adm *VAR_16 = FUNC_4(VAR_12->parent);
 struct q6adm_cmd_matrix_map_routings_v5 *VAR_17;
 struct q6adm_session_map_node_v5 *VAR_18;
 struct apr_pkt *VAR_19;
 uint16_t *VAR_20;
 int VAR_21, VAR_22, VAR_23, VAR_24;
 void *VAR_25 = ((void*)0);
 struct q6copp *VAR_26;


 VAR_21 = (VAR_3 + sizeof(*VAR_17) + sizeof(*VAR_18) +
      (sizeof(uint32_t) * VAR_14.num_copps));

 VAR_25 = FUNC_7(VAR_21, VAR_9);
 if (!VAR_25)
  return -VAR_7;

 VAR_19 = VAR_25;
 VAR_17 = VAR_25 + VAR_3;
 VAR_18 = VAR_25 + VAR_3 + sizeof(*VAR_17);
 VAR_20 = VAR_25 + VAR_3 + sizeof(*VAR_17) + sizeof(*VAR_18);

 VAR_19->hdr.hdr_field = FUNC_0(VAR_4,
        FUNC_1(VAR_3),
        VAR_5);
 VAR_19->hdr.pkt_size = VAR_21;
 VAR_19->hdr.token = 0;
 VAR_19->hdr.opcode = VAR_0;
 VAR_17->num_sessions = 1;

 switch (VAR_13) {
 case 128:
  VAR_17->matrix_id = VAR_1;
  break;
 case 129:
  VAR_17->matrix_id = VAR_2;
  break;
 default:
  FUNC_3(VAR_12, "Wrong path set[%d]\n", VAR_13);
  break;
 }

 VAR_18->session_id = VAR_14.session_id;
 VAR_18->num_copps = VAR_14.num_copps;

 for (VAR_23 = 0; VAR_23 < VAR_14.num_copps; VAR_23++) {
  int VAR_27 = VAR_14.port_id[VAR_23];

  if (VAR_27 < 0) {
   FUNC_3(VAR_12, "Invalid port_id 0x%x\n",
    VAR_14.port_id[VAR_23]);
   FUNC_5(VAR_19);
   return -VAR_6;
  }
  VAR_24 = VAR_14.copp_idx[VAR_23];

  VAR_26 = FUNC_11(VAR_16, VAR_27, VAR_24);
  if (!VAR_26) {
   FUNC_5(VAR_19);
   return -VAR_6;
  }

  VAR_20[VAR_23] = VAR_26->id;
  FUNC_6(&VAR_26->refcount, VAR_11);
 }

 FUNC_9(&VAR_16->lock);
 VAR_16->result.status = 0;
 VAR_16->result.opcode = 0;

 VAR_22 = FUNC_2(VAR_16->apr, VAR_19);
 if (VAR_22 < 0) {
  FUNC_3(VAR_12, "routing for stream %d failed ret %d\n",
         VAR_14.session_id, VAR_22);
  goto fail_cmd;
 }
 VAR_22 = FUNC_12(VAR_16->matrix_map_wait,
     VAR_16->result.opcode == VAR_19->hdr.opcode,
     FUNC_8(VAR_10));
 if (!VAR_22) {
  FUNC_3(VAR_12, "routing for stream %d failed\n",
         VAR_14.session_id);
  VAR_22 = -VAR_8;
  goto fail_cmd;
 } else if (VAR_16->result.status > 0) {
  FUNC_3(VAR_12, "DSP returned error[%d]\n",
   VAR_16->result.status);
  VAR_22 = -VAR_6;
  goto fail_cmd;
 }

fail_cmd:
 FUNC_10(&VAR_16->lock);
 FUNC_5(VAR_19);
 return VAR_22;
}
