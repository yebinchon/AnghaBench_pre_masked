
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct calldata {int dummy; } ;
typedef int stack ;
struct TYPE_11__ {int data; int name; int signals; } ;
struct TYPE_10__ {int (* filter_remove ) (int ,int *) ;int id; } ;
struct TYPE_13__ {TYPE_3__** array; } ;
struct TYPE_12__ {int * filter_target; int * filter_parent; TYPE_2__ context; TYPE_1__ info; int filter_mutex; TYPE_6__ filters; } ;
typedef TYPE_3__ obs_source_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ,int ) ;
 int FUNC_1 (struct calldata*,int *,int) ;
 int FUNC_2 (struct calldata*,char*,TYPE_3__*) ;
 int FUNC_3 (TYPE_6__,size_t) ;
 size_t FUNC_4 (TYPE_6__,TYPE_3__**,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char*,struct calldata*) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static bool FUNC_9(obs_source_t *VAR_2,
          obs_source_t *VAR_3)
{
 struct calldata VAR_4;
 uint8_t VAR_5[128];
 size_t VAR_6;

 FUNC_5(&VAR_2->filter_mutex);

 VAR_6 = FUNC_4(VAR_2->filters, &VAR_3, 0);
 if (VAR_6 == VAR_0) {
  FUNC_6(&VAR_2->filter_mutex);
  return 0;
 }

 if (VAR_6 > 0) {
  obs_source_t *VAR_7 = VAR_2->filters.array[VAR_6 - 1];
  VAR_7->filter_target = VAR_3->filter_target;
 }

 FUNC_3(VAR_2->filters, VAR_6);

 FUNC_6(&VAR_2->filter_mutex);

 FUNC_1(&VAR_4, VAR_5, sizeof(VAR_5));
 FUNC_2(&VAR_4, "source", VAR_2);
 FUNC_2(&VAR_4, "filter", VAR_3);

 FUNC_7(VAR_2->context.signals, "filter_remove", &VAR_4);

 FUNC_0(VAR_1, "- filter '%s' (%s) removed from source '%s'",
      VAR_3->context.name, VAR_3->info.id, VAR_2->context.name);

 if (VAR_3->info.filter_remove)
  VAR_3->info.filter_remove(VAR_3->context.data,
        VAR_3->filter_parent);

 VAR_3->filter_parent = ((void*)0);
 VAR_3->filter_target = ((void*)0);
 return 1;
}
