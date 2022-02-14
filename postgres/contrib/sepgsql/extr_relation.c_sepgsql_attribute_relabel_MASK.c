
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int objectSubId; int objectId; int classId; } ;
typedef int Oid ;
typedef TYPE_1__ ObjectAddress ;
typedef int AttrNumber ;


 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (TYPE_1__*) ;
 char FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__*,int ,int,char*,int) ;
 int FUNC_7 (char const*,int ,int ,char*,int) ;

void
FUNC_8(Oid VAR_9, AttrNumber VAR_10,
        const char *VAR_11)
{
 ObjectAddress VAR_12;
 char *VAR_13;
 char VAR_14 = FUNC_4(VAR_9);

 if (VAR_14 != VAR_3 && VAR_14 != VAR_2)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("cannot set security label on non-regular columns")));

 VAR_12.classId = VAR_4;
 VAR_12.objectId = VAR_9;
 VAR_12.objectSubId = VAR_10;
 VAR_13 = FUNC_3(&VAR_12);




 FUNC_6(&VAR_12,
       VAR_5,
       VAR_7 |
       VAR_6,
       VAR_13,
       1);




 FUNC_7(VAR_11,
          VAR_5,
          VAR_8,
          VAR_13,
          1);
 FUNC_5(VAR_13);
}
