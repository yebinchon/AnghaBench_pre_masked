
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int HeapTuple ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char const*) ;

bool
FUNC_3(Oid VAR_0, const char *VAR_1)
{
 HeapTuple VAR_2;

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (!FUNC_0(VAR_2))
  return 0;
 FUNC_1(VAR_2);
 return 1;
}
