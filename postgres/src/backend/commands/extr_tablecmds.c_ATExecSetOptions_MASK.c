
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int repl_repl ;
typedef int repl_null ;
struct TYPE_13__ {scalar_t__ attnum; } ;
struct TYPE_12__ {int t_self; } ;
typedef int Relation ;
typedef int ObjectAddress ;
typedef int Node ;
typedef int LOCKMODE ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_attribute ;
typedef scalar_t__ Datum ;
typedef scalar_t__ AttrNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,int ,int ,scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_8 ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_9 ;
 TYPE_1__* FUNC_9 (int ,char const*) ;
 scalar_t__ FUNC_10 (int ,TYPE_1__*,int,int*) ;
 int FUNC_11 (scalar_t__,int) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*,char const*,...) ;
 int FUNC_16 (TYPE_1__*) ;
 TYPE_1__* FUNC_17 (TYPE_1__*,int ,scalar_t__*,int*,int*) ;
 int FUNC_18 (int*,int,int) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ,int ) ;
 scalar_t__ FUNC_21 (scalar_t__,int ,int *,int *,int,int) ;

__attribute__((used)) static ObjectAddress
FUNC_22(Relation VAR_10, const char *VAR_11, Node *VAR_12,
     bool VAR_13, LOCKMODE VAR_14)
{
 Relation VAR_15;
 HeapTuple VAR_16,
    VAR_17;
 Form_pg_attribute VAR_18;
 AttrNumber VAR_19;
 Datum VAR_20,
    VAR_21;
 bool VAR_22;
 ObjectAddress VAR_23;
 Datum VAR_24[VAR_7];
 bool VAR_25[VAR_7];
 bool VAR_26[VAR_7];

 VAR_15 = FUNC_20(VAR_2, VAR_9);

 VAR_16 = FUNC_9(FUNC_7(VAR_10), VAR_11);

 if (!FUNC_2(VAR_16))
  FUNC_13(VAR_5,
    (FUNC_14(VAR_4),
     FUNC_15("column \"%s\" of relation \"%s\" does not exist",
      VAR_11, FUNC_6(VAR_10))));
 VAR_18 = (Form_pg_attribute) FUNC_1(VAR_16);

 VAR_19 = VAR_18->attnum;
 if (VAR_19 <= 0)
  FUNC_13(VAR_5,
    (FUNC_14(VAR_3),
     FUNC_15("cannot alter system column \"%s\"",
      VAR_11)));


 VAR_20 = FUNC_10(VAR_0, VAR_16, VAR_1,
       &VAR_22);
 VAR_21 = FUNC_21(VAR_22 ? (Datum) 0 : VAR_20,
          FUNC_12(VAR_6, VAR_12), ((void*)0), ((void*)0),
          0, VAR_13);

 (void) FUNC_11(VAR_21, 1);


 FUNC_18(VAR_25, 0, sizeof(VAR_25));
 FUNC_18(VAR_26, 0, sizeof(VAR_26));
 if (VAR_21 != (Datum) 0)
  VAR_24[VAR_1 - 1] = VAR_21;
 else
  VAR_25[VAR_1 - 1] = 1;
 VAR_26[VAR_1 - 1] = 1;
 VAR_17 = FUNC_17(VAR_16, FUNC_5(VAR_15),
         VAR_24, VAR_25, VAR_26);


 FUNC_0(VAR_15, &VAR_17->t_self, VAR_17);

 FUNC_3(VAR_8,
         FUNC_7(VAR_10),
         VAR_18->attnum);
 FUNC_4(VAR_23, VAR_8,
      FUNC_7(VAR_10), VAR_19);

 FUNC_16(VAR_17);

 FUNC_8(VAR_16);

 FUNC_19(VAR_15, VAR_9);

 return VAR_23;
}
