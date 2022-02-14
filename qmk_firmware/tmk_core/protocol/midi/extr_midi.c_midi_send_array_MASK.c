
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int MidiDevice ;


 int FUNC_0 (int *,int *,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__,int ,int ,int ) ;

void FUNC_2(MidiDevice* VAR_0, uint16_t VAR_1, uint8_t* VAR_2) {
    uint16_t VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3 += 3) {
        uint8_t VAR_4[3] = {0, 0, 0};
        uint16_t VAR_5 = VAR_1 - VAR_3;
        VAR_5 = (VAR_5 > 3) ? 3 : VAR_5;
        FUNC_0(VAR_4, VAR_2 + VAR_3, VAR_5);
        FUNC_1(VAR_0, VAR_5, VAR_4[0], VAR_4[1], VAR_4[2]);
    }
}
