
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct obs_core {int dummy; } ;
typedef int profiler_name_store_t ;
struct TYPE_5__ {int gpu_encoder_mutex; } ;
struct TYPE_6__ {int monitoring_mutex; } ;
struct TYPE_7__ {int name_store_owned; void* locale; void* module_config_path; int * name_store; TYPE_1__ video; TYPE_2__ audio; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 void* FUNC_2 (char const*) ;
 TYPE_3__* FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 () ;
 TYPE_3__* VAR_3 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int * FUNC_9 () ;
 int FUNC_10 (int *) ;
 int VAR_4 ;

__attribute__((used)) static bool FUNC_11(const char *VAR_5, const char *VAR_6,
       profiler_name_store_t *VAR_7)
{
 VAR_3 = FUNC_3(sizeof(struct obs_core));

 FUNC_10(&VAR_3->audio.monitoring_mutex);
 FUNC_10(&VAR_3->video.gpu_encoder_mutex);

 VAR_3->name_store_owned = !VAR_7;
 VAR_3->name_store = VAR_7 ? VAR_7 : FUNC_9();
 if (!VAR_3->name_store) {
  FUNC_1(VAR_0, "Couldn't create profiler name store");
  return 0;
 }

 FUNC_4();

 if (!FUNC_5())
  return 0;
 if (!FUNC_6())
  return 0;
 if (!FUNC_7())
  return 0;

 if (VAR_6)
  VAR_3->module_config_path = FUNC_2(VAR_6);
 VAR_3->locale = FUNC_2(VAR_5);
 FUNC_8(&VAR_4);
 FUNC_8(&VAR_2);
 FUNC_8(&VAR_1);
 FUNC_0();
 return 1;
}
