
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 scalar_t__ VAR_0 ;

 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int,int,int) ;
 int VAR_4 ;
 int VAR_5 ;

uint32_t FUNC_9(uint32_t VAR_6)
{
  if (VAR_6 == VAR_0 && VAR_1 == 1)
  {
    VAR_2 = FUNC_1();
    VAR_4 = FUNC_3();
    VAR_5 = FUNC_4();
    VAR_1 = 0;
  }

  switch (FUNC_0(VAR_6))
  {
  case 128:
    VAR_3 = FUNC_2();
    FUNC_6(1);
    FUNC_8(0xD3, 0x7F, 0xED);
    VAR_1 = 1;
    break;
  default:
    FUNC_5(VAR_3);
    FUNC_7(VAR_2, VAR_4, VAR_5);
    break;
  }
  return VAR_6;
}
