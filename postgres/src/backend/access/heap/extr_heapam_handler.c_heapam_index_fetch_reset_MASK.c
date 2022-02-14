
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int xs_cbuf; } ;
typedef int IndexFetchTableData ;
typedef TYPE_1__ IndexFetchHeapData ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(IndexFetchTableData *VAR_1)
{
 IndexFetchHeapData *VAR_2 = (IndexFetchHeapData *) VAR_1;

 if (FUNC_0(VAR_2->xs_cbuf))
 {
  FUNC_1(VAR_2->xs_cbuf);
  VAR_2->xs_cbuf = VAR_0;
 }
}
