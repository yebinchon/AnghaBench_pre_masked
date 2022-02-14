
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ classId; scalar_t__ objectId; scalar_t__ objectSubId; } ;
struct TYPE_4__ {int numrefs; TYPE_2__* refs; int extras; } ;
typedef TYPE_1__ ObjectAddresses ;
typedef TYPE_2__ ObjectAddress ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (void*,int,int,int ) ;

__attribute__((used)) static void
FUNC_2(ObjectAddresses *VAR_1)
{
 ObjectAddress *VAR_2;
 int VAR_3,
    VAR_4;






 FUNC_0(!VAR_1->extras);

 if (VAR_1->numrefs <= 1)
  return;


 FUNC_1((void *) VAR_1->refs, VAR_1->numrefs, sizeof(ObjectAddress),
    VAR_0);


 VAR_2 = VAR_1->refs;
 VAR_4 = 1;
 for (VAR_3 = 1; VAR_3 < VAR_1->numrefs; VAR_3++)
 {
  ObjectAddress *VAR_5 = VAR_1->refs + VAR_3;

  if (VAR_2->classId == VAR_5->classId &&
   VAR_2->objectId == VAR_5->objectId)
  {
   if (VAR_2->objectSubId == VAR_5->objectSubId)
    continue;
   if (VAR_2->objectSubId == 0)
   {

    VAR_2->objectSubId = VAR_5->objectSubId;
    continue;
   }
  }

  VAR_2++;
  *VAR_2 = *VAR_5;
  VAR_4++;
 }

 VAR_1->numrefs = VAR_4;
}
