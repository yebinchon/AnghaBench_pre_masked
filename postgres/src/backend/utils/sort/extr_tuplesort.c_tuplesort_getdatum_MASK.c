
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int datumTypeLen; int tuples; TYPE_1__* sortKeys; int sortcontext; } ;
typedef TYPE_2__ Tuplesortstate ;
struct TYPE_9__ {int isnull1; int tuple; int datum1; } ;
struct TYPE_7__ {scalar_t__ abbrev_converter; } ;
typedef TYPE_3__ SortTuple ;
typedef int MemoryContext ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (TYPE_2__*,int,TYPE_3__*) ;

bool
FUNC_4(Tuplesortstate *VAR_0, bool VAR_1,
       Datum *VAR_2, bool *VAR_3, Datum *VAR_4)
{
 MemoryContext VAR_5 = FUNC_0(VAR_0->sortcontext);
 SortTuple VAR_6;

 if (!FUNC_3(VAR_0, VAR_1, &VAR_6))
 {
  FUNC_0(VAR_5);
  return 0;
 }


 FUNC_0(VAR_5);


 if (VAR_0->sortKeys->abbrev_converter && VAR_4)
  *VAR_4 = VAR_6.datum1;

 if (VAR_6.isnull1 || !VAR_0->tuples)
 {
  *VAR_2 = VAR_6.datum1;
  *VAR_3 = VAR_6.isnull1;
 }
 else
 {

  *VAR_2 = FUNC_2(FUNC_1(VAR_6.tuple), 0, VAR_0->datumTypeLen);
  *VAR_3 = 0;
 }

 return 1;
}
