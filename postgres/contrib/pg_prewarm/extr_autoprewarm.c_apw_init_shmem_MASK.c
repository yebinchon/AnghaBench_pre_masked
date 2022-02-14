
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int tranche; } ;
struct TYPE_4__ {TYPE_3__ lock; void* pid_using_dumpfile; void* bgworker_pid; } ;
typedef int AutoPrewarmSharedState ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 TYPE_1__* FUNC_5 (char*,int,int*) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static bool
FUNC_6(void)
{
 bool VAR_4;

 FUNC_0(VAR_0, VAR_2);
 VAR_3 = FUNC_5("autoprewarm",
        sizeof(AutoPrewarmSharedState),
        &VAR_4);
 if (!VAR_4)
 {

  FUNC_1(&VAR_3->lock, FUNC_2());
  VAR_3->bgworker_pid = VAR_1;
  VAR_3->pid_using_dumpfile = VAR_1;
 }
 FUNC_4(VAR_0);

 FUNC_3(VAR_3->lock.tranche, "autoprewarm");

 return VAR_4;
}
