
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int MemoryContext ;
typedef int ExpandedArrayHeader ;
typedef int Datum ;
typedef int ArrayType ;
typedef int ArrayMetaState ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int *) ;

ExpandedArrayHeader *
FUNC_5(Oid VAR_0,
          MemoryContext VAR_1,
          ArrayMetaState *VAR_2)
{
 ArrayType *VAR_3 = FUNC_2(VAR_0);
 Datum VAR_4;

 VAR_4 = FUNC_3(FUNC_1(VAR_3), VAR_1, VAR_2);
 FUNC_4(VAR_3);
 return (ExpandedArrayHeader *) FUNC_0(VAR_4);
}
