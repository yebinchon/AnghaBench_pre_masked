
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_3__ {int lower; scalar_t__* kind; int * datums; } ;
typedef scalar_t__ PartitionRangeDatumKind ;
typedef TYPE_1__ PartitionRangeBound ;
typedef int Oid ;
typedef int FmgrInfo ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int32
FUNC_2(int VAR_1, FmgrInfo *VAR_2,
      Oid *VAR_3,
      Datum *VAR_4, PartitionRangeDatumKind *VAR_5,
      bool VAR_6, PartitionRangeBound *VAR_7)
{
 int32 VAR_8 = 0;
 int VAR_9;
 Datum *VAR_10 = VAR_7->datums;
 PartitionRangeDatumKind *VAR_11 = VAR_7->kind;
 bool VAR_12 = VAR_7->lower;

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++)
 {






  if (VAR_5[VAR_9] < VAR_11[VAR_9])
   return -1;
  else if (VAR_5[VAR_9] > VAR_11[VAR_9])
   return 1;
  else if (VAR_5[VAR_9] != VAR_0)






   break;

  VAR_8 = FUNC_0(FUNC_1(&VAR_2[VAR_9],
             VAR_3[VAR_9],
             VAR_4[VAR_9],
             VAR_10[VAR_9]));
  if (VAR_8 != 0)
   break;
 }







 if (VAR_8 == 0 && VAR_6 != VAR_12)
  VAR_8 = VAR_6 ? 1 : -1;

 return VAR_8;
}
