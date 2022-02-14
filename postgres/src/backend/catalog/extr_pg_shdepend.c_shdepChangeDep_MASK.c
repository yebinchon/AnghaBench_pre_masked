
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int nulls ;
typedef int int32 ;
struct TYPE_12__ {scalar_t__ deptype; void* refobjid; void* refclassid; } ;
struct TYPE_11__ {int t_self; } ;
typedef int SysScanDesc ;
typedef scalar_t__ SharedDependencyType ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef void* Oid ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_shdepend ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ,int *,TYPE_1__*) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int VAR_11 ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int,int ,int ,int ) ;
 int VAR_12 ;
 void* FUNC_9 (void*) ;
 int FUNC_10 (int ,char*,void*,void*,int ,scalar_t__) ;
 TYPE_1__* FUNC_11 (TYPE_1__*) ;
 TYPE_1__* FUNC_12 (int ,int *,int*) ;
 int FUNC_13 (TYPE_1__*) ;
 scalar_t__ FUNC_14 (void*,void*,int ) ;
 int FUNC_15 (int*,int,int) ;
 int FUNC_16 (void*,void*) ;
 int FUNC_17 (int ,int ,int,int *,int,int *) ;
 int FUNC_18 (int ) ;
 TYPE_1__* FUNC_19 (int ) ;

__attribute__((used)) static void
FUNC_20(Relation VAR_13,
      Oid VAR_14, Oid VAR_15, int32 VAR_16,
      Oid VAR_17, Oid VAR_18,
      SharedDependencyType VAR_19)
{
 Oid VAR_20 = FUNC_9(VAR_14);
 HeapTuple VAR_21 = ((void*)0);
 HeapTuple VAR_22;
 ScanKeyData VAR_23[4];
 SysScanDesc VAR_24;





 FUNC_16(VAR_17, VAR_18);




 FUNC_8(&VAR_23[0],
    VAR_1,
    VAR_7, VAR_10,
    FUNC_6(VAR_20));
 FUNC_8(&VAR_23[1],
    VAR_0,
    VAR_7, VAR_10,
    FUNC_6(VAR_14));
 FUNC_8(&VAR_23[2],
    VAR_3,
    VAR_7, VAR_10,
    FUNC_6(VAR_15));
 FUNC_8(&VAR_23[3],
    VAR_4,
    VAR_7, VAR_9,
    FUNC_5(VAR_16));

 VAR_24 = FUNC_17(VAR_13, VAR_12, 1,
         ((void*)0), 4, VAR_23);

 while ((VAR_22 = FUNC_19(VAR_24)) != ((void*)0))
 {

  if (((Form_pg_shdepend) FUNC_4(VAR_22))->deptype != VAR_19)
   continue;

  if (VAR_21)
   FUNC_10(VAR_8,
     "multiple pg_shdepend entries for object %u/%u/%d deptype %c",
     VAR_14, VAR_15, VAR_16, VAR_19);
  VAR_21 = FUNC_11(VAR_22);
 }

 FUNC_18(VAR_24);

 if (FUNC_14(VAR_17, VAR_18, VAR_13))
 {

  if (VAR_21)
   FUNC_0(VAR_13, &VAR_21->t_self);
 }
 else if (VAR_21)
 {

  Form_pg_shdepend VAR_25 = (Form_pg_shdepend) FUNC_4(VAR_21);


  VAR_25->refclassid = VAR_17;
  VAR_25->refobjid = VAR_18;

  FUNC_2(VAR_13, &VAR_21->t_self, VAR_21);
 }
 else
 {

  Datum VAR_26[VAR_11];
  bool VAR_27[VAR_11];

  FUNC_15(VAR_27, 0, sizeof(VAR_27));

  VAR_26[VAR_1 - 1] = FUNC_6(VAR_20);
  VAR_26[VAR_0 - 1] = FUNC_6(VAR_14);
  VAR_26[VAR_3 - 1] = FUNC_6(VAR_15);
  VAR_26[VAR_4 - 1] = FUNC_5(VAR_16);

  VAR_26[VAR_5 - 1] = FUNC_6(VAR_17);
  VAR_26[VAR_6 - 1] = FUNC_6(VAR_18);
  VAR_26[VAR_2 - 1] = FUNC_3(VAR_19);





  VAR_21 = FUNC_12(FUNC_7(VAR_13), VAR_26, VAR_27);
  FUNC_1(VAR_13, VAR_21);
 }

 if (VAR_21)
  FUNC_13(VAR_21);
}
