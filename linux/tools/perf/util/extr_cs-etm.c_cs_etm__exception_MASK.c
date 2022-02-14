
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cs_etm_traceid_queue {TYPE_1__* prev_packet; } ;
struct TYPE_2__ {scalar_t__ sample_type; int last_instr_taken_branch; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct cs_etm_traceid_queue *VAR_1)
{
 if (VAR_1->prev_packet->sample_type == VAR_0)
  VAR_1->prev_packet->last_instr_taken_branch = 1;

 return 0;
}
