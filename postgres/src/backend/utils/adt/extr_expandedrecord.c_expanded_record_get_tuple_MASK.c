
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int dnulls; int dvalues; int er_tupdesc; int * fvalue; } ;
typedef int * HeapTuple ;
typedef TYPE_1__ ExpandedRecordHeader ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int ,int ) ;

HeapTuple
FUNC_1(ExpandedRecordHeader *VAR_2)
{

 if (VAR_2->flags & VAR_1)
  return VAR_2->fvalue;


 if (VAR_2->flags & VAR_0)
  return FUNC_0(VAR_2->er_tupdesc, VAR_2->dvalues, VAR_2->dnulls);


 return ((void*)0);
}
