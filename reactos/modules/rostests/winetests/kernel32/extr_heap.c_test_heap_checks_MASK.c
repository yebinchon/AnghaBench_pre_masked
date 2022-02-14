
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SIZE_T ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int*) ;
 int* FUNC_3 (int ,int ,int*,int) ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (int ,int ,int*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int*,int,int) ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,int) ;

__attribute__((used)) static void FUNC_11( DWORD VAR_6 )
{
    BYTE VAR_7, *VAR_8, *VAR_9;
    BOOL VAR_10;
    SIZE_T VAR_11, VAR_12, VAR_13 = 3000 * 1024 + 37;

    if (VAR_6 & VAR_1) return;
    FUNC_10( "testing heap flags %08x\n", VAR_6 );

    VAR_8 = FUNC_1( FUNC_0(), VAR_5, 17 );
    FUNC_8( VAR_8 != ((void*)0), "HeapAlloc failed\n" );

    VAR_10 = FUNC_5( FUNC_0(), 0, VAR_8 );
    FUNC_8( VAR_10, "HeapValidate failed\n" );

    VAR_12 = FUNC_4( FUNC_0(), 0, VAR_8 );
    FUNC_8( VAR_12 == 17, "Wrong size %lu\n", VAR_12 );

    FUNC_8( VAR_8[14] == 0, "wrong data %x\n", VAR_8[14] );
    FUNC_8( VAR_8[15] == 0, "wrong data %x\n", VAR_8[15] );
    FUNC_8( VAR_8[16] == 0, "wrong data %x\n", VAR_8[16] );

    if (VAR_6 & VAR_3)
    {
        FUNC_8( VAR_8[17] == 0xab, "wrong padding %x\n", VAR_8[17] );
        FUNC_8( VAR_8[18] == 0xab, "wrong padding %x\n", VAR_8[18] );
        FUNC_8( VAR_8[19] == 0xab, "wrong padding %x\n", VAR_8[19] );
    }

    VAR_9 = FUNC_3( FUNC_0(), VAR_2, VAR_8, 14 );
    if (VAR_9 == VAR_8)
    {
        if (VAR_6 & VAR_3)
        {
            FUNC_8( VAR_8[14] == 0xab, "wrong padding %x\n", VAR_8[14] );
            FUNC_8( VAR_8[15] == 0xab, "wrong padding %x\n", VAR_8[15] );
            FUNC_8( VAR_8[16] == 0xab, "wrong padding %x\n", VAR_8[16] );
        }
        else
        {
            FUNC_8( VAR_8[14] == 0, "wrong padding %x\n", VAR_8[14] );
            FUNC_8( VAR_8[15] == 0, "wrong padding %x\n", VAR_8[15] );
        }
    }
    else FUNC_9( "realloc in place failed\n");

    VAR_10 = FUNC_2( FUNC_0(), 0, VAR_8 );
    FUNC_8( VAR_10, "HeapFree failed\n" );

    VAR_8 = FUNC_1( FUNC_0(), VAR_5, 17 );
    FUNC_8( VAR_8 != ((void*)0), "HeapAlloc failed\n" );
    VAR_7 = VAR_8[17];
    VAR_8[17] = 0xcc;

    if (VAR_6 & VAR_3)
    {
        VAR_10 = FUNC_5( FUNC_0(), 0, VAR_8 );
        FUNC_8( !VAR_10, "HeapValidate succeeded\n" );


        if (VAR_6 & VAR_4)
        {
            VAR_12 = FUNC_4( FUNC_0(), 0, VAR_8 );
            FUNC_8( VAR_12 == ~(SIZE_T)0 || FUNC_6(VAR_12 == ~0u), "Wrong size %lu\n", VAR_12 );

            VAR_9 = FUNC_3( FUNC_0(), 0, VAR_8, 14 );
            FUNC_8( VAR_9 == ((void*)0), "HeapReAlloc succeeded\n" );

            VAR_10 = FUNC_2( FUNC_0(), 0, VAR_8 );
            FUNC_8( !VAR_10 || FUNC_6(sizeof(void*) == 8),
                "HeapFree succeeded\n" );
        }

        VAR_8[17] = VAR_7;
        VAR_12 = FUNC_4( FUNC_0(), 0, VAR_8 );
        FUNC_8( VAR_12 == 17, "Wrong size %lu\n", VAR_12 );

        VAR_9 = FUNC_3( FUNC_0(), 0, VAR_8, 14 );
        FUNC_8( VAR_9 != ((void*)0), "HeapReAlloc failed\n" );
        VAR_8 = VAR_9;
    }

    VAR_10 = FUNC_2( FUNC_0(), 0, VAR_8 );
    FUNC_8( VAR_10, "HeapFree failed\n" );

    VAR_8 = FUNC_1( FUNC_0(), 0, 37 );
    FUNC_8( VAR_8 != ((void*)0), "HeapAlloc failed\n" );
    FUNC_7( VAR_8, 0xcc, 37 );

    VAR_10 = FUNC_2( FUNC_0(), 0, VAR_8 );
    FUNC_8( VAR_10, "HeapFree failed\n" );

    if (VAR_6 & VAR_0)
    {
        FUNC_8( VAR_8[16] == 0xee, "wrong data %x\n", VAR_8[16] );
        FUNC_8( VAR_8[17] == 0xfe, "wrong data %x\n", VAR_8[17] );
        FUNC_8( VAR_8[18] == 0xee, "wrong data %x\n", VAR_8[18] );
        FUNC_8( VAR_8[19] == 0xfe, "wrong data %x\n", VAR_8[19] );

        VAR_10 = FUNC_5( FUNC_0(), 0, ((void*)0) );
        FUNC_8( VAR_10, "HeapValidate failed\n" );

        VAR_7 = VAR_8[16];
        VAR_8[16] = 0xcc;
        VAR_10 = FUNC_5( FUNC_0(), 0, ((void*)0) );
        FUNC_8( !VAR_10, "HeapValidate succeeded\n" );

        VAR_8[16] = VAR_7;
        VAR_10 = FUNC_5( FUNC_0(), 0, ((void*)0) );
        FUNC_8( VAR_10, "HeapValidate failed\n" );
    }



    VAR_8 = FUNC_1( FUNC_0(), 0, VAR_13 );
    FUNC_8( VAR_8 != ((void*)0), "HeapAlloc failed\n" );

    VAR_10 = FUNC_5( FUNC_0(), 0, VAR_8 );
    FUNC_8( VAR_10, "HeapValidate failed\n" );

    VAR_12 = FUNC_4( FUNC_0(), 0, VAR_8 );
    FUNC_8( VAR_12 == VAR_13, "Wrong size %lu\n", VAR_12 );

    FUNC_8( VAR_8[VAR_13 - 2] == 0, "wrong data %x\n", VAR_8[VAR_13 - 2] );
    FUNC_8( VAR_8[VAR_13 - 1] == 0, "wrong data %x\n", VAR_8[VAR_13 - 1] );

    if (VAR_6 & VAR_3)
    {

        FUNC_8( VAR_8[VAR_13] == 0xab || FUNC_6(VAR_8[VAR_13] == 0), "wrong data %x\n", VAR_8[VAR_13] );
        FUNC_8( VAR_8[VAR_13+1] == 0xab || FUNC_6(VAR_8[VAR_13+1] == 0), "wrong data %x\n", VAR_8[VAR_13+1] );
        FUNC_8( VAR_8[VAR_13+2] == 0xab || FUNC_6(VAR_8[VAR_13+2] == 0), "wrong data %x\n", VAR_8[VAR_13+2] );
        if (VAR_8[VAR_13] == 0xab)
        {
            VAR_8[VAR_13] = 0xcc;
            VAR_10 = FUNC_5( FUNC_0(), 0, VAR_8 );
            FUNC_8( !VAR_10, "HeapValidate succeeded\n" );


            if (VAR_6 & VAR_4)
            {
                VAR_12 = FUNC_4( FUNC_0(), 0, VAR_8 );
                FUNC_8( VAR_12 == ~(SIZE_T)0, "Wrong size %lu\n", VAR_12 );

                VAR_9 = FUNC_3( FUNC_0(), 0, VAR_8, VAR_13 - 3 );
                FUNC_8( VAR_9 == ((void*)0), "HeapReAlloc succeeded\n" );

                VAR_10 = FUNC_2( FUNC_0(), 0, VAR_8 );
                FUNC_8( !VAR_10, "HeapFree succeeded\n" );
            }
            VAR_8[VAR_13] = 0xab;
        }
    }

    VAR_10 = FUNC_2( FUNC_0(), 0, VAR_8 );
    FUNC_8( VAR_10, "HeapFree failed\n" );


    if (VAR_6 & VAR_3)
    {
        for (VAR_12 = 0; VAR_12 < 64; VAR_12++)
        {
            VAR_8 = FUNC_1( FUNC_0(), 0, VAR_12 );
            for (VAR_11 = 0; VAR_11 < 32; VAR_11++) if (VAR_8[VAR_12 + VAR_11] != 0xab) break;
            FUNC_8( VAR_11 >= 8, "only %lu tail bytes for size %lu\n", VAR_11, VAR_12 );
            FUNC_2( FUNC_0(), 0, VAR_8 );
        }
    }
}
