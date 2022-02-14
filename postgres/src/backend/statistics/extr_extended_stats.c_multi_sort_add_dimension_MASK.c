
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* ssup; } ;
struct TYPE_5__ {int ssup_nulls_first; int ssup_collation; int ssup_cxt; } ;
typedef TYPE_1__* SortSupport ;
typedef int Oid ;
typedef TYPE_2__* MultiSortSupport ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;

void
FUNC_1(MultiSortSupport VAR_1, int VAR_2,
       Oid VAR_3, Oid VAR_4)
{
 SortSupport VAR_5 = &VAR_1->ssup[VAR_2];

 VAR_5->ssup_cxt = VAR_0;
 VAR_5->ssup_collation = VAR_4;
 VAR_5->ssup_nulls_first = 0;

 FUNC_0(VAR_3, VAR_5);
}
