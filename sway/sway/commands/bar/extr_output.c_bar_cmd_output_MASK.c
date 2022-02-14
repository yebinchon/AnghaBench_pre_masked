
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct cmd_results {int dummy; } ;
struct TYPE_8__ {int length; char** items; } ;
typedef TYPE_2__ list_t ;
struct TYPE_9__ {TYPE_1__* current_bar; } ;
struct TYPE_7__ {int id; TYPE_2__* outputs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,int *) ;
 TYPE_6__* VAR_3 ;
 TYPE_2__* FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,int) ;
 scalar_t__ FUNC_6 (char const*,char const*) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (int ,char*,int ,char const*) ;

struct cmd_results *FUNC_9(int VAR_4, char **VAR_5) {
 struct cmd_results *VAR_6 = ((void*)0);
 if ((VAR_6 = FUNC_0(VAR_4, "output", VAR_1, 1))) {
  return VAR_6;
 }

 const char *VAR_7 = VAR_5[0];
 list_t *VAR_8 = VAR_3->current_bar->outputs;
 if (!VAR_8) {
  VAR_8 = FUNC_2();
  VAR_3->current_bar->outputs = VAR_8;
 }

 bool VAR_9 = 1;
 if (FUNC_6("*", VAR_7) == 0) {

  while (VAR_8->length) {
   FUNC_3(VAR_8->items[0]);
   FUNC_5(VAR_8, 0);
  }
 } else {


  for (int VAR_10 = 0; VAR_10 < VAR_8->length; ++VAR_10) {
   const char *VAR_11 = VAR_8->items[VAR_10];
   if (FUNC_6("*", VAR_11) == 0) {
    FUNC_3(VAR_8->items[VAR_10]);
    FUNC_5(VAR_8, VAR_10);
   } else if (FUNC_6(VAR_7, VAR_11) == 0) {
    VAR_9 = 0;
    break;
   }
  }
 }

 if (VAR_9) {
  FUNC_4(VAR_8, FUNC_7(VAR_7));
  FUNC_8(VAR_2, "Adding bar: '%s' to output '%s'",
    VAR_3->current_bar->id, VAR_7);
 }
 return FUNC_1(VAR_0, ((void*)0));
}
