
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct trace_array {int dummy; } ;
struct hist_trigger_data {int n_actions; struct action_data** actions; TYPE_2__* attrs; TYPE_1__* event_file; } ;
struct action_data {int dummy; } ;
struct TYPE_4__ {unsigned int n_actions; char** action_str; } ;
struct TYPE_3__ {struct trace_array* tr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct action_data*) ;
 int FUNC_1 (struct action_data*) ;
 struct action_data* FUNC_2 (struct trace_array*,char*) ;
 int FUNC_3 (char*,char*) ;
 struct action_data* FUNC_4 (struct hist_trigger_data*,char*,int ) ;

__attribute__((used)) static int FUNC_5(struct hist_trigger_data *VAR_3)
{
 struct trace_array *VAR_4 = VAR_3->event_file->tr;
 struct action_data *VAR_5;
 unsigned int VAR_6;
 int VAR_7 = 0;
 char *VAR_8;
 int VAR_9;

 for (VAR_6 = 0; VAR_6 < VAR_3->attrs->n_actions; VAR_6++) {
  VAR_8 = VAR_3->attrs->action_str[VAR_6];

  if ((VAR_9 = FUNC_3(VAR_8, "onmatch("))) {
   char *VAR_10 = VAR_8 + VAR_9;

   VAR_5 = FUNC_2(VAR_4, VAR_10);
   if (FUNC_0(VAR_5)) {
    VAR_7 = FUNC_1(VAR_5);
    break;
   }
  } else if ((VAR_9 = FUNC_3(VAR_8, "onmax("))) {
   char *VAR_11 = VAR_8 + VAR_9;

   VAR_5 = FUNC_4(VAR_3, VAR_11,
      VAR_2);
   if (FUNC_0(VAR_5)) {
    VAR_7 = FUNC_1(VAR_5);
    break;
   }
  } else if ((VAR_9 = FUNC_3(VAR_8, "onchange("))) {
   char *VAR_12 = VAR_8 + VAR_9;

   VAR_5 = FUNC_4(VAR_3, VAR_12,
      VAR_1);
   if (FUNC_0(VAR_5)) {
    VAR_7 = FUNC_1(VAR_5);
    break;
   }
  } else {
   VAR_7 = -VAR_0;
   break;
  }

  VAR_3->actions[VAR_3->n_actions++] = VAR_5;
 }

 return VAR_7;
}
