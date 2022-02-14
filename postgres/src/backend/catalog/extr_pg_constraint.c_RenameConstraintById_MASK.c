
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int conname; int contypid; int conrelid; } ;
struct TYPE_8__ {int t_self; } ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_constraint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,int ,char const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_6 ;
 TYPE_1__* FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,char*,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,char const*,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (int *,char const*) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int ) ;

void
FUNC_18(Oid VAR_7, const char *VAR_8)
{
 Relation VAR_9;
 HeapTuple VAR_10;
 Form_pg_constraint VAR_11;

 VAR_9 = FUNC_17(VAR_3, VAR_6);

 VAR_10 = FUNC_7(VAR_2, FUNC_5(VAR_7));
 if (!FUNC_3(VAR_10))
  FUNC_8(VAR_5, "cache lookup failed for constraint %u", VAR_7);
 VAR_11 = (Form_pg_constraint) FUNC_2(VAR_10);




 if (FUNC_6(VAR_11->conrelid) &&
  FUNC_1(VAR_1,
        VAR_11->conrelid,
        VAR_8))
  FUNC_9(VAR_5,
    (FUNC_10(VAR_4),
     FUNC_11("constraint \"%s\" for relation \"%s\" already exists",
      VAR_8, FUNC_13(VAR_11->conrelid))));
 if (FUNC_6(VAR_11->contypid) &&
  FUNC_1(VAR_0,
        VAR_11->contypid,
        VAR_8))
  FUNC_9(VAR_5,
    (FUNC_10(VAR_4),
     FUNC_11("constraint \"%s\" for domain %s already exists",
      VAR_8, FUNC_12(VAR_11->contypid))));


 FUNC_15(&(VAR_11->conname), VAR_8);

 FUNC_0(VAR_9, &VAR_10->t_self, VAR_10);

 FUNC_4(VAR_3, VAR_7, 0);

 FUNC_14(VAR_10);
 FUNC_16(VAR_9, VAR_6);
}
