
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int strategy; int ndatums; } ;
typedef TYPE_1__* PartitionBoundInfo ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;



 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(PartitionBoundInfo VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1);

 switch (VAR_1->strategy)
 {
  case 130:





   VAR_2 = FUNC_2(VAR_1);
   break;

  case 129:
   VAR_2 = VAR_1->ndatums;
   break;

  case 128:

   VAR_2 = VAR_1->ndatums + 1;
   break;

  default:
   FUNC_1(VAR_0, "unexpected partition strategy: %d",
     (int) VAR_1->strategy);
 }

 return VAR_2;
}
