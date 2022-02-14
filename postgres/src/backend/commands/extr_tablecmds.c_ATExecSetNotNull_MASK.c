
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int verify_new_notnull; } ;
struct TYPE_11__ {scalar_t__ attnum; int attnotnull; } ;
struct TYPE_10__ {int t_self; } ;
typedef int Relation ;
typedef int ObjectAddress ;
typedef int LOCKMODE ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_attribute ;
typedef scalar_t__ AttrNumber ;
typedef TYPE_3__ AlteredTableInfo ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int ,int ,int ,scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_8 (int ,char const*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,char const*,...) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;

__attribute__((used)) static ObjectAddress
FUNC_14(AlteredTableInfo *VAR_7, Relation VAR_8,
     const char *VAR_9, LOCKMODE VAR_10)
{
 HeapTuple VAR_11;
 AttrNumber VAR_12;
 Relation VAR_13;
 ObjectAddress VAR_14;




 VAR_13 = FUNC_13(VAR_0, VAR_6);

 VAR_11 = FUNC_8(FUNC_7(VAR_8), VAR_9);

 if (!FUNC_2(VAR_11))
  FUNC_9(VAR_3,
    (FUNC_10(VAR_2),
     FUNC_11("column \"%s\" of relation \"%s\" does not exist",
      VAR_9, FUNC_6(VAR_8))));

 VAR_12 = ((Form_pg_attribute) FUNC_1(VAR_11))->attnum;


 if (VAR_12 <= 0)
  FUNC_9(VAR_3,
    (FUNC_10(VAR_1),
     FUNC_11("cannot alter system column \"%s\"",
      VAR_9)));




 if (!((Form_pg_attribute) FUNC_1(VAR_11))->attnotnull)
 {
  ((Form_pg_attribute) FUNC_1(VAR_11))->attnotnull = 1;

  FUNC_0(VAR_13, &VAR_11->t_self, VAR_11);







  if (!VAR_7->verify_new_notnull &&
   !FUNC_4(VAR_8, (Form_pg_attribute) FUNC_1(VAR_11)))
  {

   VAR_7->verify_new_notnull = 1;
  }

  FUNC_5(VAR_14, VAR_5,
       FUNC_7(VAR_8), VAR_12);
 }
 else
  VAR_14 = VAR_4;

 FUNC_3(VAR_5,
         FUNC_7(VAR_8), VAR_12);

 FUNC_12(VAR_13, VAR_6);

 return VAR_14;
}
