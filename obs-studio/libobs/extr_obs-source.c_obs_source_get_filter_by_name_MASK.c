
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int name; } ;
struct TYPE_3__ {size_t num; struct obs_source** array; } ;
struct obs_source {int filter_mutex; TYPE_2__ context; TYPE_1__ filters; } ;
typedef struct obs_source obs_source_t ;


 int obs_ptr_valid (char const*,char*) ;
 int obs_source_addref (struct obs_source*) ;
 int obs_source_valid (struct obs_source*,char*) ;
 int pthread_mutex_lock (int *) ;
 int pthread_mutex_unlock (int *) ;
 scalar_t__ strcmp (int ,char const*) ;

obs_source_t *obs_source_get_filter_by_name(obs_source_t *source,
         const char *name)
{
 obs_source_t *filter = ((void*)0);

 if (!obs_source_valid(source, "obs_source_get_filter_by_name"))
  return ((void*)0);
 if (!obs_ptr_valid(name, "obs_source_get_filter_by_name"))
  return ((void*)0);

 pthread_mutex_lock(&source->filter_mutex);

 for (size_t i = 0; i < source->filters.num; i++) {
  struct obs_source *cur_filter = source->filters.array[i];
  if (strcmp(cur_filter->context.name, name) == 0) {
   filter = cur_filter;
   obs_source_addref(filter);
   break;
  }
 }

 pthread_mutex_unlock(&source->filter_mutex);

 return filter;
}
