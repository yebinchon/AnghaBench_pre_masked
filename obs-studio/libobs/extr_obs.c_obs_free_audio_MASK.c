
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct obs_core_audio {int monitoring_mutex; int monitoring_device_id; int monitoring_device_name; int monitors; int root_nodes; int render_order; int buffered_timestamps; scalar_t__ audio; } ;
struct TYPE_2__ {struct obs_core_audio audio; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct obs_core_audio*,int ,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(void)
{
 struct obs_core_audio *VAR_1 = &VAR_0->audio;
 if (VAR_1->audio)
  FUNC_0(VAR_1->audio);

 FUNC_2(&VAR_1->buffered_timestamps);
 FUNC_3(VAR_1->render_order);
 FUNC_3(VAR_1->root_nodes);

 FUNC_3(VAR_1->monitors);
 FUNC_1(VAR_1->monitoring_device_name);
 FUNC_1(VAR_1->monitoring_device_id);
 FUNC_5(&VAR_1->monitoring_mutex);

 FUNC_4(VAR_1, 0, sizeof(struct obs_core_audio));
}
