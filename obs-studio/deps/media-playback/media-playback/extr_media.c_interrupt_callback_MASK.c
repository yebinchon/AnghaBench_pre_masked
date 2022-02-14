
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int interrupt_poll_ts; int mutex; scalar_t__ stopping; scalar_t__ kill; } ;
typedef TYPE_1__ mp_media_t ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(void *VAR_0)
{
 mp_media_t *VAR_1 = VAR_0;
 bool VAR_2 = 0;
 uint64_t VAR_3 = FUNC_0();

 if ((VAR_3 - VAR_1->interrupt_poll_ts) > 20000000) {
  FUNC_1(&VAR_1->mutex);
  VAR_2 = VAR_1->kill || VAR_1->stopping;
  FUNC_2(&VAR_1->mutex);

  VAR_1->interrupt_poll_ts = VAR_3;
 }

 return VAR_2;
}
