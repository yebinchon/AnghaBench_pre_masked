
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int rel; } ;
struct TYPE_6__ {TYPE_1__ xs_base; int xs_cbuf; } ;
typedef int Relation ;
typedef TYPE_1__ IndexFetchTableData ;
typedef TYPE_2__ IndexFetchHeapData ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int) ;

__attribute__((used)) static IndexFetchTableData *
FUNC_1(Relation VAR_1)
{
 IndexFetchHeapData *VAR_2 = FUNC_0(sizeof(IndexFetchHeapData));

 VAR_2->xs_base.rel = VAR_1;
 VAR_2->xs_cbuf = VAR_0;

 return &VAR_2->xs_base;
}
