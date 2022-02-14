
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ut8 ;
typedef int ctx ;
struct TYPE_10__ {int EFlags; } ;
struct TYPE_8__ {int signum; } ;
struct TYPE_9__ {TYPE_1__ reason; int tid; int pid; } ;
typedef TYPE_2__ RDebug ;
typedef TYPE_3__ CONTEXT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int *,int) ;
 int FUNC_2 (TYPE_2__*,int ,int *,int) ;

int FUNC_3(RDebug *VAR_1) {

 CONTEXT VAR_2;
 if (!FUNC_1 (VAR_1, VAR_0, (ut8 *)&VAR_2, sizeof (VAR_2))) {
  return 0;
 }
 VAR_2.EFlags |= 0x100;
 if (!FUNC_2 (VAR_1, VAR_0, (ut8 *)&VAR_2, sizeof (VAR_2))) {
  return 0;
 }
 return FUNC_0 (VAR_1, VAR_1->pid, VAR_1->tid, VAR_1->reason.signum);

}
