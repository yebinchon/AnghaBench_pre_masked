
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int32 ;
struct TYPE_3__ {int ndatums; int ** datums; } ;
typedef TYPE_1__* PartitionBoundInfo ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,int,int) ;

int
FUNC_2(PartitionBoundInfo VAR_0,
        int VAR_1, int VAR_2)
{
 int VAR_3,
    VAR_4,
    VAR_5;

 VAR_3 = -1;
 VAR_4 = VAR_0->ndatums - 1;
 while (VAR_3 < VAR_4)
 {
  int32 VAR_6,
     VAR_7,
     VAR_8;

  VAR_5 = (VAR_3 + VAR_4 + 1) / 2;
  VAR_7 = FUNC_0(VAR_0->datums[VAR_5][0]);
  VAR_8 = FUNC_0(VAR_0->datums[VAR_5][1]);
  VAR_6 = FUNC_1(VAR_7, VAR_8,
           VAR_1, VAR_2);
  if (VAR_6 <= 0)
  {
   VAR_3 = VAR_5;

   if (VAR_6 == 0)
    break;
  }
  else
   VAR_4 = VAR_5 - 1;
 }

 return VAR_3;
}
