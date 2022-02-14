
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct obs_display {struct obs_display* next; } ;
struct TYPE_5__ {int displays_mutex; struct obs_display* first_display; int valid; } ;
struct TYPE_4__ {int graphics; } ;
struct TYPE_6__ {TYPE_2__ data; TYPE_1__ video; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 TYPE_3__* VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct obs_display*) ;

__attribute__((used)) static inline void FUNC_5(void)
{
 struct obs_display *VAR_1;

 if (!VAR_0->data.valid)
  return;

 FUNC_0(VAR_0->video.graphics);


 FUNC_2(&VAR_0->data.displays_mutex);

 VAR_1 = VAR_0->data.first_display;
 while (VAR_1) {
  FUNC_4(VAR_1);
  VAR_1 = VAR_1->next;
 }

 FUNC_3(&VAR_0->data.displays_mutex);

 FUNC_1();
}
