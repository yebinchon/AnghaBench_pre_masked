
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TransactionId ;
typedef int TimestampTz ;
struct TYPE_2__ {int mutex_threshold; int threshold_xid; int threshold_timestamp; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void
FUNC_2(TimestampTz VAR_1, TransactionId VAR_2)
{
 FUNC_0(&VAR_0->mutex_threshold);
 VAR_0->threshold_timestamp = VAR_1;
 VAR_0->threshold_xid = VAR_2;
 FUNC_1(&VAR_0->mutex_threshold);
}
