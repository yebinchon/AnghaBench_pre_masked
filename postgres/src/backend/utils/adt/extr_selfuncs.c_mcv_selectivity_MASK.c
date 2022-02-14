
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int statsTuple; } ;
typedef TYPE_1__ VariableStatData ;
struct TYPE_12__ {int nvalues; scalar_t__* numbers; int * values; int stacoll; } ;
struct TYPE_11__ {int fn_oid; } ;
typedef TYPE_2__ FmgrInfo ;
typedef int Datum ;
typedef TYPE_3__ AttStatsSlot ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int ,int ,int ,int) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ) ;

double
FUNC_6(VariableStatData *VAR_4, FmgrInfo *VAR_5,
    Datum VAR_6, bool VAR_7,
    double *VAR_8)
{
 double VAR_9,
    VAR_10;
 AttStatsSlot VAR_11;
 int VAR_12;

 VAR_9 = 0.0;
 VAR_10 = 0.0;

 if (FUNC_2(VAR_4->statsTuple) &&
  FUNC_5(VAR_4, VAR_5->fn_oid) &&
  FUNC_4(&VAR_11, VAR_4->statsTuple,
       VAR_3, VAR_2,
       VAR_1 | VAR_0))
 {
  for (VAR_12 = 0; VAR_12 < VAR_11.nvalues; VAR_12++)
  {
   if (VAR_7 ?
    FUNC_0(FUNC_1(VAR_5,
              VAR_11.stacoll,
              VAR_11.values[VAR_12],
              VAR_6)) :
    FUNC_0(FUNC_1(VAR_5,
              VAR_11.stacoll,
              VAR_6,
              VAR_11.values[VAR_12])))
    VAR_9 += VAR_11.numbers[VAR_12];
   VAR_10 += VAR_11.numbers[VAR_12];
  }
  FUNC_3(&VAR_11);
 }

 *VAR_8 = VAR_10;
 return VAR_9;
}
