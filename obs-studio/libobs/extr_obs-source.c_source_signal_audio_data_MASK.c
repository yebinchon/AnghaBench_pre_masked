
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct audio_data {int dummy; } ;
struct audio_cb_info {int param; int (* callback ) (int ,TYPE_2__*,struct audio_data const*,int) ;} ;
struct TYPE_5__ {size_t num; struct audio_cb_info* array; } ;
struct TYPE_6__ {int audio_cb_mutex; TYPE_1__ audio_cb_list; } ;
typedef TYPE_2__ obs_source_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,TYPE_2__*,struct audio_data const*,int) ;

__attribute__((used)) static void FUNC_3(obs_source_t *VAR_0,
         const struct audio_data *VAR_1, bool VAR_2)
{
 FUNC_0(&VAR_0->audio_cb_mutex);

 for (size_t VAR_3 = VAR_0->audio_cb_list.num; VAR_3 > 0; VAR_3--) {
  struct audio_cb_info VAR_4 = VAR_0->audio_cb_list.array[VAR_3 - 1];
  VAR_4.callback(VAR_4.param, VAR_0, VAR_1, VAR_2);
 }

 FUNC_1(&VAR_0->audio_cb_mutex);
}
