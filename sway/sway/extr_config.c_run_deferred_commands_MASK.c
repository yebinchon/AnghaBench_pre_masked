
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct cmd_results {scalar_t__ status; int error; } ;
struct TYPE_6__ {int length; struct cmd_results** items; } ;
typedef TYPE_1__ list_t ;
struct TYPE_8__ {TYPE_3__* cmd_queue; } ;
struct TYPE_7__ {char** items; scalar_t__ length; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__* VAR_3 ;
 TYPE_1__* FUNC_0 (char*,int *,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct cmd_results*) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,char*,...) ;

void FUNC_6(void) {
 if (!VAR_3->cmd_queue->length) {
  return;
 }
 FUNC_5(VAR_1, "Running deferred commands");
 while (VAR_3->cmd_queue->length) {
  char *VAR_4 = VAR_3->cmd_queue->items[0];
  list_t *VAR_5 = FUNC_0(VAR_4, ((void*)0), ((void*)0));
  for (int VAR_6 = 0; VAR_6 < VAR_5->length; ++VAR_6) {
   struct cmd_results *VAR_7 = VAR_5->items[VAR_6];
   if (VAR_7->status != VAR_0) {
    FUNC_5(VAR_2, "Error on line '%s': %s",
      VAR_4, VAR_7->error);
   }
   FUNC_2(VAR_7);
  }
  FUNC_3(VAR_3->cmd_queue, 0);
  FUNC_4(VAR_5);
  FUNC_1(VAR_4);
 }
}
