
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct cs_etm_traceid_queue {int period_instructions; TYPE_3__* prev_packet; } ;
struct cs_etm_queue {TYPE_2__* etm; } ;
struct TYPE_6__ {scalar_t__ sample_type; } ;
struct TYPE_4__ {scalar_t__ last_branch; } ;
struct TYPE_5__ {TYPE_1__ synth_opts; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct cs_etm_queue*,struct cs_etm_traceid_queue*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct cs_etm_queue *VAR_1,
        struct cs_etm_traceid_queue *VAR_2)
{
 int VAR_3;
 if (VAR_1->etm->synth_opts.last_branch &&
     VAR_2->prev_packet->sample_type == VAR_0) {




  u64 VAR_4 = FUNC_0(VAR_2->prev_packet);

  VAR_3 = FUNC_1(
   VAR_1, VAR_2, VAR_4,
   VAR_2->period_instructions);
  if (VAR_3)
   return VAR_3;

  VAR_2->period_instructions = 0;
 }

 return 0;
}
