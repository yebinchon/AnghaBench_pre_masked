
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ state; int cpu; int kthread; int pc; } ;
typedef TYPE_2__ kd_stc_64 ;
struct TYPE_11__ {scalar_t__ data; } ;
typedef TYPE_3__ kd_packet_t ;
struct TYPE_9__ {scalar_t__ signum; void* type; int tid; int addr; } ;
struct TYPE_12__ {TYPE_1__ reason; } ;
typedef void* RDebugReasonType ;
typedef TYPE_4__ RDebug ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_8 ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,TYPE_3__**) ;

__attribute__((used)) static RDebugReasonType FUNC_5(RDebug *VAR_10, int VAR_11) {
 RDebugReasonType VAR_12 = VAR_7;
 kd_packet_t *VAR_13 = ((void*)0);
 kd_stc_64 *VAR_14;
 VAR_8 = 0;

 for (;;) {
  int VAR_15 = FUNC_4 (VAR_9, VAR_3, &VAR_13);
  if (VAR_8) {
   VAR_8 = 0;
   FUNC_2 (VAR_9);
   FUNC_0 (VAR_13);
   continue;
  }
  if (VAR_15 != VAR_2 || !VAR_13) {
   VAR_12 = VAR_4;
   break;
  }
  VAR_14 = (kd_stc_64 *) VAR_13->data;
  VAR_10->reason.addr = VAR_14->pc;
  VAR_10->reason.tid = VAR_14->kthread;
  VAR_10->reason.signum = VAR_14->state;
  FUNC_3 (VAR_9, VAR_14->cpu);
  if (VAR_14->state == VAR_0) {
   VAR_10->reason.type = VAR_5;
   VAR_12 = VAR_5;
   break;
  } else if (VAR_14->state == VAR_1) {
   VAR_10->reason.type = VAR_6;
   VAR_12 = VAR_6;
   break;
  }
  FUNC_0 (VAR_13);
 }
 FUNC_1 (VAR_13);
 return VAR_12;
}
