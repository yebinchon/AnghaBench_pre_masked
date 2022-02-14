
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ classId; scalar_t__ objectId; scalar_t__ objectSubId; } ;
struct TYPE_5__ {int numrefs; TYPE_2__* refs; } ;
typedef TYPE_1__ ObjectAddresses ;
typedef TYPE_2__ ObjectAddress ;



bool
FUNC_0(const ObjectAddress *VAR_0,
        const ObjectAddresses *VAR_1)
{
 int VAR_2;

 for (VAR_2 = VAR_1->numrefs - 1; VAR_2 >= 0; VAR_2--)
 {
  const ObjectAddress *VAR_3 = VAR_1->refs + VAR_2;

  if (VAR_0->classId == VAR_3->classId &&
   VAR_0->objectId == VAR_3->objectId)
  {
   if (VAR_0->objectSubId == VAR_3->objectSubId ||
    VAR_3->objectSubId == 0)
    return 1;
  }
 }

 return 0;
}
