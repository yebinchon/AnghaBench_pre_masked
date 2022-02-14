
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {scalar_t__ objectSubId; int objectId; int classId; } ;
typedef int Oid ;
typedef TYPE_1__ ObjectAddress ;


 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (TYPE_1__*) ;
 char FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__*,int ,int,char*,int) ;
 int FUNC_7 (char const*,int ,int ,char*,int) ;

void
FUNC_8(Oid VAR_13, const char *VAR_14)
{
 ObjectAddress VAR_15;
 char *VAR_16;
 char VAR_17 = FUNC_4(VAR_13);
 uint16_t VAR_18 = 0;

 if (VAR_17 == VAR_3 || VAR_17 == VAR_2)
  VAR_18 = VAR_8;
 else if (VAR_17 == VAR_4)
  VAR_18 = VAR_7;
 else if (VAR_17 == VAR_5)
  VAR_18 = VAR_9;
 else
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("cannot set security labels on relations except "
      "for tables, sequences or views")));

 VAR_15.classId = VAR_6;
 VAR_15.objectId = VAR_13;
 VAR_15.objectSubId = 0;
 VAR_16 = FUNC_3(&VAR_15);




 FUNC_6(&VAR_15,
       VAR_18,
       VAR_12 |
       VAR_10,
       VAR_16,
       1);




 FUNC_7(VAR_14,
          VAR_18,
          VAR_11,
          VAR_16,
          1);
 FUNC_5(VAR_16);
}
