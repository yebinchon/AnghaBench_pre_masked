
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vec4 {int dummy; } ;
struct obs_core_video {int texture_rendered; int base_height; int base_width; int render_texture; } ;
struct draw_callback {int param; int (* draw ) (int ,int ,int ) ;} ;
struct TYPE_4__ {size_t num; struct draw_callback* array; } ;
struct TYPE_5__ {int main_view; int draw_callbacks_mutex; TYPE_1__ draw_callbacks; } ;
struct TYPE_6__ {TYPE_2__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,struct vec4*,float,int ) ;
 int FUNC_3 (int ,int *) ;
 TYPE_3__* VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_3 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (struct vec4*,float,float,float,float) ;

__attribute__((used)) static inline void FUNC_12(struct obs_core_video *VAR_4)
{
 FUNC_6(VAR_3);
 FUNC_0(VAR_1,
         VAR_3);

 struct vec4 VAR_5;
 FUNC_11(&VAR_5, 0.0f, 0.0f, 0.0f, 0.0f);

 FUNC_3(VAR_4->render_texture, ((void*)0));
 FUNC_2(VAR_0, &VAR_5, 1.0f, 0);

 FUNC_9(VAR_4->base_width, VAR_4->base_height);

 FUNC_7(&VAR_2->data.draw_callbacks_mutex);

 for (size_t VAR_6 = VAR_2->data.draw_callbacks.num; VAR_6 > 0; VAR_6--) {
  struct draw_callback *VAR_7;
  VAR_7 = VAR_2->data.draw_callbacks.array + (VAR_6 - 1);

  VAR_7->draw(VAR_7->param, VAR_4->base_width,
          VAR_4->base_height);
 }

 FUNC_8(&VAR_2->data.draw_callbacks_mutex);

 FUNC_4(&VAR_2->data.main_view);

 VAR_4->texture_rendered = 1;

 FUNC_1();
 FUNC_5(VAR_3);
}
