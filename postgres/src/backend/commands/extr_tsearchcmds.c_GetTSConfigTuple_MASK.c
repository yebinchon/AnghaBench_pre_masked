
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int List ;
typedef int * HeapTuple ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ,int ) ;
 int VAR_1 ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static HeapTuple
FUNC_6(List *VAR_2)
{
 HeapTuple VAR_3;
 Oid VAR_4;

 VAR_4 = FUNC_5(VAR_2, 1);
 if (!FUNC_2(VAR_4))
  return ((void*)0);

 VAR_3 = FUNC_3(VAR_1, FUNC_1(VAR_4));

 if (!FUNC_0(VAR_3))
  FUNC_4(VAR_0, "cache lookup failed for text search configuration %u",
    VAR_4);

 return VAR_3;
}
