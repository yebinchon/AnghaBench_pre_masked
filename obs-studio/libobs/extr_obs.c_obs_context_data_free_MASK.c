
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t num; int * array; } ;
struct obs_context_data {TYPE_1__ rename_cache; int name; int rename_cache_mutex; int settings; int procs; int signals; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__) ;
 int FUNC_2 (struct obs_context_data*,int ,int) ;
 int FUNC_3 (struct obs_context_data*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct obs_context_data*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;

void FUNC_9(struct obs_context_data *VAR_0)
{
 FUNC_5(VAR_0);
 FUNC_8(VAR_0->signals);
 FUNC_6(VAR_0->procs);
 FUNC_4(VAR_0->settings);
 FUNC_3(VAR_0);
 FUNC_7(&VAR_0->rename_cache_mutex);
 FUNC_0(VAR_0->name);

 for (size_t VAR_1 = 0; VAR_1 < VAR_0->rename_cache.num; VAR_1++)
  FUNC_0(VAR_0->rename_cache.array[VAR_1]);
 FUNC_1(VAR_0->rename_cache);

 FUNC_2(VAR_0, 0, sizeof(*VAR_0));
}
