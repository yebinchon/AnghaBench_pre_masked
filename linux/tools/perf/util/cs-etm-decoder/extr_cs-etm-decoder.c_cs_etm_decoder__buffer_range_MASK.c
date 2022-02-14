
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct cs_etm_queue {int dummy; } ;
struct cs_etm_packet_queue {size_t tail; int instr_count; struct cs_etm_packet* packet_buffer; } ;
struct cs_etm_packet {int last_instr_type; int last_instr_taken_branch; int last_instr_size; int last_instr_cond; int last_instr_subtype; scalar_t__ instr_count; int end_addr; int start_addr; int isa; } ;
struct TYPE_3__ {int isa; int last_i_type; int last_instr_exec; scalar_t__ num_instr_range; int last_instr_sz; int last_instr_cond; int last_i_subtype; int en_addr; int st_addr; } ;
typedef TYPE_1__ ocsd_generic_trace_elem ;
typedef int ocsd_datapath_resp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct cs_etm_queue*) ;
 int FUNC_1 (struct cs_etm_packet_queue*,int const,int ) ;
 int FUNC_2 (struct cs_etm_queue*,struct cs_etm_packet_queue*,int const) ;
__attribute__((used)) static ocsd_datapath_resp_t
FUNC_3(struct cs_etm_queue *VAR_7,
        struct cs_etm_packet_queue *VAR_8,
        const ocsd_generic_trace_elem *VAR_9,
        const uint8_t VAR_10)
{
 int VAR_11 = 0;
 struct cs_etm_packet *VAR_12;

 VAR_11 = FUNC_1(VAR_8, VAR_10,
         VAR_4);
 if (VAR_11 != VAR_5 && VAR_11 != VAR_6)
  return VAR_11;

 VAR_12 = &VAR_8->packet_buffer[VAR_8->tail];

 switch (VAR_9->isa) {
 case 134:
  VAR_12->isa = VAR_1;
  break;
 case 133:
  VAR_12->isa = VAR_0;
  break;
 case 129:
  VAR_12->isa = VAR_2;
  break;
 case 130:
 case 131:
 case 132:
 case 128:
 default:
  VAR_12->isa = VAR_3;
 }

 VAR_12->start_addr = VAR_9->st_addr;
 VAR_12->end_addr = VAR_9->en_addr;
 VAR_12->instr_count = VAR_9->num_instr_range;
 VAR_12->last_instr_type = VAR_9->last_i_type;
 VAR_12->last_instr_subtype = VAR_9->last_i_subtype;
 VAR_12->last_instr_cond = VAR_9->last_instr_cond;

 switch (VAR_9->last_i_type) {
 case 140:
 case 139:
  VAR_12->last_instr_taken_branch = VAR_9->last_instr_exec;
  break;
 case 137:
 case 138:
 case 135:
 case 136:
 default:
  VAR_12->last_instr_taken_branch = 0;
  break;
 }

 VAR_12->last_instr_size = VAR_9->last_instr_sz;


 if (FUNC_0(VAR_7))
  goto out;






 if (VAR_11 == VAR_6)
  goto out;

 VAR_8->instr_count += VAR_9->num_instr_range;

 VAR_11 = FUNC_2(VAR_7, VAR_8,
      VAR_10);
out:
 return VAR_11;
}
