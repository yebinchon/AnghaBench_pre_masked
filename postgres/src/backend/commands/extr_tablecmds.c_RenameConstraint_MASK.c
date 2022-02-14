
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ inh; int relname; } ;
struct TYPE_4__ {scalar_t__ renameType; TYPE_3__* relation; int newname; int subname; scalar_t__ missing_ok; int object; } ;
typedef TYPE_1__ RenameStmt ;
typedef int Relation ;
typedef int Oid ;
typedef int ObjectAddress ;
typedef int HeapTuple ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (TYPE_3__*,int ,int ,int ,int *) ;
 int FUNC_4 (int ) ;
 int VAR_10 ;
 int FUNC_5 (int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,int ,int ,int,int,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int *,int ) ;

ObjectAddress
FUNC_16(RenameStmt *VAR_13)
{
 Oid VAR_14 = VAR_3;
 Oid VAR_15 = VAR_3;

 if (VAR_13->renameType == VAR_7)
 {
  Relation VAR_16;
  HeapTuple VAR_17;

  VAR_15 = FUNC_15(((void*)0), FUNC_11(FUNC_6(VAR_4, VAR_13->object)));
  VAR_16 = FUNC_14(VAR_12, VAR_10);
  VAR_17 = FUNC_5(VAR_11, FUNC_1(VAR_15));
  if (!FUNC_0(VAR_17))
   FUNC_8(VAR_1, "cache lookup failed for type %u", VAR_15);
  FUNC_7(VAR_17);
  FUNC_4(VAR_17);
  FUNC_13(VAR_16, VAR_6);
 }
 else
 {

  VAR_14 = FUNC_3(VAR_13->relation, VAR_0,
           VAR_13->missing_ok ? VAR_8 : 0,
           VAR_9,
           ((void*)0));
  if (!FUNC_2(VAR_14))
  {
   FUNC_9(VAR_5,
     (FUNC_10("relation \"%s\" does not exist, skipping",
       VAR_13->relation->relname)));
   return VAR_2;
  }
 }

 return
  FUNC_12(VAR_14, VAR_15,
           VAR_13->subname,
           VAR_13->newname,
           (VAR_13->relation &&
         VAR_13->relation->inh),
           0,
           0 );

}
