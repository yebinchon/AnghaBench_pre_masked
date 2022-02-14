
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ objectId; scalar_t__ classId; scalar_t__ objectSubId; } ;
struct TYPE_4__ {scalar_t__ deptype; TYPE_1__ object; } ;
typedef TYPE_2__ ShDependObjectInfo ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const ShDependObjectInfo *VAR_2 = (const ShDependObjectInfo *) VAR_0;
 const ShDependObjectInfo *VAR_3 = (const ShDependObjectInfo *) VAR_1;




 if (VAR_2->object.objectId < VAR_3->object.objectId)
  return -1;
 if (VAR_2->object.objectId > VAR_3->object.objectId)
  return 1;





 if (VAR_2->object.classId < VAR_3->object.classId)
  return -1;
 if (VAR_2->object.classId > VAR_3->object.classId)
  return 1;







 if ((unsigned int) VAR_2->object.objectSubId < (unsigned int) VAR_3->object.objectSubId)
  return -1;
 if ((unsigned int) VAR_2->object.objectSubId > (unsigned int) VAR_3->object.objectSubId)
  return 1;






 if (VAR_2->deptype < VAR_3->deptype)
  return -1;
 if (VAR_2->deptype > VAR_3->deptype)
  return 1;

 return 0;
}
