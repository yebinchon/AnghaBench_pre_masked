
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int dead_end; int bgworker_notify; int child_slot; int bkend_type; int cancel_key; } ;
struct TYPE_5__ {int rw_child_slot; TYPE_2__* rw_backend; } ;
typedef TYPE_1__ RegisteredBgWorker ;
typedef TYPE_2__ Backend ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 TYPE_2__* FUNC_6 (int) ;

__attribute__((used)) static bool
FUNC_7(RegisteredBgWorker *VAR_8)
{
 Backend *VAR_9;






 if (FUNC_2(VAR_0) != VAR_1)
 {
  FUNC_3(VAR_5,
    (FUNC_4(VAR_2),
     FUNC_5("no slot available for new worker process")));
  return 0;
 }







 if (!FUNC_1(&VAR_6))
 {
  FUNC_3(VAR_5,
    (FUNC_4(VAR_3),
     FUNC_5("could not generate random cancel key")));
  return 0;
 }

 VAR_9 = FUNC_6(sizeof(Backend));
 if (VAR_9 == ((void*)0))
 {
  FUNC_3(VAR_5,
    (FUNC_4(VAR_4),
     FUNC_5("out of memory")));
  return 0;
 }

 VAR_9->cancel_key = VAR_6;
 VAR_9->child_slot = VAR_7 = FUNC_0();
 VAR_9->bkend_type = VAR_0;
 VAR_9->dead_end = 0;
 VAR_9->bgworker_notify = 0;

 VAR_8->rw_backend = VAR_9;
 VAR_8->rw_child_slot = VAR_9->child_slot;

 return 1;
}
