
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ objectSubId; int objectId; int classId; } ;
typedef int SharedDependencyType ;
typedef int Relation ;
typedef TYPE_1__ ObjectAddress ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,scalar_t__,int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;

void
FUNC_6(ObjectAddress *VAR_2,
       ObjectAddress *VAR_3,
       SharedDependencyType VAR_4)
{
 Relation VAR_5;




 FUNC_0(VAR_2->objectSubId == 0);
 FUNC_0(VAR_3->objectSubId == 0);





 if (FUNC_1())
  return;

 VAR_5 = FUNC_5(VAR_1, VAR_0);


 if (!FUNC_2(VAR_3->classId, VAR_3->objectId,
         VAR_5))
 {
  FUNC_3(VAR_5, VAR_2->classId, VAR_2->objectId,
         VAR_2->objectSubId,
         VAR_3->classId, VAR_3->objectId,
         VAR_4);
 }

 FUNC_4(VAR_5, VAR_0);
}
