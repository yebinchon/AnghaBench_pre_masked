
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int strategy; int ndatums; } ;
typedef TYPE_1__* PartitionBoundInfo ;


 int FUNC_0 (int ) ;


 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

bool
FUNC_3(PartitionBoundInfo VAR_0, int VAR_1)
{
 FUNC_0(VAR_0 != ((void*)0));

 switch (VAR_0->strategy)
 {
  case 128:
   if (!FUNC_2(VAR_0))
    return 1;
   break;

  case 129:
   if (FUNC_2(VAR_0))
    return 0;

   if (VAR_0->ndatums + FUNC_1(VAR_0)
    == VAR_1)
    return 1;
   break;

  default:

   break;
 }

 return 0;
}
