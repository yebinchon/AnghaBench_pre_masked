
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ enumsortorder; } ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_enum ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
 HeapTuple VAR_2 = *((const HeapTuple *) VAR_0);
 HeapTuple VAR_3 = *((const HeapTuple *) VAR_1);
 Form_pg_enum VAR_4 = (Form_pg_enum) FUNC_0(VAR_2);
 Form_pg_enum VAR_5 = (Form_pg_enum) FUNC_0(VAR_3);

 if (VAR_4->enumsortorder < VAR_5->enumsortorder)
  return -1;
 else if (VAR_4->enumsortorder > VAR_5->enumsortorder)
  return 1;
 else
  return 0;
}
