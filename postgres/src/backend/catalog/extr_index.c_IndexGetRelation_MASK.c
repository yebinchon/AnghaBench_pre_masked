
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ indexrelid; scalar_t__ indrelid; } ;
typedef scalar_t__ Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_index ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,char*,scalar_t__) ;

Oid
FUNC_7(Oid VAR_3, bool VAR_4)
{
 HeapTuple VAR_5;
 Form_pg_index VAR_6;
 Oid VAR_7;

 VAR_5 = FUNC_5(VAR_1, FUNC_3(VAR_3));
 if (!FUNC_2(VAR_5))
 {
  if (VAR_4)
   return VAR_2;
  FUNC_6(VAR_0, "cache lookup failed for index %u", VAR_3);
 }
 VAR_6 = (Form_pg_index) FUNC_1(VAR_5);
 FUNC_0(VAR_6->indexrelid == VAR_3);

 VAR_7 = VAR_6->indrelid;
 FUNC_4(VAR_5);
 return VAR_7;
}
