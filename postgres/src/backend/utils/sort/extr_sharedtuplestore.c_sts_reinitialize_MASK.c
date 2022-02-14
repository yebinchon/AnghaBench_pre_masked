
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* sts; } ;
struct TYPE_6__ {int nparticipants; TYPE_1__* participants; } ;
struct TYPE_5__ {scalar_t__ read_page; } ;
typedef TYPE_3__ SharedTuplestoreAccessor ;



void
FUNC_0(SharedTuplestoreAccessor *VAR_0)
{
 int VAR_1;






 for (VAR_1 = 0; VAR_1 < VAR_0->sts->nparticipants; ++VAR_1)
 {
  VAR_0->sts->participants[VAR_1].read_page = 0;
 }
}
