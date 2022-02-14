
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned int const**) ;
 unsigned int VAR_0 ;
 unsigned int FUNC_1 () ;
 void* FUNC_2 (unsigned int const) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int,char*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_5(void)
{
    static const unsigned int VAR_1[][2] = {
        {0x8152, 0x8152}, {0x8153, 0x8153}, {0x8154, 0x8154}, {0x8155, 0x8155},
        {0x833f, 0x833f}, {0x829f, 0x8340}, {0x82dd, 0x837e}, {0x837f, 0x837f},
        {0x82de, 0x8380}, {0x8394, 0x8394}, {0x8397, 0x8397},
        {0xa5, 0xa5}, {0xb0, 0xb0}, {0xdd, 0xdd} };
    unsigned int VAR_2;
    unsigned int VAR_3 = FUNC_1();

    FUNC_3(VAR_0);
    for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++)
    {
        int VAR_4, VAR_5 = VAR_1[VAR_2][0];
        VAR_4 = FUNC_2(VAR_1[VAR_2][0]);
        FUNC_4(VAR_4 == VAR_5, "Expected 0x%x, got 0x%x\n", VAR_5, VAR_4);
    }

    FUNC_3(932);
    for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++)
    {
        unsigned int VAR_6, VAR_7;
        VAR_6 = FUNC_2(VAR_1[VAR_2][0]);
        VAR_7 = VAR_1[VAR_2][1];
        FUNC_4(VAR_6 == VAR_7, "Expected 0x%x, got 0x%x\n", VAR_7, VAR_6);
    }
    FUNC_3(VAR_3);
}
