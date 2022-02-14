
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef int TypeName ;
typedef int PLpgSQL_type ;
typedef int Oid ;
typedef int HeapTuple ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_1 ;
 int * FUNC_4 (int ,int ,int ,int *) ;
 int FUNC_5 (int ,char*,int ) ;

PLpgSQL_type *
FUNC_6(Oid VAR_2, int32 VAR_3,
        Oid VAR_4, TypeName *VAR_5)
{
 HeapTuple VAR_6;
 PLpgSQL_type *VAR_7;

 VAR_6 = FUNC_3(VAR_1, FUNC_1(VAR_2));
 if (!FUNC_0(VAR_6))
  FUNC_5(VAR_0, "cache lookup failed for type %u", VAR_2);

 VAR_7 = FUNC_4(VAR_6, VAR_3, VAR_4, VAR_5);

 FUNC_2(VAR_6);

 return VAR_7;
}
