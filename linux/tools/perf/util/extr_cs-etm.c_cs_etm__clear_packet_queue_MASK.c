
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cs_etm_packet_queue {TYPE_1__* packet_buffer; scalar_t__ packet_count; scalar_t__ tail; scalar_t__ head; } ;
struct TYPE_2__ {int last_instr_taken_branch; int cpu; int trace_chan_id; int exception_number; scalar_t__ flags; scalar_t__ last_instr_cond; scalar_t__ last_instr_subtype; scalar_t__ last_instr_type; scalar_t__ last_instr_size; scalar_t__ instr_count; void* end_addr; void* start_addr; int isa; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_0(struct cs_etm_packet_queue *VAR_6)
{
 int VAR_7;

 VAR_6->head = 0;
 VAR_6->tail = 0;
 VAR_6->packet_count = 0;
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_6->packet_buffer[VAR_7].isa = VAR_1;
  VAR_6->packet_buffer[VAR_7].start_addr = VAR_0;
  VAR_6->packet_buffer[VAR_7].end_addr = VAR_0;
  VAR_6->packet_buffer[VAR_7].instr_count = 0;
  VAR_6->packet_buffer[VAR_7].last_instr_taken_branch = 0;
  VAR_6->packet_buffer[VAR_7].last_instr_size = 0;
  VAR_6->packet_buffer[VAR_7].last_instr_type = 0;
  VAR_6->packet_buffer[VAR_7].last_instr_subtype = 0;
  VAR_6->packet_buffer[VAR_7].last_instr_cond = 0;
  VAR_6->packet_buffer[VAR_7].flags = 0;
  VAR_6->packet_buffer[VAR_7].exception_number = VAR_4;
  VAR_6->packet_buffer[VAR_7].trace_chan_id = VAR_5;
  VAR_6->packet_buffer[VAR_7].cpu = VAR_3;
 }
}
