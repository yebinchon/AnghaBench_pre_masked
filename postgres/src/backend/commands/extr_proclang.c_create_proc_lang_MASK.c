
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int values ;
typedef int replaces ;
typedef int nulls ;
typedef int TupleDesc ;
struct TYPE_19__ {void* oid; } ;
struct TYPE_18__ {int t_self; } ;
struct TYPE_17__ {void* objectId; scalar_t__ objectSubId; void* classId; } ;
typedef int Relation ;
typedef void* Oid ;
typedef TYPE_1__ ObjectAddress ;
typedef int NameData ;
typedef TYPE_2__* HeapTuple ;
typedef TYPE_3__* Form_pg_language ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ,int *,TYPE_2__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (TYPE_2__*) ;
 void* FUNC_4 (int ,int ,int) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (void*,void*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 int FUNC_7 (int *) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_8 (void*) ;
 scalar_t__ FUNC_9 (void*) ;
 int FUNC_10 (char const*) ;
 void* VAR_18 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_2__*) ;
 int VAR_19 ;
 TYPE_2__* FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ,char const*) ;
 int FUNC_15 (void*,void*,int) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (char*,char const*) ;
 TYPE_2__* FUNC_19 (int ,int*,int*) ;
 TYPE_2__* FUNC_20 (TYPE_2__*,int ,int*,int*,int*) ;
 int FUNC_21 (int*,int,int) ;
 int FUNC_22 (int *,char const*) ;
 int FUNC_23 (void*,void*) ;
 int FUNC_24 (TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_25 (TYPE_1__*,int) ;
 int FUNC_26 (void*,void*,void*) ;
 int FUNC_27 (int ,int ) ;
 int FUNC_28 (void*,int ) ;

__attribute__((used)) static ObjectAddress
FUNC_29(const char *VAR_20, bool VAR_21,
     Oid VAR_22, Oid VAR_23, Oid VAR_24,
     Oid VAR_25, bool VAR_26)
{
 Relation VAR_27;
 TupleDesc VAR_28;
 Datum VAR_29[VAR_16];
 bool VAR_30[VAR_16];
 bool VAR_31[VAR_16];
 NameData VAR_32;
 HeapTuple VAR_33;
 HeapTuple VAR_34;
 Oid VAR_35;
 bool VAR_36;
 ObjectAddress VAR_37,
    VAR_38;

 VAR_27 = FUNC_28(VAR_15, VAR_19);
 VAR_28 = FUNC_11(VAR_27);


 FUNC_21(VAR_29, 0, sizeof(VAR_29));
 FUNC_21(VAR_30, 0, sizeof(VAR_30));
 FUNC_21(VAR_31, 1, sizeof(VAR_31));

 FUNC_22(&VAR_32, VAR_20);
 VAR_29[VAR_4 - 1] = FUNC_7(&VAR_32);
 VAR_29[VAR_5 - 1] = FUNC_8(VAR_22);
 VAR_29[VAR_3 - 1] = FUNC_0(1);
 VAR_29[VAR_7 - 1] = FUNC_0(VAR_26);
 VAR_29[VAR_6 - 1] = FUNC_8(VAR_23);
 VAR_29[VAR_2 - 1] = FUNC_8(VAR_24);
 VAR_29[VAR_8 - 1] = FUNC_8(VAR_25);
 VAR_30[VAR_1 - 1] = 1;


 VAR_33 = FUNC_13(VAR_13, FUNC_10(VAR_20));

 if (FUNC_5(VAR_33))
 {
  Form_pg_language VAR_39 = (Form_pg_language) FUNC_3(VAR_33);


  if (!VAR_21)
   FUNC_16(VAR_12,
     (FUNC_17(VAR_11),
      FUNC_18("language \"%s\" already exists", VAR_20)));
  if (!FUNC_23(VAR_39->oid, VAR_22))
   FUNC_14(VAR_0, VAR_17,
         VAR_20);





  VAR_31[VAR_9 - 1] = 0;
  VAR_31[VAR_5 - 1] = 0;
  VAR_31[VAR_1 - 1] = 0;


  VAR_34 = FUNC_20(VAR_33, VAR_28, VAR_29, VAR_30, VAR_31);
  FUNC_2(VAR_27, &VAR_34->t_self, VAR_34);

  VAR_35 = VAR_39->oid;
  FUNC_12(VAR_33);
  VAR_36 = 1;
 }
 else
 {

  VAR_35 = FUNC_4(VAR_27, VAR_14,
          VAR_9);
  VAR_29[VAR_9 - 1] = FUNC_8(VAR_35);
  VAR_34 = FUNC_19(VAR_28, VAR_29, VAR_30);
  FUNC_1(VAR_27, VAR_34);
  VAR_36 = 0;
 }







 VAR_37.classId = VAR_15;
 VAR_37.objectId = VAR_35;
 VAR_37.objectSubId = 0;

 if (VAR_36)
  FUNC_15(VAR_37.classId, VAR_37.objectId, 1);


 if (!VAR_36)
  FUNC_26(VAR_37.classId, VAR_37.objectId,
        VAR_22);


 FUNC_25(&VAR_37, VAR_36);


 VAR_38.classId = VAR_18;
 VAR_38.objectId = VAR_23;
 VAR_38.objectSubId = 0;
 FUNC_24(&VAR_37, &VAR_38, VAR_10);


 if (FUNC_9(VAR_24))
 {
  VAR_38.classId = VAR_18;
  VAR_38.objectId = VAR_24;
  VAR_38.objectSubId = 0;
  FUNC_24(&VAR_37, &VAR_38, VAR_10);
 }


 if (FUNC_9(VAR_25))
 {
  VAR_38.classId = VAR_18;
  VAR_38.objectId = VAR_25;
  VAR_38.objectSubId = 0;
  FUNC_24(&VAR_37, &VAR_38, VAR_10);
 }


 FUNC_6(VAR_15, VAR_37.objectId, 0);

 FUNC_27(VAR_27, VAR_19);

 return VAR_37;
}
