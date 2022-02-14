
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int inh; int relname; } ;
struct TYPE_4__ {int behavior; TYPE_3__* relation; int newname; int subname; scalar_t__ missing_ok; } ;
typedef TYPE_1__ RenameStmt ;
typedef int Oid ;
typedef int ObjectAddress ;
typedef int AttrNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_3__*,int ,int ,int ,int *) ;
 int VAR_5 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ,int ,int ,int ,int,int ,int ) ;

ObjectAddress
FUNC_6(RenameStmt *VAR_6)
{
 Oid VAR_7;
 AttrNumber VAR_8;
 ObjectAddress VAR_9;


 VAR_7 = FUNC_2(VAR_6->relation, VAR_0,
          VAR_6->missing_ok ? VAR_3 : 0,
          VAR_4,
          ((void*)0));

 if (!FUNC_1(VAR_7))
 {
  FUNC_3(VAR_2,
    (FUNC_4("relation \"%s\" does not exist, skipping",
      VAR_6->relation->relname)));
  return VAR_1;
 }

 VAR_8 =
  FUNC_5(VAR_7,
         VAR_6->subname,
         VAR_6->newname,
         VAR_6->relation->inh,
         0,
         0,
         VAR_6->behavior);

 FUNC_0(VAR_9, VAR_5, VAR_7, VAR_8);

 return VAR_9;
}
