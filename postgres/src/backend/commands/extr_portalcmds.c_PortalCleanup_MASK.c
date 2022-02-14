
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cleanup; scalar_t__ status; scalar_t__ resowner; int * queryDesc; } ;
typedef scalar_t__ ResourceOwner ;
typedef int QueryDesc ;
typedef TYPE_1__* Portal ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (TYPE_1__*) ;

void
FUNC_5(Portal VAR_2)
{
 QueryDesc *VAR_3;




 FUNC_0(FUNC_4(VAR_2));
 FUNC_0(VAR_2->cleanup == FUNC_5);






 VAR_3 = VAR_2->queryDesc;
 if (VAR_3)
 {






  VAR_2->queryDesc = ((void*)0);

  if (VAR_2->status != VAR_1)
  {
   ResourceOwner VAR_4;


   VAR_4 = VAR_0;
   if (VAR_2->resowner)
    VAR_0 = VAR_2->resowner;

   FUNC_2(VAR_3);
   FUNC_1(VAR_3);
   FUNC_3(VAR_3);

   VAR_0 = VAR_4;
  }
 }
}
