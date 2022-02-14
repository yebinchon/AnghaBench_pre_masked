
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ objectSubId; int objectId; int classId; } ;
typedef int Oid ;
typedef TYPE_1__ ObjectAddress ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,char*,int) ;

void
FUNC_3(Oid VAR_3)
{
 ObjectAddress VAR_4;
 char *VAR_5;




 VAR_4.classId = VAR_0;
 VAR_4.objectId = VAR_3;
 VAR_4.objectSubId = 0;
 VAR_5 = FUNC_0(&VAR_4);

 FUNC_2(&VAR_4,
       VAR_1,
       VAR_2,
       VAR_5,
       1);
 FUNC_1(VAR_5);
}
