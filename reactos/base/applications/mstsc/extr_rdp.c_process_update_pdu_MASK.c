
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16 ;
typedef int STREAM ;






 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (char*,int) ;

__attribute__((used)) static void
FUNC_8(STREAM VAR_0)
{
 uint16 VAR_1, VAR_2;

 FUNC_0(VAR_0, VAR_1);

 FUNC_5();
 switch (VAR_1)
 {
  case 130:
   FUNC_1(VAR_0, 2);
   FUNC_0(VAR_0, VAR_2);
   FUNC_1(VAR_0, 2);
   FUNC_3(VAR_0, VAR_2);
   break;

  case 131:
   FUNC_2(VAR_0);
   break;

  case 129:
   FUNC_4(VAR_0);
   break;

  case 128:
   break;

  default:
   FUNC_7("update %d\n", VAR_1);
 }
 FUNC_6();
}
