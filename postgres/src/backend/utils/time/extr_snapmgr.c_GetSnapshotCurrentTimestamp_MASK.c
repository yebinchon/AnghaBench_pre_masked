
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ TimestampTz ;
struct TYPE_2__ {scalar_t__ current_timestamp; int mutex_current; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* VAR_0 ;

TimestampTz
FUNC_3(void)
{
 TimestampTz VAR_1 = FUNC_0();




 FUNC_1(&VAR_0->mutex_current);
 if (VAR_1 <= VAR_0->current_timestamp)
  VAR_1 = VAR_0->current_timestamp;
 else
  VAR_0->current_timestamp = VAR_1;
 FUNC_2(&VAR_0->mutex_current);

 return VAR_1;
}
