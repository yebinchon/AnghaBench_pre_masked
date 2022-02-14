
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ classId; scalar_t__ objectId; scalar_t__ objectSubId; } ;
struct TYPE_5__ {int flags; TYPE_2__* object; struct TYPE_5__* next; } ;
typedef TYPE_1__ ObjectAddressStack ;
typedef TYPE_2__ ObjectAddress ;


 int VAR_0 ;

__attribute__((used)) static bool
FUNC_0(const ObjectAddress *VAR_1,
        int VAR_2,
        ObjectAddressStack *VAR_3)
{
 bool VAR_4 = 0;
 ObjectAddressStack *VAR_5;

 for (VAR_5 = VAR_3; VAR_5; VAR_5 = VAR_5->next)
 {
  const ObjectAddress *VAR_6 = VAR_5->object;

  if (VAR_1->classId == VAR_6->classId &&
   VAR_1->objectId == VAR_6->objectId)
  {
   if (VAR_1->objectSubId == VAR_6->objectSubId)
   {
    VAR_5->flags |= VAR_2;
    VAR_4 = 1;
   }
   else if (VAR_6->objectSubId == 0)
   {






    VAR_4 = 1;
   }
   else if (VAR_1->objectSubId == 0)
   {





    if (VAR_2)
     VAR_5->flags |= (VAR_2 | VAR_0);
   }
  }
 }

 return VAR_4;
}
