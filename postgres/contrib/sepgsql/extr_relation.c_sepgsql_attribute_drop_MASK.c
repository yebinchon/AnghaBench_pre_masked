
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int objectSubId; int objectId; int classId; } ;
typedef int Oid ;
typedef TYPE_1__ ObjectAddress ;
typedef int AttrNumber ;


 char VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (TYPE_1__*) ;
 char FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,int ,int ,char*,int) ;

void
FUNC_4(Oid VAR_5, AttrNumber VAR_6)
{
 ObjectAddress VAR_7;
 char *VAR_8;
 char VAR_9 = FUNC_1(VAR_5);

 if (VAR_9 != VAR_1 && VAR_9 != VAR_0)
  return;




 VAR_7.classId = VAR_2;
 VAR_7.objectId = VAR_5;
 VAR_7.objectSubId = VAR_6;
 VAR_8 = FUNC_0(&VAR_7);

 FUNC_3(&VAR_7,
       VAR_3,
       VAR_4,
       VAR_8,
       1);
 FUNC_2(VAR_8);
}
