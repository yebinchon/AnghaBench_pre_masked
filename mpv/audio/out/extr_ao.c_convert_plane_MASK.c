
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(int VAR_0, void *VAR_1, int VAR_2)
{
    switch (VAR_0) {
    case 0:
        break;
    case 1:
    case 2: {
        int VAR_3 = VAR_0 == 1 ? 3 : 4;
        for (int VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
            uint32_t VAR_5 = *((uint32_t *)VAR_1 + VAR_4);
            uint8_t *VAR_6 = (uint8_t *)VAR_1 + VAR_4 * VAR_3;
            VAR_6[0] = VAR_5 >> FUNC_0(0);
            VAR_6[1] = VAR_5 >> FUNC_0(1);
            VAR_6[2] = VAR_5 >> FUNC_0(2);
            if (VAR_0 == 2)
                VAR_6[3] = 0;
        }
        break;
    }
    default:
        FUNC_1();
    }
}
