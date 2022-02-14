
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int strength; void* collation; int location; int location2; int pstate; void* collation2; } ;
typedef TYPE_1__ assign_collations_context ;
typedef void* Oid ;
typedef int CollateStrength ;






 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void
FUNC_5(Oid VAR_3,
       CollateStrength VAR_4,
       int VAR_5,
       Oid VAR_6,
       int VAR_7,
       assign_collations_context *VAR_8)
{





 if (VAR_4 > VAR_8->strength)
 {

  VAR_8->collation = VAR_3;
  VAR_8->strength = VAR_4;
  VAR_8->location = VAR_5;

  if (VAR_4 == 131)
  {
   VAR_8->collation2 = VAR_6;
   VAR_8->location2 = VAR_7;
  }
 }
 else if (VAR_4 == VAR_8->strength)
 {

  switch (VAR_4)
  {
   case 128:

    break;
   case 129:
    if (VAR_3 != VAR_8->collation)
    {



     if (VAR_8->collation == VAR_0)
     {

      VAR_8->collation = VAR_3;
      VAR_8->strength = VAR_4;
      VAR_8->location = VAR_5;
     }
     else if (VAR_3 != VAR_0)
     {







      VAR_8->strength = 131;
      VAR_8->collation2 = VAR_3;
      VAR_8->location2 = VAR_5;
     }
    }
    break;
   case 131:

    break;
   case 130:
    if (VAR_3 != VAR_8->collation)
    {






     FUNC_0(VAR_2,
       (FUNC_1(VAR_1),
        FUNC_2("collation mismatch between explicit collations \"%s\" and \"%s\"",
         FUNC_3(VAR_8->collation),
         FUNC_3(VAR_3)),
        FUNC_4(VAR_8->pstate, VAR_5)));
    }
    break;
  }
 }
}
