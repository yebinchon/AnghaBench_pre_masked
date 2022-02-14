
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ ev_type; int rulename; int oid; } ;
struct TYPE_8__ {int t_self; } ;
typedef int Relation ;
typedef int RangeVar ;
typedef int Oid ;
typedef int ObjectAddress ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_rewrite ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ,char const*) ;
 int VAR_6 ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char const*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int *,int ,int ,int ,int *) ;
 int FUNC_9 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__* FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (int *,char const*) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,int ) ;

ObjectAddress
FUNC_20(RangeVar *VAR_11, const char *VAR_12,
      const char *VAR_13)
{
 Oid VAR_14;
 Relation VAR_15;
 Relation VAR_16;
 HeapTuple VAR_17;
 Form_pg_rewrite VAR_18;
 Oid VAR_19;
 ObjectAddress VAR_20;





 VAR_14 = FUNC_8(VAR_11, VAR_0,
          0,
          VAR_8,
          ((void*)0));


 VAR_15 = FUNC_17(VAR_14, VAR_6);


 VAR_16 = FUNC_19(VAR_9, VAR_10);


 VAR_17 = FUNC_10(VAR_7,
          FUNC_6(VAR_14),
          FUNC_7(VAR_12));
 if (!FUNC_3(VAR_17))
  FUNC_11(VAR_5,
    (FUNC_12(VAR_4),
     FUNC_13("rule \"%s\" for relation \"%s\" does not exist",
      VAR_12, FUNC_9(VAR_15))));
 VAR_18 = (Form_pg_rewrite) FUNC_2(VAR_17);
 VAR_19 = VAR_18->oid;


 if (FUNC_4(VAR_14, VAR_13))
  FUNC_11(VAR_5,
    (FUNC_12(VAR_2),
     FUNC_13("rule \"%s\" for relation \"%s\" already exists",
      VAR_13, FUNC_9(VAR_15))));





 if (VAR_18->ev_type == VAR_1 + '0')
  FUNC_11(VAR_5,
    (FUNC_12(VAR_3),
     FUNC_13("renaming an ON SELECT rule is not allowed")));


 FUNC_15(&(VAR_18->rulename), VAR_13);

 FUNC_1(VAR_16, &VAR_17->t_self, VAR_17);

 FUNC_14(VAR_17);
 FUNC_18(VAR_16, VAR_10);






 FUNC_0(VAR_15);

 FUNC_5(VAR_20, VAR_9, VAR_19);




 FUNC_16(VAR_15, VAR_6);

 return VAR_20;
}
