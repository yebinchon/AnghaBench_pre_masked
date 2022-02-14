
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct encoder_callback {int member_0; void (* member_1 ) (void*,struct encoder_packet*) ;void* member_2; } ;
struct TYPE_9__ {scalar_t__ num; } ;
struct TYPE_7__ {int data; } ;
struct TYPE_8__ {scalar_t__ cur_pts; int pause; int paused; int callbacks_mutex; TYPE_5__ callbacks; TYPE_1__ context; } ;
typedef TYPE_2__ obs_encoder_t ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_5__,struct encoder_callback*) ;
 size_t FUNC_2 (TYPE_2__*,void (*) (void*,struct encoder_packet*),void*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static inline void FUNC_7(
 obs_encoder_t *VAR_1,
 void (*VAR_2)(void *VAR_3, struct encoder_packet *VAR_4),
 void *VAR_5)
{
 struct encoder_callback VAR_6 = {0, VAR_2, VAR_5};
 bool VAR_7 = 0;

 if (!VAR_1->context.data)
  return;

 FUNC_5(&VAR_1->callbacks_mutex);

 VAR_7 = (VAR_1->callbacks.num == 0);

 size_t VAR_8 = FUNC_2(VAR_1, VAR_2, VAR_5);
 if (VAR_8 == VAR_0)
  FUNC_1(VAR_1->callbacks, &VAR_6);

 FUNC_6(&VAR_1->callbacks_mutex);

 if (VAR_7) {
  FUNC_3(&VAR_1->paused, 0);
  FUNC_4(&VAR_1->pause);

  VAR_1->cur_pts = 0;
  FUNC_0(VAR_1);
 }
}
