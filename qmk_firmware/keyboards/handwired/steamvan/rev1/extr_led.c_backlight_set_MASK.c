
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int,int ) ;

void FUNC_5(uint8_t VAR_2) {
  uint32_t VAR_3 = (uint32_t)(FUNC_1(0xFFFF * (uint32_t) VAR_2 / VAR_0));
  if (VAR_2 == 0) {


      FUNC_3(&VAR_1, 2);
  } else {

    if(!FUNC_2()){

      FUNC_4(&VAR_1, 2, FUNC_0(&VAR_1,0xFFFF,VAR_3));
    }
  }
}
