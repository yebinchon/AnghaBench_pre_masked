
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RangeVar ;
typedef int Oid ;
typedef int HeapTuple ;
typedef scalar_t__ Form_pg_class ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_6(const RangeVar *VAR_1, Oid VAR_2, Oid VAR_3,
           void *VAR_4)
{
 HeapTuple VAR_5;
 Form_pg_class VAR_6;

 VAR_5 = FUNC_4(VAR_0, FUNC_2(VAR_2));
 if (!FUNC_1(VAR_5))
  return;
 VAR_6 = (Form_pg_class) FUNC_0(VAR_5);
 FUNC_5(VAR_2, VAR_6, 0);
 FUNC_3(VAR_5);
}
