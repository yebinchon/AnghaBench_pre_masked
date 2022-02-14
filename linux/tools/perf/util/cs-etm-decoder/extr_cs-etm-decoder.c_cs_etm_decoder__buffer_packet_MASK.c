
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct cs_etm_packet_queue {int packet_count; int tail; TYPE_1__* packet_buffer; } ;
typedef int ocsd_datapath_resp_t ;
typedef enum cs_etm_sample_type { ____Placeholder_cs_etm_sample_type } cs_etm_sample_type ;
struct TYPE_2__ {int sample_type; int cpu; int last_instr_taken_branch; int trace_chan_id; int exception_number; scalar_t__ flags; scalar_t__ last_instr_cond; scalar_t__ last_instr_subtype; scalar_t__ last_instr_type; scalar_t__ last_instr_size; scalar_t__ instr_count; void* end_addr; void* start_addr; int isa; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int const,int*) ;

__attribute__((used)) static ocsd_datapath_resp_t
FUNC_1(struct cs_etm_packet_queue *VAR_7,
         const u8 VAR_8,
         enum cs_etm_sample_type VAR_9)
{
 u32 VAR_10 = 0;
 int VAR_11;

 if (VAR_7->packet_count >= VAR_2 - 1)
  return VAR_4;

 if (FUNC_0(VAR_8, &VAR_11) < 0)
  return VAR_4;

 VAR_10 = VAR_7->tail;
 VAR_10 = (VAR_10 + 1) & (VAR_2 - 1);
 VAR_7->tail = VAR_10;
 VAR_7->packet_count++;

 VAR_7->packet_buffer[VAR_10].sample_type = VAR_9;
 VAR_7->packet_buffer[VAR_10].isa = VAR_1;
 VAR_7->packet_buffer[VAR_10].cpu = VAR_11;
 VAR_7->packet_buffer[VAR_10].start_addr = VAR_0;
 VAR_7->packet_buffer[VAR_10].end_addr = VAR_0;
 VAR_7->packet_buffer[VAR_10].instr_count = 0;
 VAR_7->packet_buffer[VAR_10].last_instr_taken_branch = 0;
 VAR_7->packet_buffer[VAR_10].last_instr_size = 0;
 VAR_7->packet_buffer[VAR_10].last_instr_type = 0;
 VAR_7->packet_buffer[VAR_10].last_instr_subtype = 0;
 VAR_7->packet_buffer[VAR_10].last_instr_cond = 0;
 VAR_7->packet_buffer[VAR_10].flags = 0;
 VAR_7->packet_buffer[VAR_10].exception_number = VAR_6;
 VAR_7->packet_buffer[VAR_10].trace_chan_id = VAR_8;

 if (VAR_7->packet_count == VAR_2 - 1)
  return VAR_5;

 return VAR_3;
}
