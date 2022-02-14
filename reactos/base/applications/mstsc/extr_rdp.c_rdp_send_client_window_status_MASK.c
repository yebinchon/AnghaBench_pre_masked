
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int STREAM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

void
FUNC_5(int VAR_3)
{
 STREAM VAR_4;
 static int VAR_5 = 1;

 if (VAR_5 == VAR_3)
  return;

 VAR_4 = FUNC_2(12);

 FUNC_1(VAR_4, VAR_3);

 switch (VAR_3)
 {
  case 0:
   break;

  case 1:
   FUNC_1(VAR_4, 0);
   FUNC_0(VAR_4, VAR_2);
   FUNC_0(VAR_4, VAR_1);
   break;
 }

 FUNC_4(VAR_4);
 FUNC_3(VAR_4, VAR_0);
 VAR_5 = VAR_3;
}
