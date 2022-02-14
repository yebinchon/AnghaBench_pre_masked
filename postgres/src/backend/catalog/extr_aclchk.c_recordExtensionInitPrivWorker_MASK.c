
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int values ;
typedef int replace ;
typedef int nulls ;
struct TYPE_9__ {int t_self; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_1__* HeapTuple ;
typedef int Datum ;
typedef int Acl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ,int *,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int*,int,int) ;
 int VAR_11 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int VAR_12 ;
 int FUNC_11 (int *,int,int ,int ,int) ;
 TYPE_1__* FUNC_12 (int ,int*,int*) ;
 TYPE_1__* FUNC_13 (TYPE_1__*,int ,int*,int*,int*) ;
 int FUNC_14 (int ,int ,int,int *,int,int *) ;
 int FUNC_15 (int ) ;
 TYPE_1__* FUNC_16 (int ) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,int ) ;

__attribute__((used)) static void
FUNC_19(Oid VAR_13, Oid VAR_14, int VAR_15, Acl *VAR_16)
{
 Relation VAR_17;
 ScanKeyData VAR_18[3];
 SysScanDesc VAR_19;
 HeapTuple VAR_20;
 HeapTuple VAR_21;

 VAR_17 = FUNC_18(VAR_10, VAR_12);

 FUNC_11(&VAR_18[0],
    VAR_2,
    VAR_5, VAR_7,
    FUNC_8(VAR_13));
 FUNC_11(&VAR_18[1],
    VAR_0,
    VAR_5, VAR_7,
    FUNC_8(VAR_14));
 FUNC_11(&VAR_18[2],
    VAR_3,
    VAR_5, VAR_6,
    FUNC_6(VAR_15));

 VAR_19 = FUNC_14(VAR_17, VAR_9, 1,
         ((void*)0), 3, VAR_18);


 VAR_21 = FUNC_16(VAR_19);


 if (FUNC_5(VAR_21))
 {
  Datum VAR_22[VAR_11];
  bool VAR_23[VAR_11];
  bool VAR_24[VAR_11];


  if (VAR_16)
  {
   FUNC_7(VAR_22, 0, sizeof(VAR_22));
   FUNC_7(VAR_23, 0, sizeof(VAR_23));
   FUNC_7(VAR_24, 0, sizeof(VAR_24));

   VAR_22[VAR_1 - 1] = FUNC_9(VAR_16);
   VAR_24[VAR_1 - 1] = 1;

   VAR_21 = FUNC_13(VAR_21, FUNC_10(VAR_17),
           VAR_22, VAR_23, VAR_24);

   FUNC_2(VAR_17, &VAR_21->t_self, VAR_21);
  }
  else
  {

   FUNC_0(VAR_17, &VAR_21->t_self);
  }
 }
 else
 {
  Datum VAR_25[VAR_11];
  bool VAR_26[VAR_11];







  if (VAR_16)
  {

   FUNC_7(VAR_26, 0, sizeof(VAR_26));

   VAR_25[VAR_2 - 1] = FUNC_8(VAR_13);
   VAR_25[VAR_0 - 1] = FUNC_8(VAR_14);
   VAR_25[VAR_3 - 1] = FUNC_6(VAR_15);


   VAR_25[VAR_4 - 1] =
    FUNC_3(VAR_8);

   VAR_25[VAR_1 - 1] = FUNC_9(VAR_16);

   VAR_20 = FUNC_12(FUNC_10(VAR_17), VAR_25, VAR_26);

   FUNC_1(VAR_17, VAR_20);
  }
 }

 FUNC_15(VAR_19);


 FUNC_4();

 FUNC_17(VAR_17, VAR_12);
}
