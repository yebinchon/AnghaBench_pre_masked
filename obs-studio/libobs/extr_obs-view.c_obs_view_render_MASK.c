
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct obs_source {scalar_t__ removed; } ;
struct TYPE_3__ {int channels_mutex; struct obs_source** channels; } ;
typedef TYPE_1__ obs_view_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct obs_source*) ;
 int FUNC_1 (struct obs_source*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(obs_view_t *VAR_1)
{
 if (!VAR_1)
  return;

 FUNC_2(&VAR_1->channels_mutex);

 for (size_t VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  struct obs_source *VAR_3;

  VAR_3 = VAR_1->channels[VAR_2];

  if (VAR_3) {
   if (VAR_3->removed) {
    FUNC_0(VAR_3);
    VAR_1->channels[VAR_2] = ((void*)0);
   } else {
    FUNC_1(VAR_3);
   }
  }
 }

 FUNC_3(&VAR_1->channels_mutex);
}
