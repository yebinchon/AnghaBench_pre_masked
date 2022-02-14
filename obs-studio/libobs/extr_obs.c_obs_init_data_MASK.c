
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct obs_core_data {int valid; int private_data; int main_view; int draw_callbacks_mutex; int services_mutex; int encoders_mutex; int outputs_mutex; int displays_mutex; int audio_sources_mutex; int sources_mutex; } ;
typedef int pthread_mutexattr_t ;
struct TYPE_2__ {struct obs_core_data data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int ) ;

__attribute__((used)) static bool FUNC_8(void)
{
 struct obs_core_data *VAR_2 = &VAR_1->data;
 pthread_mutexattr_t VAR_3;

 FUNC_0(VAR_2 != ((void*)0));

 FUNC_4(&VAR_1->data.displays_mutex);
 FUNC_4(&VAR_1->data.draw_callbacks_mutex);

 if (FUNC_6(&VAR_3) != 0)
  return 0;
 if (FUNC_7(&VAR_3, VAR_0) != 0)
  goto fail;
 if (FUNC_3(&VAR_2->sources_mutex, &VAR_3) != 0)
  goto fail;
 if (FUNC_3(&VAR_2->audio_sources_mutex, &VAR_3) != 0)
  goto fail;
 if (FUNC_3(&VAR_2->displays_mutex, &VAR_3) != 0)
  goto fail;
 if (FUNC_3(&VAR_2->outputs_mutex, &VAR_3) != 0)
  goto fail;
 if (FUNC_3(&VAR_2->encoders_mutex, &VAR_3) != 0)
  goto fail;
 if (FUNC_3(&VAR_2->services_mutex, &VAR_3) != 0)
  goto fail;
 if (FUNC_3(&VAR_1->data.draw_callbacks_mutex, &VAR_3) != 0)
  goto fail;
 if (!FUNC_2(&VAR_2->main_view))
  goto fail;

 VAR_2->private_data = FUNC_1();
 VAR_2->valid = 1;

fail:
 FUNC_5(&VAR_3);
 return VAR_2->valid;
}
