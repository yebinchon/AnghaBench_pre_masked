
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct obs_core_data {int sources_mutex; TYPE_3__* first_source; } ;
struct TYPE_9__ {scalar_t__ next; int private; } ;
struct TYPE_8__ {scalar_t__ type; } ;
struct TYPE_10__ {TYPE_2__ context; TYPE_1__ info; } ;
typedef TYPE_3__ obs_source_t ;
typedef scalar_t__ (* obs_save_source_filter_cb ) (void*,TYPE_3__*) ;
typedef int obs_data_t ;
typedef int obs_data_array_t ;
struct TYPE_11__ {struct obs_core_data data; } ;


 scalar_t__ VAR_0 ;
 TYPE_7__* VAR_1 ;
 int * FUNC_0 () ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

obs_data_array_t *FUNC_6(obs_save_source_filter_cb VAR_2,
         void *VAR_3)
{
 if (!VAR_1)
  return ((void*)0);

 struct obs_core_data *VAR_4 = &VAR_1->data;
 obs_data_array_t *VAR_5;
 obs_source_t *VAR_6;

 VAR_5 = FUNC_0();

 FUNC_4(&VAR_4->sources_mutex);

 VAR_6 = VAR_4->first_source;

 while (VAR_6) {
  if ((VAR_6->info.type != VAR_0) != 0 &&
      !VAR_6->context.private && VAR_2(VAR_3, VAR_6)) {
   obs_data_t *VAR_7 = FUNC_3(VAR_6);

   FUNC_1(VAR_5, VAR_7);
   FUNC_2(VAR_7);
  }

  VAR_6 = (obs_source_t *)VAR_6->context.next;
 }

 FUNC_5(&VAR_4->sources_mutex);

 return VAR_5;
}
