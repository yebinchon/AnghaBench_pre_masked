
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int repl_repl ;
typedef int repl_null ;
struct TYPE_13__ {int fdwname; } ;
struct TYPE_12__ {int oid; int srvowner; int srvfdw; int srvname; } ;
struct TYPE_11__ {int t_self; } ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_foreign_server ;
typedef TYPE_3__ ForeignDataWrapper ;
typedef int Datum ;
typedef scalar_t__ AclResult ;
typedef int Acl ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 TYPE_3__* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__,int ,int ) ;
 int * FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (TYPE_1__*,int,int ,int*) ;
 TYPE_1__* FUNC_15 (TYPE_1__*,int ,int *,int*,int*) ;
 int FUNC_16 (int*,int,int) ;
 scalar_t__ FUNC_17 (int ,int ,int ) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 () ;

__attribute__((used)) static void
FUNC_20(Relation VAR_9, HeapTuple VAR_10, Oid VAR_11)
{
 Form_pg_foreign_server VAR_12;
 Datum VAR_13[VAR_6];
 bool VAR_14[VAR_6];
 bool VAR_15[VAR_6];
 Acl *VAR_16;
 Datum VAR_17;
 bool VAR_18;

 VAR_12 = (Form_pg_foreign_server) FUNC_2(VAR_10);

 if (VAR_12->srvowner != VAR_11)
 {

  if (!FUNC_19())
  {
   Oid VAR_19;
   AclResult VAR_20;

   VAR_19 = VAR_12->oid;


   if (!FUNC_18(VAR_19, FUNC_4()))
    FUNC_10(VAR_0, VAR_8,
          FUNC_6(VAR_12->srvname));


   FUNC_13(FUNC_4(), VAR_11);


   VAR_20 = FUNC_17(VAR_12->srvfdw, VAR_11, VAR_2);
   if (VAR_20 != VAR_1)
   {
    ForeignDataWrapper *VAR_21 = FUNC_3(VAR_12->srvfdw);

    FUNC_10(VAR_20, VAR_7, VAR_21->fdwname);
   }
  }

  FUNC_16(VAR_14, 0, sizeof(VAR_14));
  FUNC_16(VAR_15, 0, sizeof(VAR_15));

  VAR_15[VAR_4 - 1] = 1;
  VAR_13[VAR_4 - 1] = FUNC_7(VAR_11);

  VAR_17 = FUNC_14(VAR_10,
        VAR_3,
        FUNC_9(VAR_9),
        &VAR_18);

  if (!VAR_18)
  {
   VAR_16 = FUNC_11(FUNC_1(VAR_17),
         VAR_12->srvowner, VAR_11);
   VAR_15[VAR_3 - 1] = 1;
   VAR_13[VAR_3 - 1] = FUNC_8(VAR_16);
  }

  VAR_10 = FUNC_15(VAR_10, FUNC_9(VAR_9), VAR_13, VAR_14,
        VAR_15);

  FUNC_0(VAR_9, &VAR_10->t_self, VAR_10);


  FUNC_12(VAR_5, VAR_12->oid,
        VAR_11);
 }

 FUNC_5(VAR_5,
         VAR_12->oid, 0);
}
