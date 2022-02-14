
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int buf; } ;
struct TYPE_5__ {int xs_want_itup; int indexRelation; int xs_snapshot; } ;
typedef TYPE_1__* IndexScanDesc ;
typedef TYPE_2__* BTScanPos ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(IndexScanDesc VAR_2, BTScanPos VAR_3)
{
 FUNC_1(VAR_3->buf, VAR_0);

 if (FUNC_0(VAR_2->xs_snapshot) &&
  FUNC_2(VAR_2->indexRelation) &&
  !VAR_2->xs_want_itup)
 {
  FUNC_3(VAR_3->buf);
  VAR_3->buf = VAR_1;
 }
}
