
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


typedef int repl_val ;
typedef int repl_repl ;
typedef int repl_null ;
struct TYPE_31__ {int fdwvalidator; } ;
struct TYPE_30__ {int fdwid; } ;
struct TYPE_29__ {scalar_t__ attnum; } ;
struct TYPE_28__ {int ftserver; } ;
struct TYPE_27__ {int t_self; } ;
struct TYPE_26__ {int rd_id; } ;
typedef TYPE_1__* Relation ;
typedef int ObjectAddress ;
typedef int List ;
typedef int LOCKMODE ;
typedef TYPE_2__* HeapTuple ;
typedef TYPE_3__* Form_pg_foreign_table ;
typedef TYPE_4__* Form_pg_attribute ;
typedef TYPE_5__ ForeignServer ;
typedef TYPE_6__ ForeignDataWrapper ;
typedef int Datum ;
typedef scalar_t__ AttrNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int *,TYPE_2__*) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 TYPE_6__* FUNC_3 (int ) ;
 TYPE_5__* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_10 ;
 int FUNC_6 (int ,int ,scalar_t__) ;
 int * VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (int ,int ,int ,scalar_t__) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*) ;
 char const* FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int VAR_13 ;
 int FUNC_13 (TYPE_2__*) ;
 int VAR_14 ;
 TYPE_2__* FUNC_14 (int ,int ) ;
 TYPE_2__* FUNC_15 (int ,char const*) ;
 int FUNC_16 (int ,TYPE_2__*,int,int*) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (char*,char const*,...) ;
 int FUNC_20 (TYPE_2__*) ;
 TYPE_2__* FUNC_21 (TYPE_2__*,int ,int*,int*,int*) ;
 int FUNC_22 (int*,int,int) ;
 int FUNC_23 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_24 (int ,int ) ;
 int FUNC_25 (int ,int,int *,int ) ;

__attribute__((used)) static ObjectAddress
FUNC_26(Relation VAR_15,
        const char *VAR_16,
        List *VAR_17,
        LOCKMODE VAR_18)
{
 Relation VAR_19;
 Relation VAR_20;
 ForeignServer *VAR_21;
 ForeignDataWrapper *VAR_22;
 HeapTuple VAR_23;
 HeapTuple VAR_24;
 bool VAR_25;
 Datum VAR_26[VAR_12];
 bool VAR_27[VAR_12];
 bool VAR_28[VAR_12];
 Datum VAR_29;
 Form_pg_foreign_table VAR_30;
 Form_pg_attribute VAR_31;
 AttrNumber VAR_32;
 ObjectAddress VAR_33;

 if (VAR_17 == VAR_11)
  return VAR_10;


 VAR_19 = FUNC_24(VAR_9, VAR_1);
 VAR_23 = FUNC_14(VAR_8, VAR_15->rd_id);
 if (!FUNC_5(VAR_23))
  FUNC_17(VAR_7,
    (FUNC_18(VAR_6),
     FUNC_19("foreign table \"%s\" does not exist",
      FUNC_11(VAR_15))));
 VAR_30 = (Form_pg_foreign_table) FUNC_2(VAR_23);
 VAR_21 = FUNC_4(VAR_30->ftserver);
 VAR_22 = FUNC_3(VAR_21->fdwid);

 FUNC_23(VAR_19, VAR_1);
 FUNC_13(VAR_23);

 VAR_20 = FUNC_24(VAR_3, VAR_14);
 VAR_23 = FUNC_15(FUNC_12(VAR_15), VAR_16);
 if (!FUNC_5(VAR_23))
  FUNC_17(VAR_7,
    (FUNC_18(VAR_5),
     FUNC_19("column \"%s\" of relation \"%s\" does not exist",
      VAR_16, FUNC_11(VAR_15))));


 VAR_31 = (Form_pg_attribute) FUNC_2(VAR_23);
 VAR_32 = VAR_31->attnum;
 if (VAR_32 <= 0)
  FUNC_17(VAR_7,
    (FUNC_18(VAR_4),
     FUNC_19("cannot alter system column \"%s\"", VAR_16)));



 FUNC_22(VAR_26, 0, sizeof(VAR_26));
 FUNC_22(VAR_27, 0, sizeof(VAR_27));
 FUNC_22(VAR_28, 0, sizeof(VAR_28));


 VAR_29 = FUNC_16(VAR_0,
       VAR_23,
       VAR_2,
       &VAR_25);
 if (VAR_25)
  VAR_29 = FUNC_8(((void*)0));


 VAR_29 = FUNC_25(VAR_3,
         VAR_29,
         VAR_17,
         VAR_22->fdwvalidator);

 if (FUNC_9(FUNC_1(VAR_29)))
  VAR_26[VAR_2 - 1] = VAR_29;
 else
  VAR_27[VAR_2 - 1] = 1;

 VAR_28[VAR_2 - 1] = 1;



 VAR_24 = FUNC_21(VAR_23, FUNC_10(VAR_20),
         VAR_26, VAR_27, VAR_28);

 FUNC_0(VAR_20, &VAR_24->t_self, VAR_24);

 FUNC_6(VAR_13,
         FUNC_12(VAR_15),
         VAR_31->attnum);
 FUNC_7(VAR_33, VAR_13,
      FUNC_12(VAR_15), VAR_32);

 FUNC_13(VAR_23);

 FUNC_23(VAR_20, VAR_14);

 FUNC_20(VAR_24);

 return VAR_33;
}
