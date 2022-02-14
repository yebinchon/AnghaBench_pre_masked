
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hist_trigger_data {int dummy; } ;
struct hist_field {struct hist_field* var; } ;
struct field_var {struct field_var* var; } ;
struct TYPE_2__ {char* event_system; char* event; } ;
struct action_data {scalar_t__ handler; TYPE_1__ match_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct hist_field*) ;
 struct hist_field* FUNC_1 (struct hist_trigger_data*,char*,char*,char*) ;
 struct hist_field* FUNC_2 (struct hist_trigger_data*,char*,char*,char*) ;
 int FUNC_3 (struct hist_field*) ;
 int FUNC_4 (struct hist_trigger_data*,struct hist_field*) ;

__attribute__((used)) static struct hist_field *
FUNC_5(struct hist_trigger_data *VAR_1,
         struct action_data *VAR_2, char *VAR_3,
         char *VAR_4, char *VAR_5)
{
 struct hist_field *VAR_6 = ((void*)0);
 struct field_var *VAR_7;







 VAR_7 = FUNC_2(VAR_1, VAR_3, VAR_4, VAR_5);

 if (VAR_7 && !FUNC_0(VAR_7)) {
  FUNC_4(VAR_1, VAR_7);
  VAR_6 = VAR_7->var;
 } else {
  VAR_7 = ((void*)0);





  if (!VAR_3 && VAR_2->handler == VAR_0) {
   VAR_3 = VAR_2->match_data.event_system;
   VAR_4 = VAR_2->match_data.event;
  }
  VAR_6 = FUNC_1(VAR_1, VAR_3, VAR_4, VAR_5);
  if (FUNC_0(VAR_6))
   goto free;
 }
 out:
 return VAR_6;
 free:
 FUNC_3(VAR_7);
 VAR_6 = ((void*)0);
 goto out;
}
