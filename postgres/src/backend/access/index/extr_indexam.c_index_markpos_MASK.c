
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* indexRelation; } ;
struct TYPE_7__ {TYPE_1__* rd_indam; } ;
struct TYPE_6__ {int (* ammarkpos ) (TYPE_3__*) ;} ;
typedef TYPE_3__* IndexScanDesc ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;

void
FUNC_2(IndexScanDesc VAR_2)
{
 VAR_0;
 FUNC_0(VAR_1);

 VAR_2->indexRelation->rd_indam->ammarkpos(VAR_2);
}
