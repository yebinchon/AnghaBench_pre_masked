
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Relation ;
typedef int LockWaitPolicy ;
typedef int LockTupleMode ;
typedef int ItemPointer ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;



 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static bool
FUNC_6(Relation VAR_2, ItemPointer VAR_3, LockTupleMode VAR_4,
      LockWaitPolicy VAR_5, bool *VAR_6)
{
 if (*VAR_6)
  return 1;

 switch (VAR_5)
 {
  case 130:
   FUNC_1(VAR_2, VAR_3, VAR_4);
   break;

  case 128:
   if (!FUNC_0(VAR_2, VAR_3, VAR_4))
    return 0;
   break;

  case 129:
   if (!FUNC_0(VAR_2, VAR_3, VAR_4))
    FUNC_3(VAR_1,
      (FUNC_4(VAR_0),
       FUNC_5("could not obtain lock on row in relation \"%s\"",
        FUNC_2(VAR_2))));
   break;
 }
 *VAR_6 = 1;

 return 1;
}
