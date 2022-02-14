
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
struct TYPE_2__ {scalar_t__ num; struct item_action* array; } ;
struct obs_scene_item {int actions_mutex; TYPE_1__ audio_actions; } ;
struct item_action {unsigned long long timestamp; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct obs_scene_item*,float**,unsigned long long,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(struct obs_scene_item *VAR_1, float **VAR_2,
        uint64_t VAR_3, size_t VAR_4)
{
 bool VAR_5;
 struct item_action VAR_6;

 FUNC_1(&VAR_1->actions_mutex);

 VAR_5 = VAR_1->audio_actions.num > 0;
 if (VAR_5)
  VAR_6 = VAR_1->audio_actions.array[0];

 FUNC_2(&VAR_1->actions_mutex);

 if (VAR_5) {
  uint64_t VAR_7 = (uint64_t)VAR_0 *
        1000000000ULL / (uint64_t)VAR_4;

  if (!VAR_3 || VAR_6.timestamp < (VAR_3 + VAR_7)) {
   FUNC_0(VAR_1, VAR_2, VAR_3,
             VAR_4);
   return 1;
  }
 }

 return 0;
}
