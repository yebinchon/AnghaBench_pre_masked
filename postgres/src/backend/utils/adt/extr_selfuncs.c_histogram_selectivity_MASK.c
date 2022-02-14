
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int statsTuple; } ;
typedef TYPE_1__ VariableStatData ;
struct TYPE_12__ {int nvalues; int * values; int stacoll; } ;
struct TYPE_11__ {int fn_oid; } ;
typedef TYPE_2__ FmgrInfo ;
typedef int Datum ;
typedef TYPE_3__ AttStatsSlot ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ) ;

double
FUNC_7(VariableStatData *VAR_3, FmgrInfo *VAR_4,
       Datum VAR_5, bool VAR_6,
       int VAR_7, int VAR_8,
       int *VAR_9)
{
 double VAR_10;
 AttStatsSlot VAR_11;


 FUNC_0(VAR_8 >= 0);
 FUNC_0(VAR_7 > 2 * VAR_8);

 if (FUNC_3(VAR_3->statsTuple) &&
  FUNC_6(VAR_3, VAR_4->fn_oid) &&
  FUNC_5(&VAR_11, VAR_3->statsTuple,
       VAR_2, VAR_1,
       VAR_0))
 {
  *VAR_9 = VAR_11.nvalues;
  if (VAR_11.nvalues >= VAR_7)
  {
   int VAR_12 = 0;
   int VAR_13;

   for (VAR_13 = VAR_8; VAR_13 < VAR_11.nvalues - VAR_8; VAR_13++)
   {
    if (VAR_6 ?
     FUNC_1(FUNC_2(VAR_4,
               VAR_11.stacoll,
               VAR_11.values[VAR_13],
               VAR_5)) :
     FUNC_1(FUNC_2(VAR_4,
               VAR_11.stacoll,
               VAR_5,
               VAR_11.values[VAR_13])))
     VAR_12++;
   }
   VAR_10 = ((double) VAR_12) / ((double) (VAR_11.nvalues - 2 * VAR_8));
  }
  else
   VAR_10 = -1;
  FUNC_4(&VAR_11);
 }
 else
 {
  *VAR_9 = 0;
  VAR_10 = -1;
 }

 return VAR_10;
}
