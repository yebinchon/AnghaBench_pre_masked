
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,scalar_t__,scalar_t__*,int,int) ;
 scalar_t__ FUNC_1 (int,scalar_t__*,int,scalar_t__*,int) ;
 int FUNC_2 (char*) ;

uint8_t FUNC_3(uint8_t VAR_5) {




    VAR_3[0] = VAR_5;
    if (VAR_4 != FUNC_1(VAR_0 << 1, VAR_3, 1, VAR_1, 1)) {
        FUNC_2("err reading reg \n");
    }
    VAR_2 = (uint8_t)VAR_1[0];

    return VAR_2;
}
