
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int int32 ;
typedef int TupleDesc ;
struct TYPE_12__ {scalar_t__ objectSubId; void* objectId; int classId; } ;
struct TYPE_11__ {int rd_att; } ;
typedef TYPE_1__* Relation ;
typedef void* Oid ;
typedef TYPE_2__ ObjectAddress ;
typedef int NameData ;
typedef int HeapTuple ;
typedef scalar_t__ Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_8 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_2 (void*,int ,int ) ;
 void* FUNC_3 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,void*,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_7 (void*) ;
 int FUNC_8 (char const*) ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_9 (int ,int ,scalar_t__) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*,char const*,...) ;
 int FUNC_14 (int ,scalar_t__*,int*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int *,char const*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_19 (TYPE_2__*,int) ;
 int FUNC_20 (int ,void*,void*) ;
 int FUNC_21 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_22 (int ,int ) ;

ObjectAddress
FUNC_23(const char *VAR_18, Oid VAR_19,
     Oid VAR_20,
     int32 VAR_21, int32 VAR_22,
     Oid VAR_23, bool VAR_24)
{
 int VAR_25;
 Relation VAR_26;
 TupleDesc VAR_27;
 HeapTuple VAR_28;
 Oid VAR_29;
 bool VAR_30[VAR_15];
 Datum VAR_31[VAR_15];
 NameData VAR_32;
 ObjectAddress VAR_33,
    VAR_34;


 if (!VAR_18)
  FUNC_10(VAR_13, "no conversion name supplied");


 if (FUNC_9(VAR_8,
         FUNC_8(VAR_18),
         FUNC_7(VAR_19)))
  FUNC_11(VAR_13,
    (FUNC_12(VAR_12),
     FUNC_13("conversion \"%s\" already exists", VAR_18)));

 if (VAR_24)
 {




  if (FUNC_2(VAR_19,
          VAR_21,
          VAR_22))
   FUNC_11(VAR_13,
     (FUNC_12(VAR_12),
      FUNC_13("default conversion for %s to %s already exists",
       FUNC_17(VAR_21),
       FUNC_17(VAR_22))));
 }


 VAR_26 = FUNC_22(VAR_10, VAR_17);
 VAR_27 = VAR_26->rd_att;


 for (VAR_25 = 0; VAR_25 < VAR_15; VAR_25++)
 {
  VAR_30[VAR_25] = 0;
  VAR_31[VAR_25] = (Datum) ((void*)0);
 }


 FUNC_16(&VAR_32, VAR_18);
 VAR_29 = FUNC_3(VAR_26, VAR_9,
        VAR_7);
 VAR_31[VAR_7 - 1] = FUNC_7(VAR_29);
 VAR_31[VAR_2 - 1] = FUNC_6(&VAR_32);
 VAR_31[VAR_3 - 1] = FUNC_7(VAR_19);
 VAR_31[VAR_4 - 1] = FUNC_7(VAR_20);
 VAR_31[VAR_1 - 1] = FUNC_4(VAR_21);
 VAR_31[VAR_6 - 1] = FUNC_4(VAR_22);
 VAR_31[VAR_5 - 1] = FUNC_7(VAR_23);
 VAR_31[VAR_0 - 1] = FUNC_0(VAR_24);

 VAR_28 = FUNC_14(VAR_27, VAR_31, VAR_30);


 FUNC_1(VAR_26, VAR_28);

 VAR_33.classId = VAR_10;
 VAR_33.objectId = VAR_29;
 VAR_33.objectSubId = 0;


 VAR_34.classId = VAR_16;
 VAR_34.objectId = VAR_23;
 VAR_34.objectSubId = 0;
 FUNC_18(&VAR_33, &VAR_34, VAR_11);


 VAR_34.classId = VAR_14;
 VAR_34.objectId = VAR_19;
 VAR_34.objectSubId = 0;
 FUNC_18(&VAR_33, &VAR_34, VAR_11);


 FUNC_20(VAR_10, VAR_29, VAR_20);


 FUNC_19(&VAR_33, 0);


 FUNC_5(VAR_10, VAR_29, 0);

 FUNC_15(VAR_28);
 FUNC_21(VAR_26, VAR_17);

 return VAR_33;
}
