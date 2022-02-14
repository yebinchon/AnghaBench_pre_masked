
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int vals; int typeName; } ;
struct TYPE_6__ {int objectId; } ;
typedef int Oid ;
typedef TYPE_1__ ObjectAddress ;
typedef TYPE_2__ CreateEnumStmt ;
typedef scalar_t__ AclResult ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 () ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,char**) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 TYPE_1__ FUNC_8 (int ,char*,int ,int ,int ,int ,int,int ,int ,int,int ,int ,int ,int ,int ,int ,int ,int ,int ,int,int ,int ,int *,int *,int,char,char,int,int ,int,int ) ;
 int FUNC_9 (scalar_t__,int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (int ) ;
 char* FUNC_14 (char*,int ) ;
 int FUNC_15 (int ,char*,int ) ;
 int FUNC_16 (char*) ;
 scalar_t__ FUNC_17 (int ,int ,int ) ;

ObjectAddress
FUNC_18(CreateEnumStmt *VAR_22)
{
 char *VAR_23;
 char *VAR_24;
 Oid VAR_25;
 AclResult VAR_26;
 Oid VAR_27;
 Oid VAR_28;
 ObjectAddress VAR_29;


 VAR_25 = FUNC_7(VAR_22->typeName,
               &VAR_23);


 VAR_26 = FUNC_17(VAR_25, FUNC_4(), VAR_1);
 if (VAR_26 != VAR_0)
  FUNC_9(VAR_26, VAR_16,
        FUNC_13(VAR_25));





 VAR_27 = FUNC_3(VAR_19, VAR_2,
           FUNC_1(VAR_23),
           FUNC_5(VAR_25));
 if (FUNC_6(VAR_27))
 {
  if (!FUNC_15(VAR_27, VAR_23, VAR_25))
   FUNC_10(VAR_5,
     (FUNC_11(VAR_4),
      FUNC_12("type \"%s\" already exists", VAR_23)));
 }


 VAR_28 = FUNC_0();


 VAR_29 =
  FUNC_8(VAR_15,
       VAR_23,
       VAR_25,
       VAR_15,
       0,
       FUNC_4(),
       sizeof(Oid),
       VAR_21,
       VAR_18,
       0,
       VAR_3,
       VAR_11,
       VAR_12,
       VAR_13,
       VAR_14,
       VAR_15,
       VAR_15,
       VAR_15,
       VAR_15,
       0,
       VAR_28,
       VAR_15,
       ((void*)0),
       ((void*)0),
       1,
       'i',
       'p',
       -1,
       0,
       0,
       VAR_15);


 FUNC_2(VAR_29.objectId, VAR_22->vals);




 VAR_24 = FUNC_14(VAR_23, VAR_25);

 FUNC_8(VAR_28,
      VAR_24,
      VAR_25,
      VAR_15,
      0,
      FUNC_4(),
      -1,
      VAR_20,
      VAR_17,
      0,
      VAR_3,
      VAR_6,
      VAR_7,
      VAR_8,
      VAR_9,
      VAR_15,
      VAR_15,
      VAR_10,
      VAR_29.objectId,
      1,
      VAR_15,
      VAR_15,
      ((void*)0),
      ((void*)0),
      0,
      'i',
      'x',
      -1,
      0,
      0,
      VAR_15);

 FUNC_16(VAR_24);

 return VAR_29;
}
