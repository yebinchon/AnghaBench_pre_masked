
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ objectSubId; int objectId; void* classId; } ;
typedef int Relation ;
typedef int Oid ;
typedef int ObjectType ;
typedef TYPE_1__ ObjectAddress ;
typedef int List ;
typedef int LOCKMODE ;
typedef scalar_t__ AttrNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 void* VAR_5 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (int ,char const*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int ,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;
 char* FUNC_14 (int ) ;

__attribute__((used)) static ObjectAddress
FUNC_15(ObjectType VAR_6, List *VAR_7,
        Relation *VAR_8, LOCKMODE VAR_9,
        bool VAR_10)
{
 ObjectAddress VAR_11;
 List *VAR_12;
 Oid VAR_13;
 Relation VAR_14;
 const char *VAR_15;
 AttrNumber VAR_16;


 if (FUNC_8(VAR_7) < 2)
  FUNC_2(VAR_2,
    (FUNC_3(VAR_0),
     FUNC_4("column name must be qualified")));
 VAR_15 = FUNC_14(FUNC_6(FUNC_9(VAR_7)));
 VAR_12 = FUNC_10(FUNC_7(VAR_7), FUNC_8(VAR_7) - 1);

 VAR_14 = FUNC_13(FUNC_11(VAR_12), VAR_9);
 VAR_13 = FUNC_1(VAR_14);


 VAR_16 = FUNC_5(VAR_13, VAR_15);
 if (VAR_16 == VAR_3)
 {
  if (!VAR_10)
   FUNC_2(VAR_2,
     (FUNC_3(VAR_1),
      FUNC_4("column \"%s\" of relation \"%s\" does not exist",
       VAR_15, FUNC_0(VAR_12))));

  VAR_11.classId = VAR_5;
  VAR_11.objectId = VAR_4;
  VAR_11.objectSubId = VAR_3;
  FUNC_12(VAR_14, VAR_9);
  return VAR_11;
 }

 VAR_11.classId = VAR_5;
 VAR_11.objectId = VAR_13;
 VAR_11.objectSubId = VAR_16;

 *VAR_8 = VAR_14;
 return VAR_11;
}
