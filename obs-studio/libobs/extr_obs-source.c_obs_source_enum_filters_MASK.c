
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct obs_source {int dummy; } ;
struct TYPE_8__ {size_t num; struct obs_source** array; } ;
struct TYPE_9__ {int filter_mutex; TYPE_1__ filters; } ;
typedef TYPE_2__ obs_source_t ;
typedef int (* obs_source_enum_proc_t ) (TYPE_2__*,struct obs_source*,void*) ;


 int FUNC_0 (int (*) (TYPE_2__*,struct obs_source*,void*),char*) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(obs_source_t *VAR_0,
        obs_source_enum_proc_t VAR_1, void *VAR_2)
{
 if (!FUNC_1(VAR_0, "obs_source_enum_filters"))
  return;
 if (!FUNC_0(VAR_1, "obs_source_enum_filters"))
  return;

 FUNC_2(&VAR_0->filter_mutex);

 for (size_t VAR_3 = VAR_0->filters.num; VAR_3 > 0; VAR_3--) {
  struct obs_source *VAR_4 = VAR_0->filters.array[VAR_3 - 1];
  VAR_1(VAR_0, VAR_4, VAR_2);
 }

 FUNC_3(&VAR_0->filter_mutex);
}
