
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (int ,scalar_t__) ;

uint8_t FUNC_3(void) {
    bool VAR_4 = 0;

    for (uint8_t VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
        VAR_4 |= FUNC_2(VAR_3, VAR_5);
    }

    FUNC_0(VAR_3, VAR_2, VAR_1, VAR_4);

    FUNC_1();

    return (uint8_t)VAR_4;
}
