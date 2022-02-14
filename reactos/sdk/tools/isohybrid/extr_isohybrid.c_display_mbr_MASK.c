
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;


 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char*,...) ;

void
FUNC_2(const uint8_t *VAR_0, size_t VAR_1)
{
    unsigned char VAR_2 = 0;
    unsigned int VAR_3 = 0, VAR_4 = 0;

    FUNC_1("sizeof(MBR): %zu bytes\n", VAR_1);
    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
    {
        if (!(VAR_3 % 16))
            FUNC_1("%04d ", VAR_3);

        if (!(VAR_3 % 8))
            FUNC_1(" ");

        VAR_2 = VAR_0[VAR_3];
        FUNC_1("%02x ", VAR_2);

        if (!((VAR_3 + 1) % 16))
        {
            FUNC_1(" |");
            for (; VAR_4 <= VAR_3; VAR_4++)
                FUNC_1("%c", FUNC_0(VAR_0[VAR_4]) ? VAR_0[VAR_4] : '.');
            FUNC_1("|\n");
        }
    }
}
