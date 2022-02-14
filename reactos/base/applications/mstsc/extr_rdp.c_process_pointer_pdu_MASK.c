
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16 ;
typedef int STREAM ;







 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (char*,int) ;

__attribute__((used)) static void
FUNC_9(STREAM VAR_0)
{
 uint16 VAR_1;
 uint16 VAR_2, VAR_3;

 FUNC_0(VAR_0, VAR_1);
 FUNC_1(VAR_0, 2);

 switch (VAR_1)
 {
  case 130:
   FUNC_0(VAR_0, VAR_2);
   FUNC_0(VAR_0, VAR_3);
   if (FUNC_6(VAR_0))
    FUNC_7(VAR_2, VAR_3);
   break;

  case 131:
   FUNC_3(VAR_0);
   break;

  case 132:
   FUNC_2(VAR_0);
   break;

  case 128:
   FUNC_5(VAR_0);
   break;

  case 129:
   FUNC_4(VAR_0);
   break;

  default:
   FUNC_8("Pointer message 0x%x\n", VAR_1);
 }
}
