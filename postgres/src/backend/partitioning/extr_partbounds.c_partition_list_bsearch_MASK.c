
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int32 ;
struct TYPE_3__ {int ndatums; int ** datums; } ;
typedef TYPE_1__* PartitionBoundInfo ;
typedef int Oid ;
typedef int FmgrInfo ;
typedef int Datum ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;

int
FUNC_2(FmgrInfo *VAR_0, Oid *VAR_1,
        PartitionBoundInfo VAR_2,
        Datum VAR_3, bool *VAR_4)
{
 int VAR_5,
    VAR_6,
    VAR_7;

 VAR_5 = -1;
 VAR_6 = VAR_2->ndatums - 1;
 while (VAR_5 < VAR_6)
 {
  int32 VAR_8;

  VAR_7 = (VAR_5 + VAR_6 + 1) / 2;
  VAR_8 = FUNC_0(FUNC_1(&VAR_0[0],
             VAR_1[0],
             VAR_2->datums[VAR_7][0],
             VAR_3));
  if (VAR_8 <= 0)
  {
   VAR_5 = VAR_7;
   *VAR_4 = (VAR_8 == 0);
   if (*VAR_4)
    break;
  }
  else
   VAR_6 = VAR_7 - 1;
 }

 return VAR_5;
}
