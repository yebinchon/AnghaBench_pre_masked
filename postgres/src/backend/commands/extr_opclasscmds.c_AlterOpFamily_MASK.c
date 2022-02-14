
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int items; scalar_t__ isDrop; int opfamilyname; int amname; } ;
struct TYPE_9__ {int oid; } ;
struct TYPE_8__ {int amstrategies; int amsupport; } ;
typedef int Oid ;
typedef TYPE_1__ IndexAmRoutine ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_pg_am ;
typedef TYPE_3__ AlterOpFamilyStmt ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,int ,int,int,int ) ;
 int FUNC_1 (TYPE_3__*,int ,int ,int,int,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_4 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 () ;

Oid
FUNC_13(AlterOpFamilyStmt *VAR_5)
{
 Oid VAR_6,
    VAR_7;
 int VAR_8,
    VAR_9;
 HeapTuple VAR_10;
 Form_pg_am VAR_11;
 IndexAmRoutine *VAR_12;


 VAR_10 = FUNC_7(VAR_0, FUNC_2(VAR_5->amname));
 if (!FUNC_5(VAR_10))
  FUNC_8(VAR_3,
    (FUNC_9(VAR_2),
     FUNC_10("access method \"%s\" does not exist",
      VAR_5->amname)));

 VAR_11 = (Form_pg_am) FUNC_3(VAR_10);
 VAR_6 = VAR_11->oid;
 VAR_12 = FUNC_4(VAR_6, 0);
 FUNC_6(VAR_10);

 VAR_8 = VAR_12->amstrategies;

 if (VAR_8 <= 0)
  VAR_8 = VAR_4;
 VAR_9 = VAR_12->amsupport;




 VAR_7 = FUNC_11(VAR_6, VAR_5->opfamilyname, 0);






 if (!FUNC_12())
  FUNC_8(VAR_3,
    (FUNC_9(VAR_1),
     FUNC_10("must be superuser to alter an operator family")));




 if (VAR_5->isDrop)
  FUNC_1(VAR_5, VAR_6, VAR_7,
        VAR_8, VAR_9, VAR_5->items);
 else
  FUNC_0(VAR_5, VAR_6, VAR_7,
       VAR_8, VAR_9, VAR_5->items);

 return VAR_7;
}
