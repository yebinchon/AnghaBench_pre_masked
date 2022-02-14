
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int SerialDriver ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *,int const) ;

__attribute__((used)) static uint32_t FUNC_2(SerialDriver* VAR_0, uint8_t VAR_1) {
    const uint32_t VAR_2 = 16;
    uint8_t VAR_3[VAR_2];
    uint32_t VAR_4 = FUNC_1(VAR_0, VAR_3, VAR_2);
    uint8_t* VAR_5 = VAR_3;
    uint8_t* VAR_6 = VAR_5 + VAR_4;
    while (VAR_5 < VAR_6) {
        FUNC_0(VAR_1, *VAR_5);
        VAR_5++;
    }
    return VAR_4;
}
