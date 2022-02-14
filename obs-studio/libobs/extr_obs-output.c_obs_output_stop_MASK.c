
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int flags; } ;
struct TYPE_13__ {int data; } ;
struct TYPE_15__ {scalar_t__ active_delay_ns; TYPE_2__ info; TYPE_1__ context; } ;
typedef TYPE_3__ obs_output_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,char*) ;
 int FUNC_2 (TYPE_3__*,int,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,char*) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;

void FUNC_9(obs_output_t *VAR_1)
{
 bool VAR_2;
 if (!FUNC_5(VAR_1, "obs_output_stop"))
  return;
 if (!VAR_1->context.data)
  return;
 if (!FUNC_0(VAR_1) && !FUNC_7(VAR_1))
  return;
 if (FUNC_7(VAR_1)) {
  FUNC_4(VAR_1);
  return;
 }

 VAR_2 = (VAR_1->info.flags & VAR_0) != 0;

 if (VAR_2 && VAR_1->active_delay_ns) {
  FUNC_3(VAR_1);

 } else if (!FUNC_8(VAR_1)) {
  FUNC_1(VAR_1, "stopping");
  FUNC_2(VAR_1, 0, FUNC_6());
 }
}
