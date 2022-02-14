
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ num; } ;
struct TYPE_7__ {int initialized; int init_mutex; scalar_t__ destroy_on_stop; int callbacks_mutex; TYPE_6__ callbacks; } ;
typedef TYPE_1__ obs_encoder_t ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_6__,size_t) ;
 size_t FUNC_1 (TYPE_1__*,void (*) (void*,struct encoder_packet*),void*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int) ;

__attribute__((used)) static inline bool FUNC_6(
 obs_encoder_t *VAR_1,
 void (*VAR_2)(void *VAR_3, struct encoder_packet *VAR_4),
 void *VAR_5)
{
 bool VAR_6 = 0;
 size_t VAR_7;

 FUNC_3(&VAR_1->callbacks_mutex);

 VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_5);
 if (VAR_7 != VAR_0) {
  FUNC_0(VAR_1->callbacks, VAR_7);
  VAR_6 = (VAR_1->callbacks.num == 0);
 }

 FUNC_4(&VAR_1->callbacks_mutex);

 if (VAR_6) {
  FUNC_5(VAR_1, 1);
  VAR_1->initialized = 0;

  if (VAR_1->destroy_on_stop) {
   FUNC_4(&VAR_1->init_mutex);
   FUNC_2(VAR_1);
   return 1;
  }
 }

 return 0;
}
