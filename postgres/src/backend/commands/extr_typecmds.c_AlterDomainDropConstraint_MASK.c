
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int TypeName ;
struct TYPE_7__ {int oid; } ;
struct TYPE_6__ {scalar_t__ objectSubId; int objectId; int classId; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_1__ ObjectAddress ;
typedef int List ;
typedef int * HeapTuple ;
typedef TYPE_2__* Form_pg_constraint ;
typedef int DropBehavior ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int ,int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (TYPE_1__,int ,int ) ;
 int FUNC_5 (int ) ;
 int VAR_12 ;
 int FUNC_6 (int *,int ,int ,int ,int ) ;
 int * FUNC_7 (int ,int ) ;
 int VAR_13 ;
 int FUNC_8 (int *) ;
 int VAR_14 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,char*,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*,char const*,int ) ;
 int * FUNC_14 (int *) ;
 int FUNC_15 (TYPE_1__*,int ,int ) ;
 int FUNC_16 (int ,int ,int,int *,int,int *) ;
 int FUNC_17 (int ) ;
 int * FUNC_18 (int ) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (int *,int *) ;

ObjectAddress
FUNC_22(List *VAR_15, const char *VAR_16,
        DropBehavior VAR_17, bool VAR_18)
{
 TypeName *VAR_19;
 Oid VAR_20;
 HeapTuple VAR_21;
 Relation VAR_22;
 Relation VAR_23;
 SysScanDesc VAR_24;
 ScanKeyData VAR_25[3];
 HeapTuple VAR_26;
 bool VAR_27 = 0;
 ObjectAddress VAR_28;


 VAR_19 = FUNC_14(VAR_15);
 VAR_20 = FUNC_21(((void*)0), VAR_19);


 VAR_22 = FUNC_20(VAR_14, VAR_12);

 VAR_21 = FUNC_7(VAR_13, FUNC_5(VAR_20));
 if (!FUNC_3(VAR_21))
  FUNC_10(VAR_7, "cache lookup failed for type %u", VAR_20);


 FUNC_9(VAR_21);


 VAR_23 = FUNC_20(VAR_4, VAR_12);


 FUNC_6(&VAR_25[0],
    VAR_1,
    VAR_3, VAR_9,
    FUNC_5(VAR_10));
 FUNC_6(&VAR_25[1],
    VAR_2,
    VAR_3, VAR_9,
    FUNC_5(VAR_20));
 FUNC_6(&VAR_25[2],
    VAR_0,
    VAR_3, VAR_8,
    FUNC_0(VAR_16));

 VAR_24 = FUNC_16(VAR_23, VAR_5, 1,
         ((void*)0), 3, VAR_25);


 if ((VAR_26 = FUNC_18(VAR_24)) != ((void*)0))
 {
  ObjectAddress VAR_29;

  VAR_29.classId = VAR_4;
  VAR_29.objectId = ((Form_pg_constraint) FUNC_2(VAR_26))->oid;
  VAR_29.objectSubId = 0;

  FUNC_15(&VAR_29, VAR_17, 0);
  VAR_27 = 1;
 }


 FUNC_17(VAR_24);
 FUNC_19(VAR_23, VAR_12);

 if (!VAR_27)
 {
  if (!VAR_18)
   FUNC_11(VAR_7,
     (FUNC_12(VAR_6),
      FUNC_13("constraint \"%s\" of domain \"%s\" does not exist",
       VAR_16, FUNC_8(VAR_19))));
  else
   FUNC_11(VAR_11,
     (FUNC_13("constraint \"%s\" of domain \"%s\" does not exist, skipping",
       VAR_16, FUNC_8(VAR_19))));
 }






 FUNC_1(VAR_22, VAR_21, ((void*)0));

 FUNC_4(VAR_28, VAR_14, VAR_20);


 FUNC_19(VAR_22, VAR_12);

 return VAR_28;
}
