
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct AttachIndexCallbackState {int lockedParentTbl; scalar_t__ parentTblOid; scalar_t__ partitionOid; } ;
struct TYPE_5__ {scalar_t__ relkind; } ;
struct TYPE_4__ {int relname; } ;
typedef TYPE_1__ RangeVar ;
typedef scalar_t__ Oid ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_pg_class ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,int ) ;

__attribute__((used)) static void
FUNC_12(const RangeVar *VAR_7, Oid VAR_8, Oid VAR_9,
          void *VAR_10)
{
 struct AttachIndexCallbackState *VAR_11;
 Form_pg_class VAR_12;
 HeapTuple VAR_13;

 VAR_11 = (struct AttachIndexCallbackState *) VAR_10;

 if (!VAR_11->lockedParentTbl)
 {
  FUNC_3(VAR_11->parentTblOid, VAR_0);
  VAR_11->lockedParentTbl = 1;
 }







 if (VAR_8 != VAR_9 && FUNC_5(VAR_11->partitionOid))
 {
  FUNC_8(VAR_11->partitionOid, VAR_0);
  VAR_11->partitionOid = VAR_3;
 }


 if (!FUNC_5(VAR_8))
  return;

 VAR_13 = FUNC_7(VAR_6, FUNC_4(VAR_8));
 if (!FUNC_1(VAR_13))
  return;
 VAR_12 = (Form_pg_class) FUNC_0(VAR_13);
 if (VAR_12->relkind != VAR_5 &&
  VAR_12->relkind != VAR_4)
  FUNC_9(VAR_2,
    (FUNC_10(VAR_1),
     FUNC_11("\"%s\" is not an index", VAR_7->relname)));
 FUNC_6(VAR_13);





 VAR_11->partitionOid = FUNC_2(VAR_8, 0);
 FUNC_3(VAR_11->partitionOid, VAR_0);
}
