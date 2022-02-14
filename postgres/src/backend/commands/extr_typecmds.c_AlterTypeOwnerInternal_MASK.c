
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int repl_repl ;
typedef int repl_null ;
struct TYPE_11__ {int typarray; int typowner; } ;
struct TYPE_10__ {int t_self; } ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_type ;
typedef int Datum ;
typedef int Acl ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int VAR_4 ;
 TYPE_1__* FUNC_8 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,char*,int ) ;
 int FUNC_11 (TYPE_1__*,int,int ,int*) ;
 TYPE_1__* FUNC_12 (TYPE_1__*,int ,int *,int*,int*) ;
 int FUNC_13 (int*,int,int) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ) ;

void
FUNC_16(Oid VAR_7, Oid VAR_8)
{
 Relation VAR_9;
 HeapTuple VAR_10;
 Form_pg_type VAR_11;
 Datum VAR_12[VAR_3];
 bool VAR_13[VAR_3];
 bool VAR_14[VAR_3];
 Acl *VAR_15;
 Datum VAR_16;
 bool VAR_17;

 VAR_9 = FUNC_15(VAR_6, VAR_4);

 VAR_10 = FUNC_8(VAR_5, FUNC_4(VAR_7));
 if (!FUNC_3(VAR_10))
  FUNC_10(VAR_2, "cache lookup failed for type %u", VAR_7);
 VAR_11 = (Form_pg_type) FUNC_2(VAR_10);

 FUNC_13(VAR_13, 0, sizeof(VAR_13));
 FUNC_13(VAR_14, 0, sizeof(VAR_14));

 VAR_14[VAR_1 - 1] = 1;
 VAR_12[VAR_1 - 1] = FUNC_4(VAR_8);

 VAR_16 = FUNC_11(VAR_10,
       VAR_0,
       FUNC_7(VAR_9),
       &VAR_17);

 if (!VAR_17)
 {
  VAR_15 = FUNC_9(FUNC_1(VAR_16),
        VAR_11->typowner, VAR_8);
  VAR_14[VAR_0 - 1] = 1;
  VAR_12[VAR_0 - 1] = FUNC_6(VAR_15);
 }

 VAR_10 = FUNC_12(VAR_10, FUNC_7(VAR_9), VAR_12, VAR_13,
       VAR_14);

 FUNC_0(VAR_9, &VAR_10->t_self, VAR_10);


 if (FUNC_5(VAR_11->typarray))
  FUNC_16(VAR_11->typarray, VAR_8);


 FUNC_14(VAR_9, VAR_4);
}
