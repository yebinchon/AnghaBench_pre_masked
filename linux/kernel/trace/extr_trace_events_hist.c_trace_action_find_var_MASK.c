
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct trace_array {int dummy; } ;
struct hist_trigger_data {TYPE_2__* event_file; } ;
struct hist_field {int dummy; } ;
struct TYPE_3__ {char* event_system; char* event; } ;
struct action_data {scalar_t__ handler; TYPE_1__ match_data; } ;
struct TYPE_4__ {struct trace_array* tr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 struct hist_field* FUNC_1 (struct hist_trigger_data*,char*,char*,char*) ;
 struct hist_field* FUNC_2 (struct hist_trigger_data*,char*,char*,char*) ;
 int FUNC_3 (struct trace_array*,int ,int ) ;

__attribute__((used)) static struct hist_field *
FUNC_4(struct hist_trigger_data *VAR_2,
        struct action_data *VAR_3,
        char *VAR_4, char *VAR_5, char *VAR_6)
{
 struct trace_array *VAR_7 = VAR_2->event_file->tr;
 struct hist_field *VAR_8;

 VAR_6++;

 VAR_8 = FUNC_2(VAR_2, VAR_4, VAR_5, VAR_6);
 if (!VAR_8) {
  if (!VAR_4 && VAR_3->handler == VAR_0) {
   VAR_4 = VAR_3->match_data.event_system;
   VAR_5 = VAR_3->match_data.event;
  }

  VAR_8 = FUNC_1(VAR_2, VAR_4, VAR_5, VAR_6);
 }

 if (!VAR_8)
  FUNC_3(VAR_7, VAR_1, FUNC_0(VAR_6));

 return VAR_8;
}
