
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wbuf_ok ;
typedef int wbuf_broken ;
typedef int wbuf ;
typedef int flags ;
typedef int WCHAR ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 () ;




 int FUNC_1 (int,int const,char*,int,int*,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int*,int*,int) ;
 int FUNC_5 (int*,int,int) ;
 int FUNC_6 (int,char*,int const,int,...) ;

__attribute__((used)) static void FUNC_7(void)
{
    int VAR_1, VAR_2, VAR_3;
    WCHAR VAR_4[5];
    unsigned char VAR_5[] = {0xbf, 0xb4, 0xc7, '\0', 'x'};
    static const DWORD VAR_6[] = {
        129,
        131,

        129|128,
        131 |128,

        129|130,
        131 |130,

        129|130|128,
        131 |130|128,
    };

    for (VAR_1 = 0; VAR_1 < sizeof(VAR_6)/sizeof(DWORD); ++VAR_1)
    {
        FUNC_5(VAR_4, 0xff, sizeof(VAR_4));
        VAR_2 = FUNC_1(936, VAR_6[VAR_1], (char*)&VAR_5[0], 2, ((void*)0), 0);
        VAR_3 = FUNC_1(936, VAR_6[VAR_1], (char*)&VAR_5[0], 2, VAR_4, VAR_2);

        FUNC_6(VAR_2 == 1, "%04x: returned %d (expected 1)\n", VAR_6[VAR_1], VAR_2);
        FUNC_6(VAR_3 == 1, "%04x: returned %d (expected 1)\n", VAR_6[VAR_1], VAR_3);
        FUNC_6(VAR_4[0] == 0x770b, "%04x: returned %04x (expected 770b)\n", VAR_6[VAR_1], VAR_4[0]);
        FUNC_6(VAR_4[1] == 0xffff, "%04x: returned %04x (expected ffff)\n", VAR_6[VAR_1], VAR_4[1]);
    }

    for (VAR_1 = 0; VAR_1 < sizeof(VAR_6)/sizeof(DWORD); ++VAR_1)
    {
        FUNC_5(VAR_4, 0xff, sizeof(VAR_4));
        VAR_2 = FUNC_1(936, VAR_6[VAR_1], (char*)&VAR_5[0], 3, ((void*)0), 0);
        FUNC_2( 0xdeadbeef );
        VAR_3 = FUNC_1(936, VAR_6[VAR_1], (char*)&VAR_5[0], 3, VAR_4, VAR_2);

        if (VAR_6[VAR_1] & 130)
        {
            FUNC_6(VAR_2 == 0, "%04x: returned %d (expected 0)\n", VAR_6[VAR_1], VAR_2);
            FUNC_6(VAR_3 == 0, "%04x: returned %d (expected 0)\n", VAR_6[VAR_1], VAR_3);
            FUNC_6(FUNC_0() == VAR_0, "%04x: returned %d (expected %d)\n",
               VAR_6[VAR_1], FUNC_0(), VAR_0);
        }
        else
        {
            FUNC_6(VAR_2 == 2, "%04x: returned %d (expected 2)\n", VAR_6[VAR_1], VAR_2);
            FUNC_6(VAR_3 == 2, "%04x: returned %d (expected 2)\n", VAR_6[VAR_1], VAR_3);
            FUNC_6(VAR_4[0] == 0x770b, "%04x: returned %04x (expected 770b)\n", VAR_6[VAR_1], VAR_4[0]);
            FUNC_6(VAR_4[1] == 0x003f || FUNC_3(VAR_4[1] == 0),
               "%04x: wrong wide char: %04x\n", VAR_6[VAR_1], VAR_4[1]);
            FUNC_6(VAR_4[2] == 0xffff, "%04x: returned %04x (expected ffff)\n", VAR_6[VAR_1], VAR_4[2]);
        }
    }


    for (VAR_1 = 0; VAR_1 < sizeof(VAR_6)/sizeof(DWORD); ++VAR_1)
    {
        FUNC_5(VAR_4, 0xff, sizeof(VAR_4));
        VAR_2 = FUNC_1(936, VAR_6[VAR_1], (char*)&VAR_5[0], 4, ((void*)0), 0);
        FUNC_2( 0xdeadbeef );
        VAR_3 = FUNC_1(936, VAR_6[VAR_1], (char*)&VAR_5[0], 4, VAR_4, VAR_2);
        FUNC_6(VAR_2 == VAR_3, "%04x: returned %d (expected %d)\n", VAR_6[VAR_1], VAR_3, VAR_2);

        if (VAR_6[VAR_1] & 130)
        {
            FUNC_6(VAR_2 == 0, "%04x: returned %d (expected 0)\n", VAR_6[VAR_1], VAR_2);
            FUNC_6(FUNC_0() == VAR_0, "%04x: returned %d (expected %d)\n",
               VAR_6[VAR_1], FUNC_0(), VAR_0);
        }
        else
        {
            WCHAR VAR_7[] = { 0x770b, 0x003f, '\0', 0xffff };
            WCHAR VAR_8[] = { 0x770b, '\0', 0xffff, 0xffff };
            FUNC_6(VAR_2 == 3 || FUNC_3(VAR_2 == 2 ),
               "%04x: returned %d (expected 3)\n", VAR_6[VAR_1], VAR_2);
            FUNC_6(!FUNC_4(VAR_4, VAR_7, sizeof(VAR_7))
               || FUNC_3(!FUNC_4(VAR_4, VAR_8, sizeof(VAR_8))),
               "%04x: returned %04x %04x %04x %04x (expected %04x %04x %04x %04x)\n",
               VAR_6[VAR_1], VAR_4[0], VAR_4[1], VAR_4[2], VAR_4[3],
               VAR_7[0], VAR_7[1], VAR_7[2], VAR_7[3]);
        }
    }


    for (VAR_1 = 0; VAR_1 < sizeof(VAR_6)/sizeof(DWORD); ++VAR_1)
    {
        FUNC_5(VAR_4, 0xff, sizeof(VAR_4));
        VAR_2 = FUNC_1(936, VAR_6[VAR_1], (char*)&VAR_5[0], 5, ((void*)0), 0);
        FUNC_2( 0xdeadbeef );
        VAR_3 = FUNC_1(936, VAR_6[VAR_1], (char*)&VAR_5[0], 5, VAR_4, VAR_2);
        FUNC_6(VAR_2 == VAR_3, "%04x: returned %d (expected %d)\n", VAR_6[VAR_1], VAR_3, VAR_2);

        if (VAR_6[VAR_1] & 130)
        {
            FUNC_6(VAR_2 == 0, "%04x: returned %d (expected 0)\n", VAR_6[VAR_1], VAR_2);
            FUNC_6(FUNC_0() == VAR_0, "%04x: returned %d (expected %d)\n",
               VAR_6[VAR_1], FUNC_0(), VAR_0);
        }
        else
        {
            WCHAR VAR_9[] = { 0x770b, 0x003f, '\0', 'x', 0xffff };
            WCHAR VAR_10[] = { 0x770b, '\0', 'x', 0xffff, 0xffff };
            FUNC_6(VAR_2 == 4 || FUNC_3(VAR_2 == 3),
               "%04x: returned %d (expected 4)\n", VAR_6[VAR_1], VAR_2);
            FUNC_6(!FUNC_4(VAR_4, VAR_9, sizeof(VAR_9))
               || FUNC_3(!FUNC_4(VAR_4, VAR_10, sizeof(VAR_10))),
               "%04x: returned %04x %04x %04x %04x %04x (expected %04x %04x %04x %04x %04x)\n",
               VAR_6[VAR_1], VAR_4[0], VAR_4[1], VAR_4[2], VAR_4[3], VAR_4[4],
               VAR_9[0], VAR_9[1], VAR_9[2], VAR_9[3], VAR_9[4]);
        }
    }
}
