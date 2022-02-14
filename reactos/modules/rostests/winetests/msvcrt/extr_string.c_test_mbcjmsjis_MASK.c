
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (int*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*,unsigned int,unsigned int,unsigned int,int) ;

__attribute__((used)) static void FUNC_5(void)
{

    unsigned int VAR_1[][2] = { {0x80fc, 0}, {0x813f, 0}, {0x8140, 0x2121},
                                 {0x817e, 0x215f}, {0x817f, 0}, {0x8180, 0x2160},
                                 {0x819e, 0x217e}, {0x819f, 0x2221}, {0x81fc, 0x227e},
                                 {0x81fd, 0}, {0x9ffc, 0x5e7e}, {0x9ffd, 0},
                                 {0xa040, 0}, {0xdffc, 0}, {0xe040, 0x5f21},
                                 {0xeffc, 0x7e7e}, {0xf040, 0}, {0x21, 0}, {0, 0}};
    int VAR_2[] = { 932, 936, 939, 950, 1361, VAR_0 };
    unsigned int VAR_3, VAR_4;
    int VAR_5 = FUNC_1();

    for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2); VAR_3++)
    {
        FUNC_3(VAR_2[VAR_3]);
        for (VAR_4 = 0; VAR_1[VAR_4][0] != 0; VAR_4++)
        {
            unsigned int VAR_6, VAR_7;
            VAR_6 = FUNC_2(VAR_1[VAR_4][0]);
            VAR_7 = (VAR_2[VAR_3] == 932) ? VAR_1[VAR_4][1] : VAR_1[VAR_4][0];
            FUNC_4(VAR_6 == VAR_7, "Expected 0x%x, got 0x%x (0x%x, codepage=%d)\n",
               VAR_7, VAR_6, VAR_1[VAR_4][0], VAR_2[VAR_3]);
        }
    }
    FUNC_3(VAR_5);
}
