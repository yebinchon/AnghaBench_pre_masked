
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct tick_callback {int param; int (* tick ) (int ,float) ;} ;
struct TYPE_7__ {scalar_t__ next; } ;
struct obs_source {TYPE_3__ context; } ;
struct TYPE_6__ {size_t num; struct tick_callback* array; } ;
struct obs_core_data {int sources_mutex; struct obs_source* first_source; int draw_callbacks_mutex; TYPE_2__ tick_callbacks; } ;
struct TYPE_5__ {int video; } ;
struct TYPE_8__ {struct obs_core_data data; TYPE_1__ video; } ;


 TYPE_4__* VAR_0 ;
 struct obs_source* FUNC_0 (struct obs_source*) ;
 int FUNC_1 (struct obs_source*) ;
 int FUNC_2 (struct obs_source*,float) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,float) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static uint64_t FUNC_7(uint64_t VAR_1, uint64_t VAR_2)
{
 struct obs_core_data *VAR_3 = &VAR_0->data;
 struct obs_source *VAR_4;
 uint64_t VAR_5;
 float VAR_6;

 if (!VAR_2)
  VAR_2 = VAR_1 -
       FUNC_6(VAR_0->video.video);

 VAR_5 = VAR_1 - VAR_2;
 VAR_6 = (float)((double)VAR_5 / 1000000000.0);




 FUNC_3(&VAR_0->data.draw_callbacks_mutex);

 for (size_t VAR_7 = VAR_0->data.tick_callbacks.num; VAR_7 > 0; VAR_7--) {
  struct tick_callback *VAR_8;
  VAR_8 = VAR_0->data.tick_callbacks.array + (VAR_7 - 1);
  VAR_8->tick(VAR_8->param, VAR_6);
 }

 FUNC_4(&VAR_0->data.draw_callbacks_mutex);




 FUNC_3(&VAR_3->sources_mutex);

 VAR_4 = VAR_3->first_source;
 while (VAR_4) {
  struct obs_source *VAR_9 = FUNC_0(VAR_4);
  VAR_4 = (struct obs_source *)VAR_4->context.next;

  if (VAR_9) {
   FUNC_2(VAR_9, VAR_6);
   FUNC_1(VAR_9);
  }
 }

 FUNC_4(&VAR_3->sources_mutex);

 return VAR_1;
}
