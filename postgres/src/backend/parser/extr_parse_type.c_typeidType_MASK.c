
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Type ;
typedef int Oid ;
typedef int HeapTuple ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*,int ) ;

Type
FUNC_4(Oid VAR_2)
{
 HeapTuple VAR_3;

 VAR_3 = FUNC_2(VAR_1, FUNC_1(VAR_2));
 if (!FUNC_0(VAR_3))
  FUNC_3(VAR_0, "cache lookup failed for type %u", VAR_2);
 return (Type) VAR_3;
}
