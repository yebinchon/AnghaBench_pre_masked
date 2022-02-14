
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct obs_output_info {int (* create ) (int ,struct obs_output*) ;int (* get_defaults ) (int ) ;int id; } ;
struct TYPE_9__ {int data; int settings; } ;
struct TYPE_6__ {int mutex; } ;
struct obs_output {int owns_info_id; int reconnect_retry_sec; int reconnect_retry_max; int valid; TYPE_4__ context; TYPE_2__* control; int reconnect_stop_event; struct obs_output_info info; int audio; int video; int stopping_event; TYPE_1__ pause; int caption_mutex; int delay_mutex; int interleaved_mutex; } ;
typedef int obs_weak_output_t ;
typedef struct obs_output obs_output_t ;
typedef int obs_data_t ;
struct TYPE_8__ {int first_output; int outputs_mutex; } ;
struct TYPE_10__ {TYPE_3__ data; } ;
struct TYPE_7__ {struct obs_output* output; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char const*,...) ;
 int FUNC_1 (char const*) ;
 void* FUNC_2 (int) ;
 struct obs_output_info* FUNC_3 (char const*) ;
 int FUNC_4 (struct obs_output*,char const*,int *,int *) ;
 TYPE_5__* VAR_3 ;
 int FUNC_5 (TYPE_4__*,int *,int *) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct obs_output*) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int *,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,struct obs_output*) ;

obs_output_t *FUNC_15(const char *VAR_4, const char *VAR_5,
    obs_data_t *VAR_6, obs_data_t *VAR_7)
{
 const struct obs_output_info *VAR_8 = FUNC_3(VAR_4);
 struct obs_output *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_2(sizeof(struct obs_output));
 FUNC_12(&VAR_9->interleaved_mutex);
 FUNC_12(&VAR_9->delay_mutex);
 FUNC_12(&VAR_9->caption_mutex);
 FUNC_12(&VAR_9->pause.mutex);

 if (FUNC_11(&VAR_9->interleaved_mutex, ((void*)0)) != 0)
  goto fail;
 if (FUNC_11(&VAR_9->delay_mutex, ((void*)0)) != 0)
  goto fail;
 if (FUNC_11(&VAR_9->caption_mutex, ((void*)0)) != 0)
  goto fail;
 if (FUNC_11(&VAR_9->pause.mutex, ((void*)0)) != 0)
  goto fail;
 if (FUNC_9(&VAR_9->stopping_event, VAR_2) != 0)
  goto fail;
 if (!FUNC_4(VAR_9, VAR_5, VAR_6, VAR_7))
  goto fail;

 FUNC_10(VAR_9->stopping_event);

 if (!VAR_8) {
  FUNC_0(VAR_1, "Output ID '%s' not found", VAR_4);

  VAR_9->info.id = FUNC_1(VAR_4);
  VAR_9->owns_info_id = 1;
 } else {
  VAR_9->info = *VAR_8;
 }
 VAR_9->video = FUNC_7();
 VAR_9->audio = FUNC_6();
 if (VAR_9->info.get_defaults)
  VAR_9->info.get_defaults(VAR_9->context.settings);

 VAR_10 = FUNC_9(&VAR_9->reconnect_stop_event,
       VAR_2);
 if (VAR_10 < 0)
  goto fail;

 VAR_9->reconnect_retry_sec = 2;
 VAR_9->reconnect_retry_max = 20;
 VAR_9->valid = 1;

 VAR_9->control = FUNC_2(sizeof(obs_weak_output_t));
 VAR_9->control->output = VAR_9;

 FUNC_5(&VAR_9->context, &VAR_3->data.outputs_mutex,
    &VAR_3->data.first_output);

 if (VAR_8)
  VAR_9->context.data =
   VAR_8->create(VAR_9->context.settings, VAR_9);
 if (!VAR_9->context.data)
  FUNC_0(VAR_1, "Failed to create output '%s'!", VAR_5);

 FUNC_0(VAR_0, "output '%s' (%s) created", VAR_5, VAR_4);
 return VAR_9;

fail:
 FUNC_8(VAR_9);
 return ((void*)0);
}
