
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int) ;
 int VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;

uint8_t FUNC_4(void)
{
  bool VAR_4 = 0;


  for (uint8_t VAR_5 = 0; VAR_5 < VAR_1 / 2; VAR_5++) {
    VAR_4 |= FUNC_2(VAR_3, VAR_5);
  }


  for (uint8_t VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
    VAR_4 |= FUNC_3(VAR_3, VAR_6);
  }

  FUNC_0(VAR_3, VAR_2, VAR_1, VAR_4);

  FUNC_1();
  return (uint8_t)VAR_4;
}
