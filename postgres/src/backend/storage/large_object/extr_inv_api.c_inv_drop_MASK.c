
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ objectSubId; int objectId; int classId; } ;
typedef int Oid ;
typedef TYPE_1__ ObjectAddress ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;

int
FUNC_2(Oid VAR_2)
{
 ObjectAddress VAR_3;




 VAR_3.classId = VAR_1;
 VAR_3.objectId = VAR_2;
 VAR_3.objectSubId = 0;
 FUNC_1(&VAR_3, VAR_0, 0);





 FUNC_0();


 return 1;
}
