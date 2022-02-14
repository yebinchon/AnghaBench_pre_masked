
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
struct cs_etm_traceid_queue {scalar_t__ period_instructions; struct cs_etm_packet* prev_packet; struct cs_etm_packet* packet; int trace_chan_id; } ;
struct cs_etm_queue {struct cs_etm_auxtrace* etm; } ;
struct cs_etm_packet {scalar_t__ instr_count; scalar_t__ sample_type; scalar_t__ last_instr_taken_branch; } ;
struct TYPE_2__ {scalar_t__ last_branch; } ;
struct cs_etm_auxtrace {scalar_t__ instructions_sample_period; TYPE_1__ synth_opts; scalar_t__ sample_branches; scalar_t__ sample_instructions; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct cs_etm_queue*,int ,struct cs_etm_packet*,scalar_t__) ;
 int FUNC_1 (struct cs_etm_queue*,struct cs_etm_traceid_queue*) ;
 int FUNC_2 (struct cs_etm_queue*,struct cs_etm_traceid_queue*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct cs_etm_queue*,struct cs_etm_traceid_queue*) ;

__attribute__((used)) static int FUNC_4(struct cs_etm_queue *VAR_2,
     struct cs_etm_traceid_queue *VAR_3)
{
 struct cs_etm_auxtrace *VAR_4 = VAR_2->etm;
 struct cs_etm_packet *VAR_5;
 int VAR_6;
 u8 VAR_7 = VAR_3->trace_chan_id;
 u64 VAR_8 = VAR_3->packet->instr_count;

 VAR_3->period_instructions += VAR_8;





 if (VAR_4->synth_opts.last_branch &&
     VAR_3->prev_packet->sample_type == VAR_1 &&
     VAR_3->prev_packet->last_instr_taken_branch)
  FUNC_3(VAR_2, VAR_3);

 if (VAR_4->sample_instructions &&
     VAR_3->period_instructions >= VAR_4->instructions_sample_period) {






  u64 VAR_9 = VAR_3->period_instructions -
   VAR_4->instructions_sample_period;






  u64 VAR_10 = (VAR_8 - VAR_9 - 1);
  u64 VAR_11 = FUNC_0(VAR_2, VAR_7,
           VAR_3->packet, VAR_10);

  VAR_6 = FUNC_2(
   VAR_2, VAR_3, VAR_11, VAR_4->instructions_sample_period);
  if (VAR_6)
   return VAR_6;


  VAR_3->period_instructions = VAR_9;
 }

 if (VAR_4->sample_branches) {
  bool VAR_12 = 0;


  if (VAR_3->prev_packet->sample_type == VAR_0)
   VAR_12 = 1;


  if (VAR_3->prev_packet->sample_type == VAR_1 &&
      VAR_3->prev_packet->last_instr_taken_branch)
   VAR_12 = 1;

  if (VAR_12) {
   VAR_6 = FUNC_1(VAR_2, VAR_3);
   if (VAR_6)
    return VAR_6;
  }
 }

 if (VAR_4->sample_branches || VAR_4->synth_opts.last_branch) {




  VAR_5 = VAR_3->packet;
  VAR_3->packet = VAR_3->prev_packet;
  VAR_3->prev_packet = VAR_5;
 }

 return 0;
}
