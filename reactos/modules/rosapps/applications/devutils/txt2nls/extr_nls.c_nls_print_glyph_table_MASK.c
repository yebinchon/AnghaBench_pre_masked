
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ uint16_t ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(uint16_t *VAR_0, uint16_t VAR_1)
{
    uint32_t VAR_2;

    FUNC_0("GLYPHTABLE:\n");

    for (VAR_2 = 0; VAR_2 <= 0xFF; VAR_2++)
    {
        if (VAR_0[VAR_2] != VAR_1)
        {
            FUNC_0("0x%02X 0x%04X\n", (unsigned int)VAR_2, (unsigned int)VAR_0[VAR_2]);
        }
    }

    FUNC_0("\n");
}
