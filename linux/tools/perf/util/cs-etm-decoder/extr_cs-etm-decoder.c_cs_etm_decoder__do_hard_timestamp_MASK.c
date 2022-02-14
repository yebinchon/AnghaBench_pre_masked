
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct cs_etm_queue {int dummy; } ;
struct cs_etm_packet_queue {scalar_t__ instr_count; scalar_t__ next_timestamp; scalar_t__ timestamp; } ;
struct TYPE_3__ {scalar_t__ timestamp; } ;
typedef TYPE_1__ ocsd_generic_trace_elem ;
typedef int ocsd_datapath_resp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cs_etm_packet_queue* FUNC_0 (struct cs_etm_queue*,int const) ;
 int FUNC_1 (struct cs_etm_queue*,int const) ;

__attribute__((used)) static ocsd_datapath_resp_t
FUNC_2(struct cs_etm_queue *VAR_3,
      const ocsd_generic_trace_elem *VAR_4,
      const uint8_t VAR_5)
{
 struct cs_etm_packet_queue *VAR_6;


 VAR_6 = FUNC_0(VAR_3, VAR_5);
 if (!VAR_6)
  return VAR_1;






 if (VAR_6->timestamp) {
  VAR_6->next_timestamp = VAR_4->timestamp;
  return VAR_0;
 }
 VAR_6->timestamp = VAR_4->timestamp - VAR_6->instr_count;
 VAR_6->next_timestamp = VAR_4->timestamp;
 VAR_6->instr_count = 0;


 FUNC_1(VAR_3, VAR_5);


 return VAR_2;
}
