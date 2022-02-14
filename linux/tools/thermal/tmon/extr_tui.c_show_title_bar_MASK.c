
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int,char*,int ) ;
 int * VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

void FUNC_9(void)
{
 int VAR_7;
 int VAR_8 = 0;

 if (VAR_6 || !VAR_5)
  return;

 FUNC_5(VAR_5, FUNC_0(VAR_1));
 FUNC_6(VAR_5, FUNC_0(VAR_1));
 FUNC_7(VAR_5);

 FUNC_1(VAR_5, 0, 0,
  "     TMON v%s", VAR_2);

 FUNC_8(VAR_5);

 FUNC_7(VAR_4);

 for (VAR_7 = 0; VAR_7 < 10; VAR_7++) {
  if (FUNC_2(VAR_3[VAR_7]) == 0)
   continue;
  FUNC_4(VAR_4, VAR_0);
  FUNC_1(VAR_4, 0, VAR_8, "%s", VAR_3[VAR_7]);
  FUNC_3(VAR_4, VAR_0);
  VAR_8 += FUNC_2(VAR_3[VAR_7]) + 1;
 }
 FUNC_8(VAR_4);
}
