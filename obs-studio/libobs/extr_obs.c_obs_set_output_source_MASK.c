
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct obs_view {int channels_mutex; struct obs_source** channels; } ;
struct obs_source {int dummy; } ;
struct calldata {int member_0; } ;
typedef struct obs_source obs_source_t ;
struct TYPE_3__ {struct obs_view main_view; } ;
struct TYPE_4__ {int signals; TYPE_1__ data; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct calldata*) ;
 int FUNC_2 (struct calldata*,char*,struct obs_source**) ;
 int FUNC_3 (struct calldata*,char*,size_t) ;
 int FUNC_4 (struct calldata*,char*,struct obs_source*) ;
 TYPE_2__* VAR_2 ;
 int FUNC_5 (struct obs_source*,int ) ;
 int FUNC_6 (struct obs_source*) ;
 int FUNC_7 (struct obs_source*,int ) ;
 int FUNC_8 (struct obs_source*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,char*,struct calldata*) ;

void FUNC_12(uint32_t VAR_3, obs_source_t *VAR_4)
{
 FUNC_0(VAR_3 < VAR_1);

 if (!VAR_2)
  return;
 if (VAR_3 >= VAR_1)
  return;

 struct obs_source *VAR_5;
 struct obs_view *VAR_6 = &VAR_2->data.main_view;
 struct calldata VAR_7 = {0};

 FUNC_9(&VAR_6->channels_mutex);

 FUNC_6(VAR_4);

 VAR_5 = VAR_6->channels[VAR_3];

 FUNC_3(&VAR_7, "channel", VAR_3);
 FUNC_4(&VAR_7, "prev_source", VAR_5);
 FUNC_4(&VAR_7, "source", VAR_4);
 FUNC_11(VAR_2->signals, "channel_change", &VAR_7);
 FUNC_2(&VAR_7, "source", &VAR_4);
 FUNC_1(&VAR_7);

 VAR_6->channels[VAR_3] = VAR_4;

 FUNC_10(&VAR_6->channels_mutex);

 if (VAR_4)
  FUNC_5(VAR_4, VAR_0);

 if (VAR_5) {
  FUNC_7(VAR_5, VAR_0);
  FUNC_8(VAR_5);
 }
}
