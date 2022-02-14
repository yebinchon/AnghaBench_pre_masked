
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int XLogRecPtr ;
struct TYPE_2__ {int info_lck; int replicationSlotMinLSN; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_0 ;

void
FUNC_2(XLogRecPtr VAR_1)
{
 FUNC_0(&VAR_0->info_lck);
 VAR_0->replicationSlotMinLSN = VAR_1;
 FUNC_1(&VAR_0->info_lck);
}
