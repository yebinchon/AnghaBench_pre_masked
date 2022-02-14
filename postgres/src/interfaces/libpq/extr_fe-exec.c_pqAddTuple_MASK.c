
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t ntups; size_t tupArrSize; int memorySize; int ** tuples; } ;
typedef TYPE_1__ PGresult ;
typedef int PGresAttValue ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int **,int) ;

__attribute__((used)) static bool
FUNC_3(PGresult *VAR_2, PGresAttValue *VAR_3, const char **VAR_4)
{
 if (VAR_2->ntups >= VAR_2->tupArrSize)
 {
  int VAR_5;
  PGresAttValue **VAR_6;





  if (VAR_2->tupArrSize <= VAR_0 / 2)
   VAR_5 = (VAR_2->tupArrSize > 0) ? VAR_2->tupArrSize * 2 : 128;
  else if (VAR_2->tupArrSize < VAR_0)
   VAR_5 = VAR_0;
  else
  {
   *VAR_4 = FUNC_0("PGresult cannot support more than INT_MAX tuples");
   return 0;
  }







  if (VAR_5 > VAR_1 / sizeof(PGresAttValue *))
  {
   *VAR_4 = FUNC_0("size_t overflow");
   return 0;
  }


  if (VAR_2->tuples == ((void*)0))
   VAR_6 = (PGresAttValue **)
    FUNC_1(VAR_5 * sizeof(PGresAttValue *));
  else
   VAR_6 = (PGresAttValue **)
    FUNC_2(VAR_2->tuples, VAR_5 * sizeof(PGresAttValue *));
  if (!VAR_6)
   return 0;
  VAR_2->memorySize +=
   (VAR_5 - VAR_2->tupArrSize) * sizeof(PGresAttValue *);
  VAR_2->tupArrSize = VAR_5;
  VAR_2->tuples = VAR_6;
 }
 VAR_2->tuples[VAR_2->ntups] = VAR_3;
 VAR_2->ntups++;
 return 1;
}
