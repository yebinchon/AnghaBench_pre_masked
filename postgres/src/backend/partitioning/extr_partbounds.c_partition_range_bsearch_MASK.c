
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int32 ;
struct TYPE_3__ {int ndatums; int* indexes; int * kind; int * datums; } ;
typedef int PartitionRangeBound ;
typedef TYPE_1__* PartitionBoundInfo ;
typedef int Oid ;
typedef int FmgrInfo ;


 scalar_t__ FUNC_0 (int,int *,int *,int ,int ,int,int *) ;

__attribute__((used)) static int
FUNC_1(int VAR_0, FmgrInfo *VAR_1,
      Oid *VAR_2,
      PartitionBoundInfo VAR_3,
      PartitionRangeBound *VAR_4, bool *VAR_5)
{
 int VAR_6,
    VAR_7,
    VAR_8;

 VAR_6 = -1;
 VAR_7 = VAR_3->ndatums - 1;
 while (VAR_6 < VAR_7)
 {
  int32 VAR_9;

  VAR_8 = (VAR_6 + VAR_7 + 1) / 2;
  VAR_9 = FUNC_0(VAR_0, VAR_1,
           VAR_2,
           VAR_3->datums[VAR_8],
           VAR_3->kind[VAR_8],
           (VAR_3->indexes[VAR_8] == -1),
           VAR_4);
  if (VAR_9 <= 0)
  {
   VAR_6 = VAR_8;
   *VAR_5 = (VAR_9 == 0);

   if (*VAR_5)
    break;
  }
  else
   VAR_7 = VAR_8 - 1;
 }

 return VAR_6;
}
