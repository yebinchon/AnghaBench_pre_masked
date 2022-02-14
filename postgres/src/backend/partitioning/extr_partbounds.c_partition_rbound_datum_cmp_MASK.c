
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef scalar_t__ PartitionRangeDatumKind ;
typedef int Oid ;
typedef int FmgrInfo ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int32
FUNC_2(FmgrInfo *VAR_2, Oid *VAR_3,
         Datum *VAR_4, PartitionRangeDatumKind *VAR_5,
         Datum *VAR_6, int VAR_7)
{
 int VAR_8;
 int32 VAR_9 = -1;

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
 {
  if (VAR_5[VAR_8] == VAR_1)
   return -1;
  else if (VAR_5[VAR_8] == VAR_0)
   return 1;

  VAR_9 = FUNC_0(FUNC_1(&VAR_2[VAR_8],
             VAR_3[VAR_8],
             VAR_4[VAR_8],
             VAR_6[VAR_8]));
  if (VAR_9 != 0)
   break;
 }

 return VAR_9;
}
