
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int relname; } ;
struct TYPE_4__ {scalar_t__ renameType; int newname; TYPE_3__* relation; scalar_t__ missing_ok; } ;
typedef TYPE_1__ RenameStmt ;
typedef int Oid ;
typedef int ObjectAddress ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_3__*,int ,int ,int ,void*) ;
 int VAR_6 ;
 int FUNC_3 (int ,int ,int,int) ;
 int VAR_7 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,int ) ;

ObjectAddress
FUNC_6(RenameStmt *VAR_8)
{
 bool VAR_9 = VAR_8->renameType == VAR_3;
 Oid VAR_10;
 ObjectAddress VAR_11;
 VAR_10 = FUNC_2(VAR_8->relation,
          VAR_9 ? VAR_7 : VAR_0,
          VAR_8->missing_ok ? VAR_4 : 0,
          VAR_5,
          (void *) VAR_8);

 if (!FUNC_1(VAR_10))
 {
  FUNC_4(VAR_2,
    (FUNC_5("relation \"%s\" does not exist, skipping",
      VAR_8->relation->relname)));
  return VAR_1;
 }


 FUNC_3(VAR_10, VAR_8->newname, 0, VAR_9);

 FUNC_0(VAR_11, VAR_6, VAR_10);

 return VAR_11;
}
