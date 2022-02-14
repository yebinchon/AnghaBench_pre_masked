
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ classId; scalar_t__ objectId; scalar_t__ objectSubId; } ;
struct TYPE_7__ {int flags; } ;
struct TYPE_6__ {int numrefs; TYPE_2__* extras; TYPE_3__* refs; } ;
typedef TYPE_1__ ObjectAddresses ;
typedef TYPE_2__ ObjectAddressExtra ;
typedef TYPE_3__ ObjectAddress ;


 int VAR_0 ;

__attribute__((used)) static bool
FUNC_0(const ObjectAddress *VAR_1,
         int VAR_2,
         ObjectAddresses *VAR_3)
{
 bool VAR_4 = 0;
 int VAR_5;

 for (VAR_5 = VAR_3->numrefs - 1; VAR_5 >= 0; VAR_5--)
 {
  ObjectAddress *VAR_6 = VAR_3->refs + VAR_5;

  if (VAR_1->classId == VAR_6->classId &&
   VAR_1->objectId == VAR_6->objectId)
  {
   if (VAR_1->objectSubId == VAR_6->objectSubId)
   {
    ObjectAddressExtra *VAR_7 = VAR_3->extras + VAR_5;

    VAR_7->flags |= VAR_2;
    VAR_4 = 1;
   }
   else if (VAR_6->objectSubId == 0)
   {







    VAR_4 = 1;
   }
   else if (VAR_1->objectSubId == 0)
   {
    ObjectAddressExtra *VAR_8 = VAR_3->extras + VAR_5;

    if (VAR_2)
     VAR_8->flags |= (VAR_2 | VAR_0);
   }
  }
 }

 return VAR_4;
}
