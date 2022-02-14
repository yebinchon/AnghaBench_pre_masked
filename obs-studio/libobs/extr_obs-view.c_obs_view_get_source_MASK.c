
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_3__ {int channels_mutex; int ** channels; } ;
typedef TYPE_1__ obs_view_t ;
typedef int obs_source_t ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

obs_source_t *FUNC_4(obs_view_t *VAR_1, uint32_t VAR_2)
{
 obs_source_t *VAR_3;
 FUNC_0(VAR_2 < VAR_0);

 if (!VAR_1)
  return ((void*)0);
 if (VAR_2 >= VAR_0)
  return ((void*)0);

 FUNC_2(&VAR_1->channels_mutex);

 VAR_3 = VAR_1->channels[VAR_2];
 if (VAR_3)
  FUNC_1(VAR_3);

 FUNC_3(&VAR_1->channels_mutex);

 return VAR_3;
}
