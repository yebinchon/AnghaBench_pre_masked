
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16 ;
typedef int STREAM ;
typedef int RDPCLIENT ;






 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int,int) ;
 int FUNC_7 (char*,int) ;

__attribute__((used)) static void
FUNC_8(RDPCLIENT * VAR_0, STREAM VAR_1)
{
 uint16 VAR_2;
 uint16 VAR_3, VAR_4;

 FUNC_0(VAR_1, VAR_2);
 FUNC_1(VAR_1, 2);

 switch (VAR_2)
 {
  case 129:
   FUNC_0(VAR_1, VAR_3);
   FUNC_0(VAR_1, VAR_4);
   if (FUNC_5(VAR_1))
    FUNC_6(VAR_0, VAR_3, VAR_4);
   break;

  case 130:
   FUNC_3(VAR_0, VAR_1);
   break;

  case 131:
   FUNC_2(VAR_0, VAR_1);
   break;

  case 128:
   FUNC_4(VAR_0, VAR_1);
   break;

  default:
   FUNC_7("Pointer message 0x%x\n", VAR_2);
 }
}
