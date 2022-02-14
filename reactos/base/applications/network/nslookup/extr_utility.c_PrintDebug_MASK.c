
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int USHORT ;
typedef scalar_t__ ULONG ;
typedef int UCHAR ;
typedef int * PUSHORT ;
typedef int * PULONG ;
typedef int * PSHORT ;
typedef int* PCHAR ;
typedef scalar_t__ DWORD ;
typedef int CHAR ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int*,int *,int) ;
 scalar_t__ FUNC_2 (int*,int *,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,...) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

void FUNC_10( PCHAR VAR_3, DWORD VAR_4 )
{
    USHORT VAR_5;
    UCHAR VAR_6, VAR_7;
    USHORT VAR_8, VAR_9, VAR_10, VAR_11;
    USHORT VAR_12, VAR_13;
    ULONG VAR_14;
    CHAR VAR_15[255];
    int VAR_16 = 0, VAR_17 = 0, VAR_18 = 0;

    VAR_5 = FUNC_9( ((PUSHORT)&VAR_3[VAR_17])[0] );
    VAR_17 += 2;

    VAR_6 = VAR_3[VAR_17];
    VAR_17 += 1;

    VAR_7 = VAR_3[VAR_17];
    VAR_17 += 1;

    VAR_8 = FUNC_9( ((PSHORT)&VAR_3[VAR_17])[0] );
    VAR_17 += 2;

    VAR_9 = FUNC_9( ((PSHORT)&VAR_3[VAR_17])[0] );
    VAR_17 += 2;

    VAR_10 = FUNC_9( ((PUSHORT)&VAR_3[VAR_17])[0] );
    VAR_17 += 2;

    VAR_11 = FUNC_9( ((PUSHORT)&VAR_3[VAR_17])[0] );
    VAR_17 += 2;

    FUNC_7( FUNC_6("------------\n") );
    FUNC_7( FUNC_6("Got answer (%d bytes):\n"), (int)VAR_4 );
    FUNC_7( FUNC_6("    HEADER:\n") );
    FUNC_7( FUNC_6("        opcode = %s, id = %d, rcode = %s\n"),
                 FUNC_3( (VAR_6 & 0x78) >> 3 ),
                 (int)VAR_5,
                 FUNC_4( VAR_7 & 0x0F ) );

    FUNC_7( FUNC_6("        header flags:  response") );
    if( VAR_6 & 0x01 ) FUNC_7( FUNC_6(", want recursion") );
    if( VAR_7 & 0x80 ) FUNC_7( FUNC_6(", recursion avail.") );
    FUNC_7( FUNC_6("\n") );

    FUNC_7( FUNC_6("        questions = %d,  answers = %d,  "
                 "authority records = %d,  additional = %d\n\n"),
                 (int)VAR_8,
                 (int)VAR_9,
                 (int)VAR_10,
                 (int)VAR_11 );

    if( VAR_8 )
    {
        FUNC_7( FUNC_6("    QUESTIONS:\n") );

        for( VAR_18 = 0; VAR_18 < VAR_8; VAR_18 += 1 )
        {
            VAR_17 += FUNC_2( VAR_3, VAR_15, VAR_17, 0 );

            FUNC_7( FUNC_6("        %s"), VAR_15 );

            VAR_12 = FUNC_9( ((PUSHORT)&VAR_3[VAR_17])[0] );
            VAR_17 += 2;

            VAR_13 = FUNC_9( ((PUSHORT)&VAR_3[VAR_17])[0] );
            VAR_17 += 2;

            FUNC_7( FUNC_6(", type = %s, class = %s\n"),
                      FUNC_5( VAR_12 ),
                      FUNC_0( VAR_13 ) );
        }
    }

    if( VAR_9 )
    {
        FUNC_7( FUNC_6("    ANSWERS:\n") );

        for( VAR_18 = 0; VAR_18 < VAR_9; VAR_18 += 1 )
        {
            FUNC_7( FUNC_6("    ->  ") );


            VAR_17 += FUNC_2( VAR_3, VAR_15, VAR_17, 0 );

            FUNC_7( FUNC_6("%s\n"), VAR_15 );


            VAR_12 = FUNC_9( ((PUSHORT)&VAR_3[VAR_17])[0] );
            VAR_17 += 2;

            VAR_13 = FUNC_9( ((PUSHORT)&VAR_3[VAR_17])[0] );
            VAR_17 += 2;

            VAR_14 = FUNC_8( ((PULONG)&VAR_3[VAR_17])[0] );
            VAR_17 += 4;

            VAR_16 = FUNC_9( ((PUSHORT)&VAR_3[VAR_17])[0] );
            VAR_17 += 2;

            FUNC_7( FUNC_6("        type = %s, class = %s, dlen = %d\n"),
                      FUNC_5( VAR_12 ),
                      FUNC_0( VAR_13 ),
                      VAR_16 );


            if( VAR_0 == VAR_12 )
            {
                VAR_17 += FUNC_1( VAR_3, VAR_15, VAR_17 );

                FUNC_7( FUNC_6("        internet address = %s\n"), VAR_15 );
            }
            else
            {
                VAR_17 += FUNC_2( VAR_3, VAR_15, VAR_17, VAR_16 );

                FUNC_7( FUNC_6("        name = %s\n"), VAR_15 );
            }

            FUNC_7( FUNC_6("        ttl = %d ()\n"), (int)VAR_14 );
        }
    }

    if( VAR_10 )
    {
        FUNC_7( FUNC_6("    AUTHORITY RECORDS:\n") );

        for( VAR_18 = 0; VAR_18 < VAR_10; VAR_18 += 1 )
        {

            VAR_17 += FUNC_2( VAR_3, VAR_15, VAR_17, 0 );

            FUNC_7( FUNC_6("    ->  %s\n"), VAR_15 );


            VAR_12 = FUNC_9( ((PUSHORT)&VAR_3[VAR_17])[0] );
            VAR_17 += 2;

            VAR_13 = FUNC_9( ((PUSHORT)&VAR_3[VAR_17])[0] );
            VAR_17 += 2;

            VAR_14 = FUNC_8( ((PULONG)&VAR_3[VAR_17])[0] );
            VAR_17 += 4;

            VAR_16 = FUNC_9( ((PUSHORT)&VAR_3[VAR_17])[0] );
            VAR_17 += 2;

            FUNC_7( FUNC_6("        type = %s, class = %s, dlen = %d\n"),
                      FUNC_5( VAR_12 ),
                      FUNC_0( VAR_13 ),
                      VAR_16 );


            if( VAR_1 == VAR_12 )
            {

                VAR_17 += FUNC_2( VAR_3, VAR_15, VAR_17, VAR_16 );

                FUNC_7( FUNC_6("        nameserver = %s\n"), VAR_15 );

                FUNC_7( FUNC_6("        ttl = %d ()\n"), (int)VAR_14 );
            }
            else if( VAR_2 == VAR_12 )
            {
                FUNC_7( FUNC_6("        ttl = %d ()\n"), (int)VAR_14 );


                VAR_17 += FUNC_2( VAR_3, VAR_15, VAR_17, 0 );

                FUNC_7( FUNC_6("        primary name server = %s\n"), VAR_15 );


                VAR_17 += FUNC_2( VAR_3, VAR_15, VAR_17, 0 );

                FUNC_7( FUNC_6("        responsible mail addr = %s\n"), VAR_15 );


                FUNC_7( FUNC_6("        serial = ()\n") );
                FUNC_7( FUNC_6("        refresh = ()\n") );
                FUNC_7( FUNC_6("        retry = ()\n") );
                FUNC_7( FUNC_6("        expire = ()\n") );
                FUNC_7( FUNC_6("        default TTL = ()\n") );
                VAR_17 += 20;
            }
        }
    }

    if( VAR_11 )
    {
        FUNC_7( FUNC_6("    ADDITIONAL:\n") );

        for( VAR_18 = 0; VAR_18 < VAR_11; VAR_18 += 1 )
        {

            VAR_17 += FUNC_2( VAR_3, VAR_15, VAR_17, 0 );

            FUNC_7( FUNC_6("    ->  %s\n"), VAR_15 );


            VAR_12 = FUNC_9( ((PUSHORT)&VAR_3[VAR_17])[0] );
            VAR_17 += 2;

            VAR_13 = FUNC_9( ((PUSHORT)&VAR_3[VAR_17])[0] );
            VAR_17 += 2;

            VAR_14 = FUNC_8( ((PULONG)&VAR_3[VAR_17])[0] );
            VAR_17 += 4;

            VAR_16 = FUNC_9( ((PUSHORT)&VAR_3[VAR_17])[0] );
            VAR_17 += 2;

            FUNC_7( FUNC_6("        type = %s, class = %s, dlen = %d\n"),
                      FUNC_5( VAR_12 ),
                      FUNC_0( VAR_13 ),
                      VAR_16 );


            if( VAR_0 == VAR_12 )
            {

                VAR_17 += FUNC_1( VAR_3, VAR_15, VAR_17 );

                FUNC_7( FUNC_6("        internet address = %s\n"), VAR_15 );

                FUNC_7( FUNC_6("        ttl = %d ()\n"), (int)VAR_14 );
            }
        }
    }

    FUNC_7( FUNC_6("\n------------\n") );
}
