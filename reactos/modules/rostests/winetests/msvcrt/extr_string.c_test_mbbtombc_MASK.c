
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 unsigned int FUNC_2 (unsigned int const) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*,unsigned int,unsigned int,unsigned int const,int) ;

__attribute__((used)) static void FUNC_5(void)
{
    static const unsigned int VAR_1[][2] = {
        {0x1f, 0x1f}, {0x20, 0x8140}, {0x39, 0x8258}, {0x40, 0x8197},
        {0x41, 0x8260}, {0x5e, 0x814f}, {0x7e, 0x8150}, {0x7f, 0x7f},
        {0x80, 0x80}, {0x81, 0x81}, {0xa0, 0xa0}, {0xa7, 0x8340},
        {0xb0, 0x815b}, {0xd1, 0x8380}, {0xff, 0xff}, {0,0}};
    int VAR_2[] = { 932, 936, 939, 950, 1361, VAR_0 };
    int VAR_3, VAR_4;
    int VAR_5 = FUNC_1();

    for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2); VAR_3++)
    {
        FUNC_3(VAR_2[VAR_3]);
        for (VAR_4 = 0; VAR_1[VAR_4][0] != 0; VAR_4++)
        {
            unsigned int VAR_6, VAR_7;
            VAR_7 = FUNC_2(VAR_1[VAR_4][0]);
            VAR_6 = (VAR_2[VAR_3] == 932) ? VAR_1[VAR_4][1] : VAR_1[VAR_4][0];
            FUNC_4(VAR_7 == VAR_6, "Expected 0x%x, got 0x%x (0x%x, codepage %d)\n",
               VAR_6, VAR_7, VAR_1[VAR_4][0], VAR_2[VAR_3]);
        }
    }
    FUNC_3(VAR_5);
}
