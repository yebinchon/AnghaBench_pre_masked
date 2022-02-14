
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,int ,int ,char*,int) ;

void
FUNC_4(Oid VAR_6)
{
 ObjectAddress VAR_7;
 char *VAR_8;




 VAR_7.classId = VAR_0;
 VAR_7.objectId = FUNC_1(VAR_6);
 VAR_7.objectSubId = 0;
 VAR_8 = FUNC_0(&VAR_7);

 FUNC_3(&VAR_7,
       VAR_3,
       VAR_5,
       VAR_8,
       1);
 FUNC_2(VAR_8);




 VAR_7.classId = VAR_1;
 VAR_7.objectId = VAR_6;
 VAR_7.objectSubId = 0;
 VAR_8 = FUNC_0(&VAR_7);

 FUNC_3(&VAR_7,
       VAR_2,
       VAR_4,
       VAR_8,
       1);
 FUNC_2(VAR_8);
}
