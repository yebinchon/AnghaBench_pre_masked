
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int16 ;
struct TYPE_8__ {int statsTuple; int atttype; } ;
typedef TYPE_1__ VariableStatData ;
struct TYPE_9__ {int nvalues; int * values; int stacoll; } ;
typedef int PlannerInfo ;
typedef int Oid ;
typedef int FmgrInfo ;
typedef int Datum ;
typedef TYPE_2__ AttStatsSlot ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (int *,TYPE_1__*,int ,int *,int *) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int ,int ,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int *,int*) ;
 int FUNC_10 (TYPE_1__*,int ) ;

__attribute__((used)) static bool
FUNC_11(PlannerInfo *VAR_4, VariableStatData *VAR_5, Oid VAR_6,
       Datum *VAR_7, Datum *VAR_8)
{
 Datum VAR_9 = 0;
 Datum VAR_10 = 0;
 bool VAR_11 = 0;
 int16 VAR_12;
 bool VAR_13;
 Oid VAR_14;
 AttStatsSlot VAR_15;
 int VAR_16;
 if (!FUNC_2(VAR_5->statsTuple))
 {

  return 0;
 }
 if (!FUNC_10(VAR_5,
            (VAR_14 = FUNC_8(VAR_6))))
  return 0;

 FUNC_9(VAR_5->atttype, &VAR_12, &VAR_13);
 if (FUNC_7(&VAR_15, VAR_5->statsTuple,
       VAR_2, VAR_6,
       VAR_0))
 {
  if (VAR_15.nvalues > 0)
  {
   VAR_9 = FUNC_3(VAR_15.values[0], VAR_13, VAR_12);
   VAR_10 = FUNC_3(VAR_15.values[VAR_15.nvalues - 1], VAR_13, VAR_12);
   VAR_11 = 1;
  }
  FUNC_5(&VAR_15);
 }
 else if (FUNC_7(&VAR_15, VAR_5->statsTuple,
         VAR_2, VAR_1,
         0))
 {
  FUNC_5(&VAR_15);
  return 0;
 }







 if (FUNC_7(&VAR_15, VAR_5->statsTuple,
       VAR_3, VAR_1,
       VAR_0))
 {
  bool VAR_17 = 0;
  bool VAR_18 = 0;
  FmgrInfo VAR_19;

  FUNC_4(VAR_14, &VAR_19);

  for (VAR_16 = 0; VAR_16 < VAR_15.nvalues; VAR_16++)
  {
   if (!VAR_11)
   {
    VAR_9 = VAR_10 = VAR_15.values[VAR_16];
    VAR_17 = VAR_18 = VAR_11 = 1;
    continue;
   }
   if (FUNC_0(FUNC_1(&VAR_19,
              VAR_15.stacoll,
              VAR_15.values[VAR_16], VAR_9)))
   {
    VAR_9 = VAR_15.values[VAR_16];
    VAR_17 = 1;
   }
   if (FUNC_0(FUNC_1(&VAR_19,
              VAR_15.stacoll,
              VAR_10, VAR_15.values[VAR_16])))
   {
    VAR_10 = VAR_15.values[VAR_16];
    VAR_18 = 1;
   }
  }
  if (VAR_17)
   VAR_9 = FUNC_3(VAR_9, VAR_13, VAR_12);
  if (VAR_18)
   VAR_10 = FUNC_3(VAR_10, VAR_13, VAR_12);
  FUNC_5(&VAR_15);
 }

 *VAR_7 = VAR_9;
 *VAR_8 = VAR_10;
 return VAR_11;
}
