
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs_etm_packet_queue {scalar_t__ instr_count; scalar_t__ next_timestamp; scalar_t__ timestamp; } ;



__attribute__((used)) static void
FUNC_0(struct cs_etm_packet_queue *VAR_0)
{
 VAR_0->timestamp = 0;
 VAR_0->next_timestamp = 0;
 VAR_0->instr_count = 0;
}
