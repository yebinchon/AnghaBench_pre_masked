
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct cs_etm_queue {int dummy; } ;
struct cs_etm_packet_queue {scalar_t__ instr_count; scalar_t__ next_timestamp; scalar_t__ timestamp; } ;
typedef int ocsd_datapath_resp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cs_etm_queue*,int const) ;

__attribute__((used)) static ocsd_datapath_resp_t
FUNC_1(struct cs_etm_queue *VAR_2,
      struct cs_etm_packet_queue *VAR_3,
      const uint8_t VAR_4)
{

 if (!VAR_3->timestamp)
  return VAR_0;

 VAR_3->timestamp = VAR_3->next_timestamp;


 VAR_3->next_timestamp += VAR_3->instr_count;
 VAR_3->instr_count = 0;


 FUNC_0(VAR_2, VAR_4);

 return VAR_1;
}
