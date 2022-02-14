
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int StringInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,char) ;
 char FUNC_12 (int ) ;

__attribute__((used)) static void
FUNC_13(StringInfo VAR_2)
{
 char VAR_3 = FUNC_12(VAR_2);

 switch (VAR_3)
 {

  case 'B':
   FUNC_0(VAR_2);
   break;

  case 'C':
   FUNC_1(VAR_2);
   break;

  case 'I':
   FUNC_3(VAR_2);
   break;

  case 'U':
   FUNC_8(VAR_2);
   break;

  case 'D':
   FUNC_2(VAR_2);
   break;

  case 'T':
   FUNC_6(VAR_2);
   break;

  case 'R':
   FUNC_5(VAR_2);
   break;

  case 'Y':
   FUNC_7(VAR_2);
   break;

  case 'O':
   FUNC_4(VAR_2);
   break;
  default:
   FUNC_9(VAR_1,
     (FUNC_10(VAR_0),
      FUNC_11("invalid logical replication message type \"%c\"", VAR_3)));
 }
}
