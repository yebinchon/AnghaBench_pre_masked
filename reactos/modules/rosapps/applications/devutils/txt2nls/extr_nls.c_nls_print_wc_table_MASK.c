
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(uint16_t *VAR_0, uint16_t VAR_1, int VAR_2)
{
    uint32_t VAR_3;

    FUNC_0("WCTABLE:\n");

    for (VAR_3 = 0; VAR_3 <= 0xFFFF; VAR_3++)
    {

        if (VAR_2)
        {
            uint16_t *VAR_4 = (uint16_t*)VAR_0;

            if (VAR_4[VAR_3] != VAR_1)
                FUNC_0("0x%04X 0x%04X\n", (unsigned int)VAR_3, (unsigned int)VAR_4[VAR_3]);
        }

        else
        {
            uint8_t *VAR_5 = (uint8_t*)VAR_0;

            if (VAR_5[VAR_3] != VAR_1)
                FUNC_0("0x%04X 0x%02X\n", (unsigned int)VAR_3, (unsigned int)VAR_5[VAR_3]);
        }
    }

    FUNC_0("\n");
}
