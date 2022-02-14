
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_event_file {int dummy; } ;
struct hist_trigger_data {int map; int remove; } ;
struct TYPE_2__ {int idx; struct hist_field* name; struct hist_trigger_data* hist_data; } ;
struct hist_field {int size; struct hist_field* type; TYPE_1__ var; struct hist_trigger_data* hist_data; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hist_field* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct hist_trigger_data*,struct trace_event_file*,char*) ;
 int FUNC_2 (struct hist_field*) ;
 void* FUNC_3 (char const*,int ) ;
 struct hist_field* FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static struct hist_field *FUNC_6(struct hist_trigger_data *VAR_4,
         struct trace_event_file *VAR_5,
         char *VAR_6, int VAR_7, const char *VAR_8)
{
 struct hist_field *VAR_9;
 int VAR_10;

 if (FUNC_1(VAR_4, VAR_5, VAR_6) && !VAR_4->remove) {
  VAR_9 = FUNC_0(-VAR_0);
  goto out;
 }

 VAR_9 = FUNC_4(sizeof(struct hist_field), VAR_2);
 if (!VAR_9) {
  VAR_9 = FUNC_0(-VAR_1);
  goto out;
 }

 VAR_10 = FUNC_5(VAR_4->map);
 if (VAR_10 < 0) {
  FUNC_2(VAR_9);
  VAR_9 = FUNC_0(-VAR_0);
  goto out;
 }

 VAR_9->flags = VAR_3;
 VAR_9->var.idx = VAR_10;
 VAR_9->var.hist_data = VAR_9->hist_data = VAR_4;
 VAR_9->size = VAR_7;
 VAR_9->var.name = FUNC_3(VAR_6, VAR_2);
 VAR_9->type = FUNC_3(VAR_8, VAR_2);
 if (!VAR_9->var.name || !VAR_9->type) {
  FUNC_2(VAR_9->var.name);
  FUNC_2(VAR_9->type);
  FUNC_2(VAR_9);
  VAR_9 = FUNC_0(-VAR_1);
 }
 out:
 return VAR_9;
}
