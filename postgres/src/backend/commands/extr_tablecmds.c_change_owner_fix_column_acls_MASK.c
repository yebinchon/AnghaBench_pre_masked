
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int repl_repl ;
typedef int repl_null ;
struct TYPE_12__ {scalar_t__ attisdropped; } ;
struct TYPE_11__ {int t_self; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_attribute ;
typedef int Datum ;
typedef int Acl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int VAR_7 ;
 int FUNC_7 (int *,int ,int ,int ,int ) ;
 int * FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int,int ,int*) ;
 TYPE_1__* FUNC_11 (TYPE_1__*,int ,int *,int*,int*) ;
 int FUNC_12 (int*,int,int) ;
 int FUNC_13 (int ,int ,int,int *,int,int *) ;
 int FUNC_14 (int ) ;
 TYPE_1__* FUNC_15 (int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int ) ;

__attribute__((used)) static void
FUNC_18(Oid VAR_8, Oid VAR_9, Oid VAR_10)
{
 Relation VAR_11;
 SysScanDesc VAR_12;
 ScanKeyData VAR_13[1];
 HeapTuple VAR_14;

 VAR_11 = FUNC_17(VAR_2, VAR_7);
 FUNC_7(&VAR_13[0],
    VAR_1,
    VAR_4, VAR_5,
    FUNC_4(VAR_8));
 VAR_12 = FUNC_13(VAR_11, VAR_3,
         1, ((void*)0), 1, VAR_13);
 while (FUNC_3(VAR_14 = FUNC_15(VAR_12)))
 {
  Form_pg_attribute VAR_15 = (Form_pg_attribute) FUNC_2(VAR_14);
  Datum VAR_16[VAR_6];
  bool VAR_17[VAR_6];
  bool VAR_18[VAR_6];
  Acl *VAR_19;
  Datum VAR_20;
  bool VAR_21;
  HeapTuple VAR_22;


  if (VAR_15->attisdropped)
   continue;

  VAR_20 = FUNC_10(VAR_14,
        VAR_0,
        FUNC_6(VAR_11),
        &VAR_21);

  if (VAR_21)
   continue;

  FUNC_12(VAR_17, 0, sizeof(VAR_17));
  FUNC_12(VAR_18, 0, sizeof(VAR_18));

  VAR_19 = FUNC_8(FUNC_1(VAR_20),
        VAR_9, VAR_10);
  VAR_18[VAR_0 - 1] = 1;
  VAR_16[VAR_0 - 1] = FUNC_5(VAR_19);

  VAR_22 = FUNC_11(VAR_14,
          FUNC_6(VAR_11),
          VAR_16, VAR_17, VAR_18);

  FUNC_0(VAR_11, &VAR_22->t_self, VAR_22);

  FUNC_9(VAR_22);
 }
 FUNC_14(VAR_12);
 FUNC_16(VAR_11, VAR_7);
}
