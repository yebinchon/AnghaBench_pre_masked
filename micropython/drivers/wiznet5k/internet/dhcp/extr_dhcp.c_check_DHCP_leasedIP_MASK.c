
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int8_t ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int*,int,int ,int) ;
 int FUNC_4 (int) ;

int8_t FUNC_5(void)
{
 uint8_t VAR_4;
 int32_t VAR_5;


 VAR_4 = FUNC_0();
 FUNC_4(0x03);



 VAR_5 = FUNC_3(VAR_0, (uint8_t *)"CHECK_IP_CONFLICT", 17, VAR_1, 5000);


 FUNC_4(VAR_4);

 if(VAR_5 == VAR_2) {






  return 1;
 } else {

  FUNC_2();

  VAR_5 = VAR_3;
  while((VAR_3 - VAR_5) < 2) ;

  return 0;
 }
}
