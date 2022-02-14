
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracing_map_ops {int dummy; } ;
struct trace_event_file {int dummy; } ;
struct hist_trigger_data {int remove; struct hist_trigger_attrs* attrs; int * map; int key_size; struct trace_event_file* event_file; } ;
struct hist_trigger_attrs {int dummy; } ;


 int VAR_0 ;
 struct hist_trigger_data* FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct hist_trigger_data*,struct trace_event_file*) ;
 int FUNC_4 (struct hist_trigger_data*) ;
 int FUNC_5 (struct hist_trigger_data*) ;
 int FUNC_6 (struct hist_trigger_data*) ;
 struct tracing_map_ops VAR_2 ;
 struct hist_trigger_data* FUNC_7 (int,int ) ;
 int FUNC_8 (struct hist_trigger_data*) ;
 int * FUNC_9 (unsigned int,int ,struct tracing_map_ops const*,struct hist_trigger_data*) ;

__attribute__((used)) static struct hist_trigger_data *
FUNC_10(unsigned int VAR_3,
   struct hist_trigger_attrs *VAR_4,
   struct trace_event_file *VAR_5,
   bool VAR_6)
{
 const struct tracing_map_ops *VAR_7 = ((void*)0);
 struct hist_trigger_data *VAR_8;
 int VAR_9 = 0;

 VAR_8 = FUNC_7(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return FUNC_0(-VAR_0);

 VAR_8->attrs = VAR_4;
 VAR_8->remove = VAR_6;
 VAR_8->event_file = VAR_5;

 VAR_9 = FUNC_8(VAR_8);
 if (VAR_9)
  goto free;

 VAR_9 = FUNC_3(VAR_8, VAR_5);
 if (VAR_9)
  goto free;

 VAR_9 = FUNC_4(VAR_8);
 if (VAR_9)
  goto free;

 VAR_7 = &VAR_2;

 VAR_8->map = FUNC_9(VAR_3, VAR_8->key_size,
         VAR_7, VAR_8);
 if (FUNC_1(VAR_8->map)) {
  VAR_9 = FUNC_2(VAR_8->map);
  VAR_8->map = ((void*)0);
  goto free;
 }

 VAR_9 = FUNC_5(VAR_8);
 if (VAR_9)
  goto free;
 out:
 return VAR_8;
 free:
 VAR_8->attrs = ((void*)0);

 FUNC_6(VAR_8);

 VAR_8 = FUNC_0(VAR_9);

 goto out;
}
