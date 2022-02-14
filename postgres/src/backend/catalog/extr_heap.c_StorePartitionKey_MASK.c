
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int oidvector ;
typedef int nulls ;
typedef int int2vector ;
typedef int int16 ;
struct TYPE_16__ {scalar_t__ objectSubId; void* objectId; void* classId; } ;
struct TYPE_15__ {TYPE_1__* rd_rel; } ;
struct TYPE_14__ {scalar_t__ relkind; } ;
typedef TYPE_2__* Relation ;
typedef scalar_t__ Oid ;
typedef TYPE_3__ ObjectAddress ;
typedef int Node ;
typedef int List ;
typedef int HeapTuple ;
typedef scalar_t__ Datum ;
typedef scalar_t__ AttrNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_4 (char) ;
 void* VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_5 (int) ;
 void* VAR_12 ;
 int FUNC_6 (int*,int,int) ;
 int VAR_13 ;
 scalar_t__ FUNC_7 (void*) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 void* VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ VAR_16 ;
 int FUNC_10 (TYPE_2__*) ;
 void* FUNC_11 (TYPE_2__*) ;
 void* VAR_17 ;
 int VAR_18 ;
 int * FUNC_12 (scalar_t__*,int) ;
 int * FUNC_13 (scalar_t__*,int) ;
 int FUNC_14 (int ,scalar_t__*,int*) ;
 char* FUNC_15 (int *) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (TYPE_3__*,TYPE_3__*,int ) ;
 int FUNC_18 (TYPE_3__*,int *,void*,int ,int ,int) ;
 int FUNC_19 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_20 (int ,int ) ;

void
FUNC_21(Relation VAR_19,
      char VAR_20,
      int16 VAR_21,
      AttrNumber *VAR_22,
      List *VAR_23,
      Oid *VAR_24,
      Oid *VAR_25)
{
 int VAR_26;
 int2vector *VAR_27;
 oidvector *VAR_28;
 oidvector *VAR_29;
 Datum VAR_30;
 Relation VAR_31;
 HeapTuple VAR_32;
 Datum VAR_33[VAR_13];
 bool VAR_34[VAR_13];
 ObjectAddress VAR_35;
 ObjectAddress VAR_36;

 FUNC_0(VAR_19->rd_rel->relkind == VAR_16);


 VAR_27 = FUNC_12(VAR_22, VAR_21);
 VAR_28 = FUNC_13(VAR_24, VAR_21);
 VAR_29 = FUNC_13(VAR_25, VAR_21);


 if (VAR_23)
 {
  char *VAR_37;

  VAR_37 = FUNC_15(VAR_23);
  VAR_30 = FUNC_1(VAR_37);
  FUNC_16(VAR_37);
 }
 else
  VAR_30 = (Datum) 0;

 VAR_31 = FUNC_20(VAR_15, VAR_18);

 FUNC_6(VAR_34, 0, sizeof(VAR_34));


 if (!VAR_30)
  VAR_34[VAR_4 - 1] = 1;

 VAR_33[VAR_6 - 1] = FUNC_7(FUNC_11(VAR_19));
 VAR_33[VAR_7 - 1] = FUNC_4(VAR_20);
 VAR_33[VAR_5 - 1] = FUNC_5(VAR_21);
 VAR_33[VAR_3 - 1] = FUNC_7(VAR_12);
 VAR_33[VAR_0 - 1] = FUNC_9(VAR_27);
 VAR_33[VAR_1 - 1] = FUNC_9(VAR_28);
 VAR_33[VAR_2 - 1] = FUNC_9(VAR_29);
 VAR_33[VAR_4 - 1] = VAR_30;

 VAR_32 = FUNC_14(FUNC_10(VAR_31), VAR_33, VAR_34);

 FUNC_3(VAR_31, VAR_32);
 FUNC_19(VAR_31, VAR_18);


 VAR_35.classId = VAR_17;
 VAR_35.objectId = FUNC_11(VAR_19);
 VAR_35.objectSubId = 0;


 for (VAR_26 = 0; VAR_26 < VAR_21; VAR_26++)
 {
  VAR_36.classId = VAR_14;
  VAR_36.objectId = VAR_24[VAR_26];
  VAR_36.objectSubId = 0;

  FUNC_17(&VAR_35, &VAR_36, VAR_11);


  if (FUNC_8(VAR_25[VAR_26]) &&
   VAR_25[VAR_26] != VAR_9)
  {
   VAR_36.classId = VAR_8;
   VAR_36.objectId = VAR_25[VAR_26];
   VAR_36.objectSubId = 0;

   FUNC_17(&VAR_35, &VAR_36, VAR_11);
  }
 }







 for (VAR_26 = 0; VAR_26 < VAR_21; VAR_26++)
 {
  if (VAR_22[VAR_26] == 0)
   continue;

  VAR_36.classId = VAR_17;
  VAR_36.objectId = FUNC_11(VAR_19);
  VAR_36.objectSubId = VAR_22[VAR_26];

  FUNC_17(&VAR_36, &VAR_35, VAR_10);
 }







 if (VAR_23)
  FUNC_18(&VAR_35,
          (Node *) VAR_23,
          FUNC_11(VAR_19),
          VAR_11,
          VAR_10,
          1 );






 FUNC_2(VAR_19);
}
