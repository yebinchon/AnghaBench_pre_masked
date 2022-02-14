
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Relation ;
typedef int Page ;
typedef int Buffer ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;

void
FUNC_11(Relation VAR_3, Buffer VAR_4)
{
 Page VAR_5 = FUNC_3(VAR_4);
 if (FUNC_6(VAR_5))
 {
  FUNC_5(VAR_3, VAR_2);
  FUNC_8(VAR_3, VAR_2);

  FUNC_4(VAR_4, VAR_0);
  if (FUNC_6(VAR_5))
  {
   FUNC_10(VAR_3, VAR_4);
   FUNC_4(VAR_4, VAR_1);
   return;
  }
  FUNC_4(VAR_4, VAR_1);
 }


 if (FUNC_0(FUNC_3(VAR_4)) ||
  FUNC_1(FUNC_3(VAR_4)))
  return;


 FUNC_7(VAR_3, FUNC_2(VAR_4),
       FUNC_9(VAR_5));
}
