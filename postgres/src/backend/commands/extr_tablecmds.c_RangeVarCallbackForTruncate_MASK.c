
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RangeVar ;
typedef int Oid ;
typedef int HeapTuple ;
typedef int Form_pg_class ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void
FUNC_8(const RangeVar *VAR_2,
       Oid VAR_3, Oid VAR_4, void *VAR_5)
{
 HeapTuple VAR_6;


 if (!FUNC_3(VAR_3))
  return;

 VAR_6 = FUNC_5(VAR_1, FUNC_2(VAR_3));
 if (!FUNC_1(VAR_6))
  FUNC_6(VAR_0, "cache lookup failed for relation %u", VAR_3);

 FUNC_7(VAR_3, (Form_pg_class) FUNC_0(VAR_6));

 FUNC_4(VAR_6);
}
