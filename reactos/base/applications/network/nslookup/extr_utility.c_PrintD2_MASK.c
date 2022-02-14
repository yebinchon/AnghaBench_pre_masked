
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int USHORT ;
typedef int UCHAR ;
typedef int * PUSHORT ;
typedef int * PSHORT ;
typedef int* PCHAR ;
typedef scalar_t__ DWORD ;
typedef int CHAR ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int*,int *,int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,...) ;
 int FUNC_7 (int ) ;

void FUNC_8( PCHAR VAR_0, DWORD VAR_1 )
{
    USHORT VAR_2;
    UCHAR VAR_3, VAR_4;
    USHORT VAR_5, VAR_6, VAR_7, VAR_8;
    USHORT VAR_9, VAR_10;
    CHAR VAR_11[255];
    int VAR_12 = 0, VAR_13 = 0;

    VAR_2 = FUNC_7( ((PUSHORT)&VAR_0[VAR_12])[0] );
    VAR_12 += 2;

    VAR_3 = VAR_0[VAR_12];
    VAR_12 += 1;

    VAR_4 = VAR_0[VAR_12];
    VAR_12 += 1;

    VAR_5 = FUNC_7( ((PSHORT)&VAR_0[VAR_12])[0] );
    VAR_12 += 2;

    VAR_6 = FUNC_7( ((PSHORT)&VAR_0[VAR_12])[0] );
    VAR_12 += 2;

    VAR_7 = FUNC_7( ((PUSHORT)&VAR_0[VAR_12])[0] );
    VAR_12 += 2;

    VAR_8 = FUNC_7( ((PUSHORT)&VAR_0[VAR_12])[0] );
    VAR_12 += 2;

    FUNC_6( FUNC_5("------------\n") );
    FUNC_6( FUNC_5("SendRequest(), len %d\n"), (int)VAR_1 );
    FUNC_6( FUNC_5("    HEADER:\n") );
    FUNC_6( FUNC_5("        opcode = %s, id = %d, rcode = %s\n"),
                 FUNC_2( (VAR_3 & 0x78) >> 3 ),
                 (int)VAR_2,
                 FUNC_3( VAR_4 & 0x0F ) );

    FUNC_6( FUNC_5("        header flags:  query") );
    if( VAR_3 & 0x01 ) FUNC_6( FUNC_5(", want recursion") );
    FUNC_6( FUNC_5("\n") );

    FUNC_6( FUNC_5("        questions = %d,  answers = %d,"
                 "  authority records = %d,  additional = %d\n\n"),
                 (int)VAR_5,
                 (int)VAR_6,
                 (int)VAR_7,
                 (int)VAR_8 );

    if( VAR_5 )
    {
        FUNC_6( FUNC_5("    QUESTIONS:\n") );

        for( VAR_13 = 0; VAR_13 < VAR_5; VAR_13 += 1 )
        {
            VAR_12 += FUNC_1( VAR_0, VAR_11, VAR_12, 0 );

            FUNC_6( FUNC_5("        %s"), VAR_11 );

            VAR_9 = FUNC_7( ((PUSHORT)&VAR_0[VAR_12])[0] );
            VAR_12 += 2;

            VAR_10 = FUNC_7( ((PUSHORT)&VAR_0[VAR_12])[0] );
            VAR_12 += 2;

            FUNC_6( FUNC_5(", type = %s, class = %s\n"),
                      FUNC_4( VAR_9 ),
                      FUNC_0( VAR_10 ) );
        }
    }

    FUNC_6( FUNC_5("\n------------\n") );
}
