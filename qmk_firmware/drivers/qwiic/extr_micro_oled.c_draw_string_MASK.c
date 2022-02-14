
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,char,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__* VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;

void FUNC_3(uint8_t VAR_2, uint8_t VAR_3, char* VAR_4, uint8_t VAR_5, uint8_t VAR_6, uint8_t VAR_7) {
    if ((VAR_7 >= VAR_0) || (VAR_7 < 0)) return;

    uint8_t VAR_8 = VAR_7;
    uint8_t VAR_9 = FUNC_1(VAR_1[VAR_8] + 0);

    uint8_t VAR_10 = VAR_2;
    for (int VAR_11 = 0; VAR_11 < FUNC_2(VAR_4); VAR_11++) {
        FUNC_0(VAR_10, VAR_3, VAR_4[VAR_11], VAR_5, VAR_6, VAR_7);
        VAR_10 += VAR_9 + 1;
    }
}
