
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int iss_NumOrderByKeys; TYPE_1__* iss_SortSupport; } ;
struct TYPE_5__ {int (* comparator ) (int const,int const,TYPE_1__*) ;} ;
typedef TYPE_1__* SortSupport ;
typedef TYPE_2__ IndexScanState ;
typedef int Datum ;


 int FUNC_0 (int const,int const,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_1(const Datum *VAR_0, const bool *VAR_1,
    const Datum *VAR_2, const bool *VAR_3,
    IndexScanState *VAR_4)
{
 int VAR_5;
 int VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_4->iss_NumOrderByKeys; VAR_5++)
 {
  SortSupport VAR_7 = &VAR_4->iss_SortSupport[VAR_5];






  if (VAR_1[VAR_5] && !VAR_3[VAR_5])
   return 1;
  else if (!VAR_1[VAR_5] && VAR_3[VAR_5])
   return -1;
  else if (VAR_1[VAR_5] && VAR_3[VAR_5])
   return 0;

  VAR_6 = VAR_7->comparator(VAR_0[VAR_5], VAR_2[VAR_5], VAR_7);
  if (VAR_6 != 0)
   return VAR_6;
 }

 return 0;
}
