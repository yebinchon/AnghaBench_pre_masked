
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Buffer ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 scalar_t__* VAR_2 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,char*,int) ;

void
FUNC_7(Buffer VAR_3)
{
 if (!FUNC_2(VAR_3))
  FUNC_6(VAR_1, "bad buffer ID: %d", VAR_3);

 if (FUNC_1(VAR_3))
 {
  FUNC_4(VAR_0, VAR_3);

  FUNC_0(VAR_2[-VAR_3 - 1] > 0);
  VAR_2[-VAR_3 - 1]--;
  return;
 }

 FUNC_5(FUNC_3(VAR_3 - 1), 1);
}
