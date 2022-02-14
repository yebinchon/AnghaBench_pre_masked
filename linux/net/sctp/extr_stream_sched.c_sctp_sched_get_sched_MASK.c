
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sched; } ;
struct sctp_association {TYPE_1__ outqueue; } ;


 int VAR_0 ;
 scalar_t__* VAR_1 ;

int FUNC_0(struct sctp_association *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 <= VAR_0; VAR_3++)
  if (VAR_2->outqueue.sched == VAR_1[VAR_3])
   return VAR_3;

 return 0;
}
