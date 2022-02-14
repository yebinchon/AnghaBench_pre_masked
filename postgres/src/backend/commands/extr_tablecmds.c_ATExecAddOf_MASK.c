
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_42__ TYPE_9__ ;
typedef struct TYPE_41__ TYPE_8__ ;
typedef struct TYPE_40__ TYPE_7__ ;
typedef struct TYPE_39__ TYPE_5__ ;
typedef struct TYPE_38__ TYPE_4__ ;
typedef struct TYPE_37__ TYPE_3__ ;
typedef struct TYPE_36__ TYPE_2__ ;
typedef struct TYPE_35__ TYPE_1__ ;


typedef int TypeName ;
typedef TYPE_2__* Type ;
typedef TYPE_3__* TupleDesc ;
struct TYPE_42__ {scalar_t__ atttypid; scalar_t__ atttypmod; scalar_t__ attcollation; int attname; scalar_t__ attisdropped; } ;
struct TYPE_41__ {void* reloftype; } ;
struct TYPE_40__ {void* oid; } ;
struct TYPE_39__ {scalar_t__ objectSubId; void* objectId; int classId; } ;
struct TYPE_38__ {TYPE_1__* rd_rel; } ;
struct TYPE_37__ {int natts; } ;
struct TYPE_36__ {int t_self; } ;
struct TYPE_35__ {scalar_t__ reloftype; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef TYPE_4__* Relation ;
typedef void* Oid ;
typedef TYPE_5__ ObjectAddress ;
typedef int LOCKMODE ;
typedef TYPE_2__* HeapTuple ;
typedef TYPE_7__* Form_pg_type ;
typedef TYPE_8__* Form_pg_class ;
typedef TYPE_9__* Form_pg_attribute ;
typedef int AttrNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,int *,TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ,void*,int ) ;
 int VAR_10 ;
 char const* FUNC_5 (int ) ;
 int FUNC_6 (void*) ;
 int VAR_11 ;
 TYPE_3__* FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*) ;
 void* FUNC_9 (TYPE_4__*) ;
 int VAR_12 ;
 int FUNC_10 (TYPE_2__*) ;
 int VAR_13 ;
 int FUNC_11 (int *,int ,int ,int ,int ) ;
 TYPE_2__* FUNC_12 (int ,int ) ;
 TYPE_9__* FUNC_13 (TYPE_3__*,int) ;
 int VAR_14 ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (void*,int ,scalar_t__,int ) ;
 int FUNC_16 (int ,char*,void*) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (char*,...) ;
 int FUNC_20 (TYPE_2__*) ;
 TYPE_3__* FUNC_21 (void*,int) ;
 int FUNC_22 (TYPE_5__*,TYPE_5__*,int ) ;
 scalar_t__ FUNC_23 (char const*,char const*,int ) ;
 int FUNC_24 (TYPE_4__*,int ,int,int *,int,int *) ;
 int FUNC_25 (int ) ;
 TYPE_2__* FUNC_26 (int ) ;
 int FUNC_27 (TYPE_4__*,int ) ;
 TYPE_4__* FUNC_28 (int ,int ) ;
 TYPE_2__* FUNC_29 (int *,int const*,int *) ;

__attribute__((used)) static ObjectAddress
FUNC_30(Relation VAR_15, const TypeName *VAR_16, LOCKMODE VAR_17)
{
 Oid VAR_18 = FUNC_9(VAR_15);
 Type VAR_19;
 Form_pg_type VAR_20;
 Oid VAR_21;
 Relation VAR_22,
    VAR_23;
 SysScanDesc VAR_24;
 ScanKeyData VAR_25;
 AttrNumber VAR_26,
    VAR_27;
 TupleDesc VAR_28,
    VAR_29;
 ObjectAddress VAR_30,
    VAR_31;
 HeapTuple VAR_32;


 VAR_19 = FUNC_29(((void*)0), VAR_16, ((void*)0));
 FUNC_14(VAR_19);
 VAR_20 = (Form_pg_type) FUNC_2(VAR_19);
 VAR_21 = VAR_20->oid;


 VAR_22 = FUNC_28(VAR_8, VAR_0);
 FUNC_11(&VAR_25,
    VAR_1,
    VAR_2, VAR_7,
    FUNC_6(VAR_18));
 VAR_24 = FUNC_24(VAR_22, VAR_9,
         1, ((void*)0), 1, &VAR_25);
 if (FUNC_3(FUNC_26(VAR_24)))
  FUNC_17(VAR_6,
    (FUNC_18(VAR_5),
     FUNC_19("typed tables cannot inherit")));
 FUNC_25(VAR_24);
 FUNC_27(VAR_22, VAR_0);





 VAR_28 = FUNC_21(VAR_21, -1);
 VAR_29 = FUNC_7(VAR_15);
 VAR_26 = 1;
 for (VAR_27 = 1; VAR_27 <= VAR_28->natts; VAR_27++)
 {
  Form_pg_attribute VAR_33,
     VAR_34;
  const char *VAR_35,
       *VAR_36;


  VAR_33 = FUNC_13(VAR_28, VAR_27 - 1);
  if (VAR_33->attisdropped)
   continue;
  VAR_35 = FUNC_5(VAR_33->attname);


  do
  {
   if (VAR_26 > VAR_29->natts)
    FUNC_17(VAR_6,
      (FUNC_18(VAR_4),
       FUNC_19("table is missing column \"%s\"",
        VAR_35)));
   VAR_34 = FUNC_13(VAR_29, VAR_26 - 1);
   VAR_26++;
  } while (VAR_34->attisdropped);
  VAR_36 = FUNC_5(VAR_34->attname);


  if (FUNC_23(VAR_36, VAR_35, VAR_10) != 0)
   FUNC_17(VAR_6,
     (FUNC_18(VAR_4),
      FUNC_19("table has column \"%s\" where type requires \"%s\"",
       VAR_36, VAR_35)));


  if (VAR_34->atttypid != VAR_33->atttypid ||
   VAR_34->atttypmod != VAR_33->atttypmod ||
   VAR_34->attcollation != VAR_33->attcollation)
   FUNC_17(VAR_6,
     (FUNC_18(VAR_4),
      FUNC_19("table \"%s\" has different type for column \"%s\"",
       FUNC_8(VAR_15), VAR_35)));
 }
 FUNC_1(VAR_28);


 for (; VAR_26 <= VAR_29->natts; VAR_26++)
 {
  Form_pg_attribute VAR_37 = FUNC_13(VAR_29,
              VAR_26 - 1);

  if (!VAR_37->attisdropped)
   FUNC_17(VAR_6,
     (FUNC_18(VAR_4),
      FUNC_19("table has extra column \"%s\"",
       FUNC_5(VAR_37->attname))));
 }


 if (VAR_15->rd_rel->reloftype)
  FUNC_15(VAR_18, VAR_14, VAR_15->rd_rel->reloftype,
          VAR_3);


 VAR_30.classId = VAR_12;
 VAR_30.objectId = VAR_18;
 VAR_30.objectSubId = 0;
 VAR_31.classId = VAR_14;
 VAR_31.objectId = VAR_21;
 VAR_31.objectSubId = 0;
 FUNC_22(&VAR_30, &VAR_31, VAR_3);


 VAR_23 = FUNC_28(VAR_12, VAR_13);
 VAR_32 = FUNC_12(VAR_11, FUNC_6(VAR_18));
 if (!FUNC_3(VAR_32))
  FUNC_16(VAR_6, "cache lookup failed for relation %u", VAR_18);
 ((Form_pg_class) FUNC_2(VAR_32))->reloftype = VAR_21;
 FUNC_0(VAR_23, &VAR_32->t_self, VAR_32);

 FUNC_4(VAR_12, VAR_18, 0);

 FUNC_20(VAR_32);
 FUNC_27(VAR_23, VAR_13);

 FUNC_10(VAR_19);

 return VAR_31;
}
