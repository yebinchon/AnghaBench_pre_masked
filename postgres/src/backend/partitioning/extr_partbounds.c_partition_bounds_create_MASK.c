
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int strategy; } ;
typedef TYPE_1__* PartitionKey ;
typedef int PartitionBoundSpec ;
typedef int * PartitionBoundInfo ;


 int FUNC_0 (int) ;
 int VAR_0 ;



 int * FUNC_1 (int **,int,TYPE_1__*,int**) ;
 int * FUNC_2 (int **,int,TYPE_1__*,int**) ;
 int * FUNC_3 (int **,int,TYPE_1__*,int**) ;
 int FUNC_4 (int ,char*,int) ;
 scalar_t__ FUNC_5 (int) ;

PartitionBoundInfo
FUNC_6(PartitionBoundSpec **VAR_1, int VAR_2,
      PartitionKey VAR_3, int **VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_2 > 0);
 *VAR_4 = (int *) FUNC_5(sizeof(int) * VAR_2);
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  (*VAR_4)[VAR_5] = -1;

 switch (VAR_3->strategy)
 {
  case 130:
   return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);

  case 129:
   return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);

  case 128:
   return FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);

  default:
   FUNC_4(VAR_0, "unexpected partition strategy: %d",
     (int) VAR_3->strategy);
   break;
 }

 FUNC_0(0);
 return ((void*)0);
}
