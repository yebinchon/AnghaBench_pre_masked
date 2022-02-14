
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {size_t num; struct draw_callback* array; } ;
struct obs_display {int size_changed; int draw_callbacks_mutex; TYPE_1__ draw_callbacks; int draw_info_mutex; int cy; int cx; int enabled; } ;
struct draw_callback {int param; int (* draw ) (int ,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct obs_display*,int ,int ,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ,int ) ;

void FUNC_8(struct obs_display *VAR_1)
{
 uint32_t VAR_2, VAR_3;
 bool VAR_4;

 if (!VAR_1 || !VAR_1->enabled)
  return;

 FUNC_0(VAR_0, "obs_display");



 FUNC_3(&VAR_1->draw_info_mutex);

 VAR_2 = VAR_1->cx;
 VAR_3 = VAR_1->cy;
 VAR_4 = VAR_1->size_changed;

 if (VAR_4)
  VAR_1->size_changed = 0;

 FUNC_4(&VAR_1->draw_info_mutex);



 FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4);

 FUNC_3(&VAR_1->draw_callbacks_mutex);

 for (size_t VAR_5 = 0; VAR_5 < VAR_1->draw_callbacks.num; VAR_5++) {
  struct draw_callback *VAR_6;
  VAR_6 = VAR_1->draw_callbacks.array + VAR_5;

  VAR_6->draw(VAR_6->param, VAR_2, VAR_3);
 }

 FUNC_4(&VAR_1->draw_callbacks_mutex);

 FUNC_6();

 FUNC_1();

 FUNC_2();
}
