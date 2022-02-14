
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int repl_repl ;
typedef int repl_null ;
struct TYPE_11__ {int oid; int nspowner; int nspname; } ;
struct TYPE_10__ {scalar_t__ t_tableOid; int t_self; } ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_namespace ;
typedef int Datum ;
typedef scalar_t__ AclResult ;
typedef int Acl ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *,TYPE_1__*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 () ;
 int FUNC_5 (scalar_t__,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,TYPE_1__*,int,int*) ;
 int FUNC_12 (scalar_t__,int ,int ) ;
 int * FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (scalar_t__,int ,int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (TYPE_1__*) ;
 TYPE_1__* FUNC_18 (TYPE_1__*,int ,int *,int*,int*) ;
 int FUNC_19 (int*,int,int) ;
 scalar_t__ FUNC_20 (int ,int ,int ) ;
 int FUNC_21 (int ,int ) ;

__attribute__((used)) static void
FUNC_22(HeapTuple VAR_11, Relation VAR_12, Oid VAR_13)
{
 Form_pg_namespace VAR_14;

 FUNC_0(VAR_11->t_tableOid == VAR_7);
 FUNC_0(FUNC_10(VAR_12) == VAR_7);

 VAR_14 = (Form_pg_namespace) FUNC_3(VAR_11);





 if (VAR_14->nspowner != VAR_13)
 {
  Datum VAR_15[VAR_8];
  bool VAR_16[VAR_8];
  bool VAR_17[VAR_8];
  Acl *VAR_18;
  Datum VAR_19;
  bool VAR_20;
  HeapTuple VAR_21;
  AclResult VAR_22;


  if (!FUNC_21(VAR_14->oid, FUNC_4()))
   FUNC_12(VAR_0, VAR_10,
         FUNC_6(VAR_14->nspname));


  FUNC_15(FUNC_4(), VAR_13);
  VAR_22 = FUNC_20(VAR_5, FUNC_4(),
           VAR_2);
  if (VAR_22 != VAR_1)
   FUNC_12(VAR_22, VAR_9,
         FUNC_16(VAR_5));

  FUNC_19(VAR_16, 0, sizeof(VAR_16));
  FUNC_19(VAR_17, 0, sizeof(VAR_17));

  VAR_17[VAR_4 - 1] = 1;
  VAR_15[VAR_4 - 1] = FUNC_7(VAR_13);





  VAR_19 = FUNC_11(VAR_6, VAR_11,
           VAR_3,
           &VAR_20);
  if (!VAR_20)
  {
   VAR_18 = FUNC_13(FUNC_2(VAR_19),
         VAR_14->nspowner, VAR_13);
   VAR_17[VAR_3 - 1] = 1;
   VAR_15[VAR_3 - 1] = FUNC_8(VAR_18);
  }

  VAR_21 = FUNC_18(VAR_11, FUNC_9(VAR_12), VAR_15, VAR_16, VAR_17);

  FUNC_1(VAR_12, &VAR_21->t_self, VAR_21);

  FUNC_17(VAR_21);


  FUNC_14(VAR_7, VAR_14->oid,
        VAR_13);
 }

 FUNC_5(VAR_7,
         VAR_14->oid, 0);
}
