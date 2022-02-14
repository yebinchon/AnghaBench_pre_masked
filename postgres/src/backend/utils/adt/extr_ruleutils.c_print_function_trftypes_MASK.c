
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int StringInfo ;
typedef int Oid ;
typedef int HeapTuple ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int **) ;

__attribute__((used)) static void
FUNC_4(StringInfo VAR_0, HeapTuple VAR_1)
{
 Oid *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_3(VAR_1, &VAR_2);
 if (VAR_3 > 0)
 {
  int VAR_4;

  FUNC_1(VAR_0, "\n TRANSFORM ");
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  {
   if (VAR_4 != 0)
    FUNC_1(VAR_0, ", ");
   FUNC_0(VAR_0, "FOR TYPE %s", FUNC_2(VAR_2[VAR_4]));
  }
 }
}
