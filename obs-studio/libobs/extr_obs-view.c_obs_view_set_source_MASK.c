
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct obs_source {int dummy; } ;
struct TYPE_3__ {int channels_mutex; struct obs_source** channels; } ;
typedef TYPE_1__ obs_view_t ;
typedef struct obs_source obs_source_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct obs_source*,int ) ;
 int FUNC_2 (struct obs_source*) ;
 int FUNC_3 (struct obs_source*,int ) ;
 int FUNC_4 (struct obs_source*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(obs_view_t *VAR_2, uint32_t VAR_3,
    obs_source_t *VAR_4)
{
 struct obs_source *VAR_5;

 FUNC_0(VAR_3 < VAR_1);

 if (!VAR_2)
  return;
 if (VAR_3 >= VAR_1)
  return;

 FUNC_5(&VAR_2->channels_mutex);

 FUNC_2(VAR_4);

 VAR_5 = VAR_2->channels[VAR_3];
 VAR_2->channels[VAR_3] = VAR_4;

 FUNC_6(&VAR_2->channels_mutex);

 if (VAR_4)
  FUNC_1(VAR_4, VAR_0);

 if (VAR_5) {
  FUNC_3(VAR_5, VAR_0);
  FUNC_4(VAR_5);
 }
}
