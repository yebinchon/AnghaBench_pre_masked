
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int STREAM ;
typedef int RDPCLIENT ;







 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (char*,int) ;

void
FUNC_6(RDPCLIENT * VAR_0, STREAM VAR_1)
{
 uint8 VAR_2;

 FUNC_0(VAR_1, VAR_2);
 FUNC_1(VAR_1, 3);

 switch (VAR_2)
 {
  case 131:
   FUNC_3(VAR_0, VAR_1);
   break;

  case 132:
   FUNC_2(VAR_0, VAR_1);
   break;

  case 130:
   FUNC_4(VAR_0, VAR_1);
   break;

  case 129:
  case 128:
   break;

  default:
   FUNC_5("licence tag 0x%x\n", VAR_2);
 }
}
