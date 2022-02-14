
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct obs_core_data {int valid; int private_data; int tick_callbacks; int draw_callbacks; int draw_callbacks_mutex; int services_mutex; int encoders_mutex; int outputs_mutex; int displays_mutex; int audio_sources_mutex; int sources_mutex; int main_view; } ;
struct TYPE_2__ {struct obs_core_data data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_6(void)
{
 struct obs_core_data *VAR_7 = &VAR_3->data;

 VAR_7->valid = 0;

 FUNC_4(&VAR_7->main_view);

 FUNC_1(VAR_0, "Freeing OBS context data");

 FUNC_0(VAR_6);
 FUNC_0(VAR_4);
 FUNC_0(VAR_2);
 FUNC_0(VAR_1);
 FUNC_0(VAR_5);

 FUNC_5(&VAR_7->sources_mutex);
 FUNC_5(&VAR_7->audio_sources_mutex);
 FUNC_5(&VAR_7->displays_mutex);
 FUNC_5(&VAR_7->outputs_mutex);
 FUNC_5(&VAR_7->encoders_mutex);
 FUNC_5(&VAR_7->services_mutex);
 FUNC_5(&VAR_7->draw_callbacks_mutex);
 FUNC_2(VAR_7->draw_callbacks);
 FUNC_2(VAR_7->tick_callbacks);
 FUNC_3(VAR_7->private_data);
}
