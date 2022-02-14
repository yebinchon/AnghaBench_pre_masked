
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int type_data; int (* get_defaults2 ) (int ,int ) ;int (* get_defaults ) (int ) ;} ;
struct TYPE_6__ {int settings; } ;
struct TYPE_4__ {int mutex; } ;
struct obs_encoder {TYPE_2__ orig_info; TYPE_3__ context; TYPE_1__ pause; int outputs_mutex; int callbacks_mutex; int init_mutex; } ;
typedef int pthread_mutexattr_t ;
typedef int obs_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,int *,char const*,int *,int) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static bool FUNC_7(struct obs_encoder *VAR_2, const char *VAR_3,
    obs_data_t *VAR_4, obs_data_t *VAR_5)
{
 pthread_mutexattr_t VAR_6;

 FUNC_2(&VAR_2->init_mutex);
 FUNC_2(&VAR_2->callbacks_mutex);
 FUNC_2(&VAR_2->outputs_mutex);
 FUNC_2(&VAR_2->pause.mutex);

 if (FUNC_3(&VAR_6) != 0)
  return 0;
 if (FUNC_4(&VAR_6, VAR_1) != 0)
  return 0;
 if (!FUNC_0(&VAR_2->context, VAR_0,
       VAR_4, VAR_3, VAR_5, 0))
  return 0;
 if (FUNC_1(&VAR_2->init_mutex, &VAR_6) != 0)
  return 0;
 if (FUNC_1(&VAR_2->callbacks_mutex, &VAR_6) != 0)
  return 0;
 if (FUNC_1(&VAR_2->outputs_mutex, ((void*)0)) != 0)
  return 0;
 if (FUNC_1(&VAR_2->pause.mutex, ((void*)0)) != 0)
  return 0;

 if (VAR_2->orig_info.get_defaults) {
  VAR_2->orig_info.get_defaults(VAR_2->context.settings);
 }
 if (VAR_2->orig_info.get_defaults2) {
  VAR_2->orig_info.get_defaults2(VAR_2->context.settings,
       VAR_2->orig_info.type_data);
 }

 return 1;
}
