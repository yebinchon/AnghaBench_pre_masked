
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_5__ {TYPE_1__* er_tupdesc; } ;
struct TYPE_4__ {scalar_t__ tdrefcount; } ;
typedef TYPE_2__ ExpandedRecordHeader ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0)
{
 ExpandedRecordHeader *VAR_1 = (ExpandedRecordHeader *) VAR_0;
 TupleDesc VAR_2 = VAR_1->er_tupdesc;


 if (VAR_2)
 {
  VAR_1->er_tupdesc = ((void*)0);
  if (VAR_2->tdrefcount > 0)
  {
   if (--VAR_2->tdrefcount == 0)
    FUNC_0(VAR_2);
  }
 }
}
