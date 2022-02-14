
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* array; } ;
struct signal_info {int mutex; TYPE_6__ callbacks; scalar_t__ signalling; } ;
struct TYPE_8__ {int refs; } ;
typedef TYPE_2__ signal_handler_t ;
typedef int signal_callback_t ;
struct TYPE_7__ {int remove; int keep_ref; } ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_6__,size_t) ;
 struct signal_info* FUNC_1 (TYPE_2__*,char const*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 size_t FUNC_5 (struct signal_info*,int ,void*) ;
 int FUNC_6 (TYPE_2__*) ;

void FUNC_7(signal_handler_t *VAR_1, const char *VAR_2,
          signal_callback_t VAR_3, void *VAR_4)
{
 struct signal_info *VAR_5 = FUNC_1(VAR_1, VAR_2);
 bool VAR_6 = 0;
 size_t VAR_7;

 if (!VAR_5)
  return;

 FUNC_3(&VAR_5->mutex);

 VAR_7 = FUNC_5(VAR_5, VAR_3, VAR_4);
 if (VAR_7 != VAR_0) {
  if (VAR_5->signalling) {
   VAR_5->callbacks.array[VAR_7].remove = 1;
  } else {
   VAR_6 = VAR_5->callbacks.array[VAR_7].keep_ref;
   FUNC_0(VAR_5->callbacks, VAR_7);
  }
 }

 FUNC_4(&VAR_5->mutex);

 if (VAR_6 && FUNC_2(&VAR_1->refs) == 0) {
  FUNC_6(VAR_1);
 }
}
