
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct obs_source_frame {int refs; } ;
struct TYPE_4__ {int async_mutex; } ;
typedef TYPE_1__ obs_source_t ;


 int FUNC_0 (struct obs_source_frame*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,struct obs_source_frame*) ;

void FUNC_5(obs_source_t *VAR_0,
         struct obs_source_frame *VAR_1)
{
 if (!VAR_1)
  return;

 if (!VAR_0) {
  FUNC_0(VAR_1);
 } else {
  FUNC_2(&VAR_0->async_mutex);

  if (FUNC_1(&VAR_1->refs) == 0)
   FUNC_0(VAR_1);
  else
   FUNC_4(VAR_0, VAR_1);

  FUNC_3(&VAR_0->async_mutex);
 }
}
