
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int ecn; void* interval; void* target; } ;
struct sta_info {TYPE_2__ cparams; TYPE_1__* local; TYPE_5__* sdata; } ;
struct TYPE_10__ {TYPE_4__* local; } ;
struct TYPE_9__ {TYPE_3__* ops; } ;
struct TYPE_8__ {int wake_tx_queue; } ;
struct TYPE_6__ {int num_sta; } ;


 void* FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct sta_info *VAR_1, u32 VAR_2)
{
 if (!VAR_1->sdata->local->ops->wake_tx_queue)
  return;

 if (VAR_2 && VAR_2 < VAR_0 * VAR_1->local->num_sta) {
  VAR_1->cparams.target = FUNC_0(50);
  VAR_1->cparams.interval = FUNC_0(300);
  VAR_1->cparams.ecn = 0;
 } else {
  VAR_1->cparams.target = FUNC_0(20);
  VAR_1->cparams.interval = FUNC_0(100);
  VAR_1->cparams.ecn = 1;
 }
}
