
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ ev_class; int oid; int ev_enabled; } ;
struct TYPE_8__ {int t_self; } ;
typedef int Relation ;
typedef scalar_t__ Oid ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_rewrite ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,TYPE_1__*) ;
 int FUNC_3 (char) ;
 char FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (char const*) ;
 int VAR_3 ;
 scalar_t__ FUNC_11 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (char*,char const*,int ) ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (scalar_t__) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (scalar_t__,int ) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int ,int ) ;

void
FUNC_24(Relation VAR_6, const char *VAR_7,
      char VAR_8)
{
 Relation VAR_9;
 Oid VAR_10 = FUNC_11(VAR_6);
 Oid VAR_11;
 HeapTuple VAR_12;
 Form_pg_rewrite VAR_13;
 bool VAR_14 = 0;




 VAR_9 = FUNC_23(VAR_4, VAR_5);
 VAR_12 = FUNC_12(VAR_3,
          FUNC_9(VAR_10),
          FUNC_10(VAR_7));
 if (!FUNC_7(VAR_12))
  FUNC_14(VAR_2,
    (FUNC_15(VAR_1),
     FUNC_16("rule \"%s\" for relation \"%s\" does not exist",
      VAR_7, FUNC_17(VAR_10))));

 VAR_13 = (Form_pg_rewrite) FUNC_5(VAR_12);




 VAR_11 = VAR_13->ev_class;
 FUNC_0(VAR_11 == VAR_10);
 if (!FUNC_21(VAR_11, FUNC_6()))
  FUNC_13(VAR_0, FUNC_19(FUNC_18(VAR_11)),
        FUNC_17(VAR_11));




 if (FUNC_4(VAR_13->ev_enabled) !=
  VAR_8)
 {
  VAR_13->ev_enabled = FUNC_3(VAR_8);
  FUNC_2(VAR_9, &VAR_12->t_self, VAR_12);

  VAR_14 = 1;
 }

 FUNC_8(VAR_4, VAR_13->oid, 0);

 FUNC_20(VAR_12);
 FUNC_22(VAR_9, VAR_5);






 if (VAR_14)
  FUNC_1(VAR_6);
}
