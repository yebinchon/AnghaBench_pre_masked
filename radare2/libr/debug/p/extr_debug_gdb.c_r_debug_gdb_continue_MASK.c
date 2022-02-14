
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tid; scalar_t__ present; } ;
struct TYPE_6__ {TYPE_1__ thread; scalar_t__ is_valid; } ;
struct TYPE_7__ {int tid; TYPE_2__ stop_reason; } ;
typedef int RDebug ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_3__* VAR_1 ;
 int FUNC_1 (TYPE_3__*,int,int,int) ;

__attribute__((used)) static int FUNC_2(RDebug *VAR_2, int VAR_3, int VAR_4, int VAR_5) {
 FUNC_0 (VAR_2);
 if (!VAR_1) {
  return VAR_0;
 }
 FUNC_1 (VAR_1, VAR_3, -1, VAR_5);
 if (VAR_1->stop_reason.is_valid && VAR_1->stop_reason.thread.present) {



  VAR_1->tid = VAR_1->stop_reason.thread.tid;
 }
 return VAR_1->tid;
}
