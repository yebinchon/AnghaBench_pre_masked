
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ objectId; scalar_t__ classId; scalar_t__ objectSubId; } ;
typedef TYPE_1__ ObjectAddress ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const ObjectAddress *VAR_2 = (const ObjectAddress *) VAR_0;
 const ObjectAddress *VAR_3 = (const ObjectAddress *) VAR_1;






 if (VAR_2->objectId > VAR_3->objectId)
  return -1;
 if (VAR_2->objectId < VAR_3->objectId)
  return 1;





 if (VAR_2->classId < VAR_3->classId)
  return -1;
 if (VAR_2->classId > VAR_3->classId)
  return 1;
 if ((unsigned int) VAR_2->objectSubId < (unsigned int) VAR_3->objectSubId)
  return -1;
 if ((unsigned int) VAR_2->objectSubId > (unsigned int) VAR_3->objectSubId)
  return 1;
 return 0;
}
