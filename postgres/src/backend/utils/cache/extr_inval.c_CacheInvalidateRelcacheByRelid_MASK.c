
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int HeapTuple ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,char*,int ) ;

void
FUNC_7(Oid VAR_2)
{
 HeapTuple VAR_3;

 FUNC_3();

 VAR_3 = FUNC_5(VAR_1, FUNC_2(VAR_2));
 if (!FUNC_1(VAR_3))
  FUNC_6(VAR_0, "cache lookup failed for relation %u", VAR_2);
 FUNC_0(VAR_3);
 FUNC_4(VAR_3);
}
