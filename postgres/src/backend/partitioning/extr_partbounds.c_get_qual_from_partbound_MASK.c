
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int const strategy; } ;
struct TYPE_8__ {int strategy; } ;
typedef int Relation ;
typedef TYPE_1__* PartitionKey ;
typedef TYPE_2__ PartitionBoundSpec ;
typedef int List ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int * VAR_1 ;



 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int * FUNC_3 (int ,TYPE_2__*) ;
 int * FUNC_4 (int ,TYPE_2__*) ;
 int * FUNC_5 (int ,TYPE_2__*,int) ;

List *
FUNC_6(Relation VAR_2, Relation VAR_3,
      PartitionBoundSpec *VAR_4)
{
 PartitionKey VAR_5 = FUNC_1(VAR_3);
 List *VAR_6 = VAR_1;

 FUNC_0(VAR_5 != ((void*)0));

 switch (VAR_5->strategy)
 {
  case 130:
   FUNC_0(VAR_4->strategy == 130);
   VAR_6 = FUNC_3(VAR_3, VAR_4);
   break;

  case 129:
   FUNC_0(VAR_4->strategy == 129);
   VAR_6 = FUNC_4(VAR_3, VAR_4);
   break;

  case 128:
   FUNC_0(VAR_4->strategy == 128);
   VAR_6 = FUNC_5(VAR_3, VAR_4, 0);
   break;

  default:
   FUNC_2(VAR_0, "unexpected partition strategy: %d",
     (int) VAR_5->strategy);
 }

 return VAR_6;
}
