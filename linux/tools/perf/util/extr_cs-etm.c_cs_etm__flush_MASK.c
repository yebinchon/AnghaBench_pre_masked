
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct cs_etm_traceid_queue {struct cs_etm_packet* prev_packet; struct cs_etm_packet* packet; int period_instructions; } ;
struct cs_etm_queue {struct cs_etm_auxtrace* etm; } ;
struct cs_etm_packet {scalar_t__ sample_type; } ;
struct TYPE_2__ {scalar_t__ last_branch; } ;
struct cs_etm_auxtrace {TYPE_1__ synth_opts; scalar_t__ sample_branches; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct cs_etm_packet*) ;
 int FUNC_1 (struct cs_etm_queue*,struct cs_etm_traceid_queue*) ;
 int FUNC_2 (struct cs_etm_queue*,struct cs_etm_traceid_queue*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct cs_etm_queue *VAR_2,
    struct cs_etm_traceid_queue *VAR_3)
{
 int VAR_4 = 0;
 struct cs_etm_auxtrace *VAR_5 = VAR_2->etm;
 struct cs_etm_packet *VAR_6;


 if (VAR_3->prev_packet->sample_type == VAR_0)
  goto swap_packet;

 if (VAR_2->etm->synth_opts.last_branch &&
     VAR_3->prev_packet->sample_type == VAR_1) {







  u64 VAR_7 = FUNC_0(VAR_3->prev_packet);

  VAR_4 = FUNC_2(
   VAR_2, VAR_3, VAR_7,
   VAR_3->period_instructions);
  if (VAR_4)
   return VAR_4;

  VAR_3->period_instructions = 0;

 }

 if (VAR_5->sample_branches &&
     VAR_3->prev_packet->sample_type == VAR_1) {
  VAR_4 = FUNC_1(VAR_2, VAR_3);
  if (VAR_4)
   return VAR_4;
 }

swap_packet:
 if (VAR_5->sample_branches || VAR_5->synth_opts.last_branch) {




  VAR_6 = VAR_3->packet;
  VAR_3->packet = VAR_3->prev_packet;
  VAR_3->prev_packet = VAR_6;
 }

 return VAR_4;
}
