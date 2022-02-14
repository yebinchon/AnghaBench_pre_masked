
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_array {int dummy; } ;
struct hist_trigger_data {TYPE_1__* event_file; } ;
struct hist_field {int dummy; } ;
struct TYPE_2__ {struct trace_array* tr; } ;


 int VAR_0 ;
 struct hist_field* FUNC_0 (struct hist_trigger_data*,struct hist_field*,char*,char*) ;
 int FUNC_1 (char*) ;
 struct hist_field* FUNC_2 (struct hist_trigger_data*,char*,char*,char*) ;
 int FUNC_3 (struct trace_array*,int ,int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static struct hist_field *FUNC_5(struct hist_trigger_data *VAR_1,
     char *VAR_2, char *VAR_3,
     char *VAR_4)
{
 struct hist_field *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
 struct trace_array *VAR_7 = VAR_1->event_file->tr;

 if (!FUNC_4(VAR_4))
  return ((void*)0);

 VAR_4++;

 VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_5)
  VAR_6 = FUNC_0(VAR_1, VAR_5,
        VAR_2, VAR_3);

 if (!VAR_6)
  FUNC_3(VAR_7, VAR_0, FUNC_1(VAR_4));

 return VAR_6;
}
