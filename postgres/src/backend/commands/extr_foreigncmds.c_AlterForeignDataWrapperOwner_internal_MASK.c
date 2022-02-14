
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int repl_repl ;
typedef int repl_null ;
struct TYPE_10__ {int oid; int fdwowner; int fdwname; } ;
struct TYPE_9__ {int t_self; } ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_foreign_data_wrapper ;
typedef int Datum ;
typedef int Acl ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int * FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,int ) ;
 int FUNC_14 (TYPE_1__*,int,int ,int*) ;
 TYPE_1__* FUNC_15 (TYPE_1__*,int ,int *,int*,int*) ;
 int FUNC_16 (int*,int,int) ;
 int FUNC_17 () ;
 int FUNC_18 (int ) ;

__attribute__((used)) static void
FUNC_19(Relation VAR_6, HeapTuple VAR_7, Oid VAR_8)
{
 Form_pg_foreign_data_wrapper VAR_9;
 Datum VAR_10[VAR_5];
 bool VAR_11[VAR_5];
 bool VAR_12[VAR_5];
 Acl *VAR_13;
 Datum VAR_14;
 bool VAR_15;

 VAR_9 = (Form_pg_foreign_data_wrapper) FUNC_2(VAR_7);


 if (!FUNC_17())
  FUNC_10(VAR_3,
    (FUNC_11(VAR_2),
     FUNC_13("permission denied to change owner of foreign-data wrapper \"%s\"",
      FUNC_4(VAR_9->fdwname)),
     FUNC_12("Must be superuser to change owner of a foreign-data wrapper.")));


 if (!FUNC_18(VAR_8))
  FUNC_10(VAR_3,
    (FUNC_11(VAR_2),
     FUNC_13("permission denied to change owner of foreign-data wrapper \"%s\"",
      FUNC_4(VAR_9->fdwname)),
     FUNC_12("The owner of a foreign-data wrapper must be a superuser.")));

 if (VAR_9->fdwowner != VAR_8)
 {
  FUNC_16(VAR_11, 0, sizeof(VAR_11));
  FUNC_16(VAR_12, 0, sizeof(VAR_12));

  VAR_12[VAR_1 - 1] = 1;
  VAR_10[VAR_1 - 1] = FUNC_5(VAR_8);

  VAR_14 = FUNC_14(VAR_7,
        VAR_0,
        FUNC_7(VAR_6),
        &VAR_15);

  if (!VAR_15)
  {
   VAR_13 = FUNC_8(FUNC_1(VAR_14),
         VAR_9->fdwowner, VAR_8);
   VAR_12[VAR_0 - 1] = 1;
   VAR_10[VAR_0 - 1] = FUNC_6(VAR_13);
  }

  VAR_7 = FUNC_15(VAR_7, FUNC_7(VAR_6), VAR_10, VAR_11,
        VAR_12);

  FUNC_0(VAR_6, &VAR_7->t_self, VAR_7);


  FUNC_9(VAR_4,
        VAR_9->oid,
        VAR_8);
 }

 FUNC_3(VAR_4,
         VAR_9->oid, 0);
}
