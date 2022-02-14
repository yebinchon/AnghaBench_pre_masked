
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ tid; scalar_t__ pid; scalar_t__ present; } ;
struct TYPE_12__ {int reason; int signum; TYPE_1__ thread; int is_valid; } ;
struct TYPE_14__ {scalar_t__ pid; scalar_t__ tid; TYPE_3__ stop_reason; } ;
struct TYPE_11__ {scalar_t__ tid; int type; int signum; } ;
struct TYPE_13__ {scalar_t__ pid; scalar_t__ tid; TYPE_2__ reason; } ;
typedef int RDebugReasonType ;
typedef TYPE_4__ RDebug ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 TYPE_6__* VAR_1 ;
 int FUNC_1 (TYPE_6__*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_6__*) ;

__attribute__((used)) static RDebugReasonType FUNC_3(RDebug *VAR_2, int VAR_3) {
 FUNC_0 (VAR_2);
 if (!VAR_1) {
  return VAR_0;
 }
 if (!VAR_1->stop_reason.is_valid) {
  if (FUNC_2 (VAR_1) < 0) {
   VAR_2->reason.type = VAR_0;
   return VAR_0;
  }
 }
 if (VAR_1->stop_reason.thread.present) {
  VAR_2->reason.tid = VAR_1->stop_reason.thread.tid;
  VAR_2->pid = VAR_1->stop_reason.thread.pid;
  VAR_2->tid = VAR_1->stop_reason.thread.tid;
  if (VAR_2->pid != VAR_1->pid || VAR_2->tid != VAR_1->tid) {

   FUNC_1 (VAR_1, VAR_2->pid, VAR_2->tid);
  }
 }
 VAR_2->reason.signum = VAR_1->stop_reason.signum;
 VAR_2->reason.type = VAR_1->stop_reason.reason;
 return VAR_1->stop_reason.reason;
}
