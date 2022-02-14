
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TimestampTz ;
struct TYPE_2__ {int mutex_threshold; int threshold_timestamp; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_0 ;

TimestampTz
FUNC_2(void)
{
 TimestampTz VAR_1;

 FUNC_0(&VAR_0->mutex_threshold);
 VAR_1 = VAR_0->threshold_timestamp;
 FUNC_1(&VAR_0->mutex_threshold);

 return VAR_1;
}
