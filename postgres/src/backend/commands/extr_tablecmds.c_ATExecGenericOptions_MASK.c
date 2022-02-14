
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int repl_val ;
typedef int repl_repl ;
typedef int repl_null ;
struct TYPE_28__ {int fdwvalidator; } ;
struct TYPE_27__ {int fdwid; } ;
struct TYPE_26__ {int ftserver; } ;
struct TYPE_25__ {int t_self; } ;
struct TYPE_24__ {int rd_id; } ;
typedef TYPE_1__* Relation ;
typedef int List ;
typedef TYPE_2__* HeapTuple ;
typedef TYPE_3__* Form_pg_foreign_table ;
typedef TYPE_4__ ForeignServer ;
typedef TYPE_5__ ForeignDataWrapper ;
typedef int Datum ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int *,TYPE_2__*) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 TYPE_5__* FUNC_4 (int ) ;
 TYPE_4__* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ,int ,int ) ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int VAR_7 ;
 TYPE_2__* FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,TYPE_2__*,int,int*) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (char*,int ) ;
 int FUNC_18 (TYPE_2__*) ;
 TYPE_2__* FUNC_19 (TYPE_2__*,int ,int*,int*,int*) ;
 int FUNC_20 (int*,int,int) ;
 int FUNC_21 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_22 (int ,int ) ;
 int FUNC_23 (int ,int,int *,int ) ;

__attribute__((used)) static void
FUNC_24(Relation VAR_8, List *VAR_9)
{
 Relation VAR_10;
 ForeignServer *VAR_11;
 ForeignDataWrapper *VAR_12;
 HeapTuple VAR_13;
 bool VAR_14;
 Datum VAR_15[VAR_6];
 bool VAR_16[VAR_6];
 bool VAR_17[VAR_6];
 Datum VAR_18;
 Form_pg_foreign_table VAR_19;

 if (VAR_9 == VAR_5)
  return;

 VAR_10 = FUNC_22(VAR_4, VAR_7);

 VAR_13 = FUNC_13(VAR_3, VAR_8->rd_id);
 if (!FUNC_6(VAR_13))
  FUNC_15(VAR_2,
    (FUNC_16(VAR_1),
     FUNC_17("foreign table \"%s\" does not exist",
      FUNC_11(VAR_8))));
 VAR_19 = (Form_pg_foreign_table) FUNC_3(VAR_13);
 VAR_11 = FUNC_5(VAR_19->ftserver);
 VAR_12 = FUNC_4(VAR_11->fdwid);

 FUNC_20(VAR_15, 0, sizeof(VAR_15));
 FUNC_20(VAR_16, 0, sizeof(VAR_16));
 FUNC_20(VAR_17, 0, sizeof(VAR_17));


 VAR_18 = FUNC_14(VAR_3,
       VAR_13,
       VAR_0,
       &VAR_14);
 if (VAR_14)
  VAR_18 = FUNC_8(((void*)0));


 VAR_18 = FUNC_23(VAR_4,
         VAR_18,
         VAR_9,
         VAR_12->fdwvalidator);

 if (FUNC_9(FUNC_2(VAR_18)))
  VAR_15[VAR_0 - 1] = VAR_18;
 else
  VAR_16[VAR_0 - 1] = 1;

 VAR_17[VAR_0 - 1] = 1;



 VAR_13 = FUNC_19(VAR_13, FUNC_10(VAR_10),
         VAR_15, VAR_16, VAR_17);

 FUNC_1(VAR_10, &VAR_13->t_self, VAR_13);





 FUNC_0(VAR_8);

 FUNC_7(VAR_4,
         FUNC_12(VAR_8), 0);

 FUNC_21(VAR_10, VAR_7);

 FUNC_18(VAR_13);
}
