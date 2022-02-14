
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct obs_display {struct obs_display* next; struct obs_display** prev_next; int background_color; } ;
struct gs_init_data {int dummy; } ;
typedef struct obs_display obs_display_t ;
struct TYPE_5__ {int displays_mutex; struct obs_display* first_display; } ;
struct TYPE_4__ {int graphics; } ;
struct TYPE_6__ {TYPE_2__ data; TYPE_1__ video; } ;


 struct obs_display* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 TYPE_3__* VAR_0 ;
 int FUNC_3 (struct obs_display*) ;
 int FUNC_4 (struct obs_display*,struct gs_init_data const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

obs_display_t *FUNC_7(const struct gs_init_data *VAR_1,
      uint32_t VAR_2)
{
 struct obs_display *VAR_3 = FUNC_0(sizeof(struct obs_display));

 FUNC_1(VAR_0->video.graphics);

 VAR_3->background_color = VAR_2;

 if (!FUNC_4(VAR_3, VAR_1)) {
  FUNC_3(VAR_3);
  VAR_3 = ((void*)0);
 } else {
  FUNC_5(&VAR_0->data.displays_mutex);
  VAR_3->prev_next = &VAR_0->data.first_display;
  VAR_3->next = VAR_0->data.first_display;
  VAR_0->data.first_display = VAR_3;
  if (VAR_3->next)
   VAR_3->next->prev_next = &VAR_3->next;
  FUNC_6(&VAR_0->data.displays_mutex);
 }

 FUNC_2();

 return VAR_3;
}
