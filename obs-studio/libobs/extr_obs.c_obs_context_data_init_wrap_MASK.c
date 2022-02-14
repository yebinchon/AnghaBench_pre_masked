
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_context_data {int private; int type; void* hotkey_data; void* settings; int name; int procs; int signals; int rename_cache_mutex; } ;
typedef int obs_data_t ;
typedef enum obs_obj_type { ____Placeholder_obs_obj_type } obs_obj_type ;


 int FUNC_0 (struct obs_context_data*) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (struct obs_context_data*,int ,int) ;
 void* FUNC_3 (int *) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;

__attribute__((used)) static inline bool FUNC_8(struct obs_context_data *VAR_0,
           enum obs_obj_type VAR_1,
           obs_data_t *VAR_2,
           const char *VAR_3,
           obs_data_t *VAR_4,
           bool VAR_5)
{
 FUNC_0(VAR_0);
 FUNC_2(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->private = VAR_5;
 VAR_0->type = VAR_1;

 FUNC_6(&VAR_0->rename_cache_mutex);
 if (FUNC_5(&VAR_0->rename_cache_mutex, ((void*)0)) < 0)
  return 0;

 VAR_0->signals = FUNC_7();
 if (!VAR_0->signals)
  return 0;

 VAR_0->procs = FUNC_4();
 if (!VAR_0->procs)
  return 0;

 VAR_0->name = FUNC_1(VAR_3, VAR_5);
 VAR_0->settings = FUNC_3(VAR_2);
 VAR_0->hotkey_data = FUNC_3(VAR_4);
 return 1;
}
