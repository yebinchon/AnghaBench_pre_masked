
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int ) ;

void FUNC_6(uint8_t VAR_2) {
    FUNC_3("backlight_set(%d)\n", VAR_2);
    uint32_t VAR_3 = (uint32_t)(FUNC_1(0xFFFF * (uint32_t) VAR_2 / VAR_0));
    FUNC_3("duty: (%d)\n", VAR_3);
    if (VAR_2 == 0) {

        FUNC_4(&VAR_1, 0);
    } else {

      if(!FUNC_2()){
        FUNC_5(&VAR_1, 0, FUNC_0(&VAR_1,0xFFFF,VAR_3));
      }
    }
}
