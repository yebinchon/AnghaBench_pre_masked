
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cmd_results {scalar_t__ status; scalar_t__ error; } ;
struct TYPE_3__ {int length; struct cmd_results** items; } ;
typedef TYPE_1__ list_t ;
typedef int json_object ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int) ;
 int * FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int *) ;
 char* FUNC_7 (int *) ;
 char* FUNC_8 (char const*) ;

char *FUNC_9(list_t *VAR_2) {
 json_object *VAR_3 = FUNC_1();
 for (int VAR_4 = 0; VAR_4 < VAR_2->length; ++VAR_4) {
  struct cmd_results *VAR_5 = VAR_2->items[VAR_4];
  json_object *VAR_6 = FUNC_3();
  FUNC_5(VAR_6, "success",
    FUNC_2(VAR_5->status == VAR_1));
  if (VAR_5->error) {
   FUNC_5(VAR_6, "parse_error",
     FUNC_2(VAR_5->status == VAR_0));
   FUNC_5(
     VAR_6, "error", FUNC_4(VAR_5->error));
  }
  FUNC_0(VAR_3, VAR_6);
 }
 const char *VAR_7 = FUNC_7(VAR_3);
 char *VAR_8 = FUNC_8(VAR_7);
 FUNC_6(VAR_3);
 return VAR_8;
}
